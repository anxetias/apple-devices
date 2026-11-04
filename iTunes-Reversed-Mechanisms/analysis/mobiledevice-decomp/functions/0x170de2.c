// rea decompile_all
// name: __add_ext
// address: 0x170de2
// body: available
// range: 0x170de2-0x170f0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __add_ext(X509 *param_1,int param_2,char *param_3)

{
  int iVar1;
  X509_EXTENSION *ex;
  undefined8 uVar2;
  X509V3_CTX local_68;
  
  local_68.crl = (X509_CRL *)0x0;
  local_68.db_meth = (X509V3_CONF_METHOD *)0x0;
  local_68.subject_cert = (X509 *)0x0;
  local_68.subject_req = (X509_REQ *)0x0;
  local_68.flags = 0;
  local_68._4_4_ = 0;
  local_68.issuer_cert = (X509 *)0x0;
  local_68.db = (void *)0x0;
  uVar2 = 0;
  _X509V3_set_ctx(&local_68,param_1,param_1,(X509_REQ *)0x0,(X509_CRL *)0x0,0);
  ex = _X509V3_EXT_conf_nid((LHASH *)0x0,&local_68,param_2,param_3);
  if (ex == (X509_EXTENSION *)0x0) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,1,"Failed to get extension.");
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = _X509_add_ext(param_1,ex,-1);
    if (iVar1 == 0) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,1,"Failed to add extension.");
      uVar2 = 0xffffffff;
    }
    _X509_EXTENSION_free(ex);
  }
  return uVar2;
}

