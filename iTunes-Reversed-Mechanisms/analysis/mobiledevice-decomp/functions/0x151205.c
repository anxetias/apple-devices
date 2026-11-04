// rea decompile_all
// name: _AMDeviceCreateHouseArrestService
// address: 0x151205
// body: available
// range: 0x151205-0x15131f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMDeviceCreateHouseArrestService(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long local_30;
  int local_24;
  
  local_24 = -1;
  local_30 = 0;
  iVar1 = -0x17fffff9;
  if (param_4 != (long *)0x0 && (param_2 != 0 && param_1 != 0)) {
    iVar1 = _AMDeviceStartHouseArrestService(param_1,param_2,param_3,&local_24,&local_30);
    if (iVar1 == 0) {
      iVar1 = 0;
      lVar2 = _AFCConnectionCreate(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_24,1,0,0);
      *param_4 = lVar2;
      if (lVar2 != 0) {
        _AFCConnectionSetSecureContext(lVar2);
        local_30 = 0;
        goto LAB_001512a7;
      }
      iVar1 = -0x17fffffd;
    }
    if (local_30 != 0) {
      _SSL_free(local_30);
    }
  }
  if (local_24 != -1) {
    _close(local_24);
  }
LAB_001512a7:
  if (_md_log_onceToken != -1) {
    _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
  }
  __os_log_internal(0,_md_log_log,2,"returned %x for app with ID %@",iVar1,param_2);
  return iVar1;
}

