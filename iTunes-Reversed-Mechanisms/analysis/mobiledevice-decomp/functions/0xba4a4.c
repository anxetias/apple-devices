// rea decompile_all
// name: _AFCConnectionScheduleWithRunLoop
// address: 0xba4a4
// body: available
// range: 0xba4a4-0xba5fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AFCConnectionScheduleWithRunLoop(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  code *local_30;
  
  _AFCLockLock(*(undefined8 *)(param_1 + 0x88));
  if (*(int *)(param_1 + 0x10) == 1) {
    if (*(long *)(param_1 + 0xc0) == 0) {
      uVar1 = _CFRetain(param_2);
      *(undefined8 *)(param_1 + 0xc0) = uVar1;
      uVar1 = _CFStringCreateCopy(0,param_3);
      *(undefined8 *)(param_1 + 200) = uVar1;
      if (*(long *)(param_1 + 0xb0) == 0) {
        uVar1 = _CFGetAllocator(param_1);
        uVar1 = _CFSocketCreateRunLoopSource(uVar1,*(undefined8 *)(param_1 + 0x30),200);
        *(undefined8 *)(param_1 + 0xb0) = uVar1;
        _CFRunLoopAddSource(param_2,uVar1,param_3);
        _CFSocketEnableCallBacks(*(undefined8 *)(param_1 + 0x30),1);
      }
      if (*(long *)(param_1 + 0xb8) == 0) {
        local_78 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_38 = 0;
        local_30 = ___AFCConnectionPerformOperationCallBack;
        lStack_70 = param_1;
        uVar1 = _CFGetAllocator(param_1);
        uVar1 = _CFRunLoopSourceCreate(uVar1,100,&local_78);
        *(undefined8 *)(param_1 + 0xb8) = uVar1;
        _CFRunLoopAddSource(param_2,uVar1,param_3);
      }
      _AFCLockUnlock(*(undefined8 *)(param_1 + 0x88));
      uVar1 = 0;
    }
    else {
      _AFCLog(2,"Trying to add to run loop when already on run loop");
      uVar1 = 0xe8004007;
    }
  }
  else {
    _AFCLockUnlock(*(undefined8 *)(param_1 + 0x88));
    uVar1 = 0xe800400b;
  }
  return uVar1;
}

