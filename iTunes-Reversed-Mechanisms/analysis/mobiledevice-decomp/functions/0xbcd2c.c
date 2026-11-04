// rea decompile_all
// name: _MISCryptoCreateCMSSignatureWithKey
// address: 0xbcd2c
// body: available
// range: 0xbcd2c-0xbcddc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_MISCryptoCreateCMSSignatureWithKey(long param_1,long param_2,long param_3,undefined4 *param_4)

{
  long lVar1;
  EVP_PKEY *pkey;
  undefined8 uVar2;
  undefined4 local_2c;
  
  local_2c = 0;
  _pthread_once((pthread_once_t *)&_initializeOpenSSLOnce,_initializeOpenSSL);
  if (param_3 == 0 || (param_2 == 0 || param_1 == 0)) {
LAB_000bcdb9:
    local_2c = 0xc016;
  }
  else {
    lVar1 = _CFArrayGetCount(param_3);
    if (lVar1 < 1) goto LAB_000bcdb9;
    pkey = (EVP_PKEY *)_readPrivateKey(param_2,&local_2c);
    if (pkey != (EVP_PKEY *)0x0) {
      uVar2 = _createCMSSignature(param_1,pkey,param_3,&local_2c);
      _EVP_PKEY_free(pkey);
      goto LAB_000bcdc3;
    }
  }
  uVar2 = 0;
LAB_000bcdc3:
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_2c;
  }
  return uVar2;
}

