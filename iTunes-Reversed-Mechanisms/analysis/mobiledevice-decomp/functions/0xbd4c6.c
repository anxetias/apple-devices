// rea decompile_all
// name: _MISCryptoVerifyCMSSignature
// address: 0xbd4c6
// body: available
// range: 0xbd4c6-0xbd5f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _MISCryptoVerifyCMSSignature(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *in_RAX;
  void *buf;
  BIO *pBVar2;
  PKCS7 *p7;
  X509_STORE *store;
  BIO_METHOD *type;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_38;
  
  local_38 = in_RAX;
  _pthread_once((pthread_once_t *)&_initializeOpenSSLOnce,_initializeOpenSSL);
  buf = (void *)_CFDataGetBytePtr(param_1);
  iVar1 = _CFDataGetLength(param_1);
  pBVar2 = _BIO_new_mem_buf(buf,iVar1);
  if (pBVar2 == (BIO *)0x0) {
    uVar4 = 0xe800800a;
  }
  else {
    p7 = _d2i_PKCS7_bio(pBVar2,(PKCS7 **)0x0);
    _BIO_free(pBVar2);
    if (p7 == (PKCS7 *)0x0) {
      uVar4 = 0xe8008009;
    }
    else {
      store = _X509_STORE_new();
      type = _BIO_s_mem();
      pBVar2 = _BIO_new(type);
      if (pBVar2 == (BIO *)0x0) {
        uVar4 = 0xe8008009;
      }
      else {
        uVar4 = 0;
        iVar1 = _PKCS7_verify(p7,(STACK *)0x0,store,(BIO *)0x0,pBVar2,0x20);
        if (iVar1 == 0) {
          uVar4 = 0xe8008009;
        }
        else if (param_2 != (undefined8 *)0x0) {
          local_38 = (undefined8 *)0x0;
          uVar4 = 0;
          _BIO_ctrl(pBVar2,0x73,0,&local_38);
          uVar3 = _CFDataCreate(0,local_38[1],*local_38);
          *param_2 = uVar3;
        }
        _BIO_free(pBVar2);
      }
      _X509_STORE_free(store);
      _PKCS7_free(p7);
    }
  }
  return uVar4;
}

