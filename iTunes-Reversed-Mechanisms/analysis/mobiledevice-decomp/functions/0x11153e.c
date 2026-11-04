// rea decompile_all
// name: __ssl_verify_callback
// address: 0x11153e
// body: available
// range: 0x11153e-0x1116fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __ssl_verify_callback(int param_1,X509_STORE_CTX *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  X509 *a;
  void *pvVar4;
  long lVar5;
  X509 *a_00;
  undefined8 uVar6;
  uchar *local_30;
  uchar *local_28;
  
  local_30 = (uchar *)0x0;
  local_28 = (uchar *)0x0;
  if ((param_1 == 0) && (iVar1 = _X509_STORE_CTX_get_error(param_2), iVar1 - 0x16U < 0xfffffffe)) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar6 = _md_log_log;
    pcVar3 = _X509_verify_cert_error_string((long)iVar1);
    __os_log_internal(0,uVar6,1,"Error verifying cert: (%d) %s",iVar1,pcVar3);
    return 0;
  }
  a = _X509_STORE_CTX_get_current_cert(param_2);
  if (a == (X509 *)0x0) {
LAB_001116cc:
    a_00 = (X509 *)0x0;
LAB_0011165f:
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    uVar6 = 0;
    __os_log_internal(0,_md_log_log,1,"Error verifying cert: unable to compare");
    if (a_00 == (X509 *)0x0) goto LAB_001116a2;
  }
  else {
    iVar1 = _SSL_get_ex_data_X509_STORE_CTX_idx();
    pvVar4 = _X509_STORE_CTX_get_ex_data(param_2,iVar1);
    if (((pvVar4 == (void *)0x0) || (lVar5 = _SSL_get_ex_data(pvVar4), lVar5 == 0)) ||
       (a_00 = (X509 *)__decode_certificate(lVar5), a_00 == (X509 *)0x0)) goto LAB_001116cc;
    iVar1 = _i2d_X509(a,(uchar **)0x0);
    iVar2 = _i2d_X509(a_00,(uchar **)0x0);
    if (((iVar1 != iVar2) || (iVar2 = _i2d_X509(a,&local_30), iVar1 != iVar2)) ||
       ((iVar2 = _i2d_X509(a_00,&local_28), iVar1 != iVar2 ||
        (iVar1 = _memcmp(local_28,local_30,(long)iVar1), iVar1 != 0)))) goto LAB_0011165f;
    uVar6 = 1;
  }
  _X509_free(a_00);
LAB_001116a2:
  if (local_28 != (uchar *)0x0) {
    _CRYPTO_free(local_28);
  }
  if (local_30 != (uchar *)0x0) {
    _CRYPTO_free(local_30);
  }
  return uVar6;
}

