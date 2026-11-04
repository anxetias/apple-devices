// rea decompile_all
// name: _AFCConnectionUnscheduleFromRunLoop
// address: 0xba5fb
// body: available
// range: 0xba5fb-0xba6eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xba6a1 to 0xbb951 _AFCLog (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xba6e7 to 0xbb076 _AFCLockUnlock (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AFCConnectionUnscheduleFromRunLoop(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = _CFRunLoopGetCurrent();
  _AFCLog(5,"%s(%p, %p) [%p]","AFCConnectionUnscheduleFromRunLoop",param_1,param_2,uVar1);
  _AFCConnectionInvalidate(param_1);
  _AFCLockLock(*(undefined8 *)(param_1 + 0x88));
  if (*(long *)(param_1 + 0xc0) == 0) {
    _AFCLog(5,"Connection %p already unscheduled",param_1);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      *(undefined1 *)(param_1 + 0x20) = 1;
      _AFCLockUnlock(*(undefined8 *)(param_1 + 0x88));
      ___AFCConnectionSignalIOLoop(param_1);
      _AFCConditionWait((double)(*(long *)(param_1 + 0x68) << 2),*(undefined8 *)(param_1 + 0x28));
      _AFCLog(5,"%s(%p, %p) finished","AFCConnectionUnscheduleFromRunLoop",param_1,param_2);
      return;
    }
    _AFCLog(5,"Connection %p already invalid, just unscheduling",param_1);
    ___AFCConnectionUnscheduleFromRunLoop(param_1);
  }
  _AFCLockUnlock(*(undefined8 *)(param_1 + 0x88));
  return;
}

