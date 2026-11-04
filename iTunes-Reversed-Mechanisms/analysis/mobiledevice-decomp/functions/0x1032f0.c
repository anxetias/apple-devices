// rea decompile_all
// name: __AMDevicePreflightOperationRunLoopSourceScheduleCallback
// address: 0x1032f0
// body: available
// range: 0x1032f0-0x10342e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMDevicePreflightOperationRunLoopSourceScheduleCallback
               (void *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  pthread_t in_RAX;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  pthread_t local_28;
  
  if ((param_1 == (void *)0x0) || (*(int *)((long)param_1 + 0x10) != 0x6c667270)) {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    __os_log_internal(0,_md_log_log,0x10,"Context is corrupt.");
  }
  else {
    local_28 = in_RAX;
    _CFRetain(param_1);
    *(undefined8 *)((long)param_1 + 0x78) = param_2;
    *(undefined8 *)((long)param_1 + 0x80) = param_3;
    iVar1 = _pthread_create(&local_28,(pthread_attr_t *)0x0,(void **)__AMDevicePreflightWorker,
                            param_1);
    if (iVar1 == 0) {
      iVar1 = _pthread_detach(local_28);
      if (iVar1 == 0) {
        return;
      }
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar4 = _md_log_log;
      pcVar2 = _strerror(iVar1);
      pcVar3 = "Could not detach pair worker: %s. Will leak. Please file a radar.";
    }
    else {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      uVar4 = _md_log_log;
      pcVar2 = _strerror(iVar1);
      pcVar3 = "Could not start pair worker: %s";
    }
    __os_log_internal(0,uVar4,0x10,pcVar3,pcVar2);
  }
  return;
}

