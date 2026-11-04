// rea decompile_all
// name: _MISCryptoCreateCMSSignatureWithRSACallBack
// address: 0xbd113
// body: available
// range: 0xbd113-0xbd2b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_MISCryptoCreateCMSSignatureWithRSACallBack(long param_1,void *param_2,long param_3,int *param_4)

{
  long lVar1;
  undefined8 uVar2;
  EVP_PKEY *pkey;
  rsa_st *rsa;
  undefined8 uVar3;
  RSA_METHOD local_b8;
  X509 *local_48;
  RSA *local_40;
  int local_34;
  
  local_34 = 0;
  _pthread_once((pthread_once_t *)&_initializeOpenSSLOnce,_initializeOpenSSL);
  if (param_3 != 0 && (param_2 != (void *)0x0 && param_1 != 0)) {
    lVar1 = _CFArrayGetCount(param_3);
    if (0 < lVar1) {
      uVar3 = 0;
      uVar2 = _CFArrayGetValueAtIndex(param_3,0);
      local_48 = (X509 *)_readCertificate(uVar2,&local_34);
      if (local_34 == 0) {
        local_b8.rsa_verify = (_func_5165 *)0x0;
        local_b8.rsa_keygen = (_func_5166 *)0x0;
        local_b8.app_data = (char *)0x0;
        local_b8.rsa_sign = _MISCryptoRSASigningCallBack;
        local_b8.finish = (_func_5163 *)0x0;
        local_b8.flags = 0x40;
        local_b8._76_4_ = 0;
        local_b8.bn_mod_exp = (_func_5161 *)0x0;
        local_b8.init = (_func_5162 *)0x0;
        local_b8.rsa_priv_dec = (_func_5159 *)0x0;
        local_b8.rsa_mod_exp = (_func_5160 *)0x0;
        local_b8.rsa_pub_dec = (_func_5157 *)0x0;
        local_b8.rsa_priv_enc = (_func_5158 *)0x0;
        local_b8.name = "MISCrypto";
        local_b8.rsa_pub_enc = (_func_5156 *)0x0;
        pkey = _X509_get_pubkey(local_48);
        if (pkey == (EVP_PKEY *)0x0) {
          local_34 = -0x17ff7ff9;
          uVar3 = 0;
        }
        else {
          rsa = _EVP_PKEY_get1_RSA(pkey);
          if (rsa == (rsa_st *)0x0) {
            local_34 = -0x17ff7ffa;
            uVar3 = 0;
          }
          else {
            *(byte *)&rsa->flags = (byte)rsa->flags | 0x40;
            local_40 = rsa;
            _RSA_set_method(rsa,&local_b8);
            _RSA_set_ex_data(local_40,0,param_2);
            uVar3 = _createCMSSignature(param_1,pkey,param_3,&local_34);
            _RSA_free(local_40);
          }
          _EVP_PKEY_free(pkey);
        }
        _X509_free(local_48);
      }
      goto LAB_000bd26d;
    }
  }
  local_34 = 0xc016;
  uVar3 = 0;
LAB_000bd26d:
  if (param_4 != (int *)0x0) {
    *param_4 = local_34;
  }
  return uVar3;
}

