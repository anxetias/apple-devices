// rea decompile_all
// name: _AMDeviceWakeupUsingToken
// address: 0x10cdd3
// body: available
// range: 0x10cdd3-0x10cf99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10ce77 to 0x10d006 __runWakeupOperation (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10cf95 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMDeviceWakeupUsingToken(double param_1,void *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  pthread_t local_68;
  pthread_attr_t local_60;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar2 = 0xe8000007;
  if (param_2 != (void *)0x0) {
    if ((param_1 != 0.0) || (NAN(param_1))) {
      if (((param_1 == -1.0) && (!NAN(param_1))) || (0.0 < param_1)) {
        if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
          uVar2 = __runWakeupOperation(param_2);
          return uVar2;
        }
        goto LAB_0010cf95;
      }
    }
    else {
      iVar1 = _pthread_attr_init(&local_60);
      if (iVar1 == 0) {
        iVar1 = _pthread_attr_setdetachstate(&local_60,1);
        if (iVar1 == 0) {
          iVar1 = _pthread_create(&local_68,&local_60,(void **)__wakeupPthreadRoutine,param_2);
          if (iVar1 == 0) {
            _pthread_attr_destroy(&local_60);
            uVar2 = 0;
            goto LAB_0010ced6;
          }
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar2 = _md_log_log;
          pcVar3 = _strerror(iVar1);
          pcVar4 = "Could not start background wakeup thread: %d, %s";
        }
        else {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          uVar2 = _md_log_log;
          pcVar3 = _strerror(iVar1);
          pcVar4 = "Could not set detached state on attributes: %d, %s";
        }
      }
      else {
        if (_md_log_onceToken != -1) {
          _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
        }
        uVar2 = _md_log_log;
        pcVar3 = _strerror(iVar1);
        pcVar4 = "Could not create thread attribtues: %d, %s";
      }
      __os_log_internal(0,uVar2,0x10,pcVar4,iVar1,pcVar3);
      uVar2 = 0xe8000003;
    }
  }
LAB_0010ced6:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_20) {
    return uVar2;
  }
LAB_0010cf95:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

