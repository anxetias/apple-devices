// rea decompile_all
// name: __runWakeupOperation
// address: 0x10d006
// body: available
// range: 0x10d006-0x10d0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __runWakeupOperation(double param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined4 local_1c;
  
  local_1c = 0xe8000001;
  lVar3 = _AMDeviceWakeupOperationCreateWithToken(__wakeupOperationCallback,&local_1c,param_2);
  if (lVar3 == 0) {
    local_1c = 0xe800007d;
  }
  else {
    uVar4 = _CFRunLoopGetCurrent();
    cVar1 = _AMDeviceWakeupOperationSchedule
                      (lVar3,uVar4,&cf_com_apple_MobileDevice_WakeupOperationPrivateMode);
    if (cVar1 == '\0') {
      local_1c = 0xe800007d;
    }
    else {
      dVar5 = (double)_CFAbsoluteTimeGetCurrent();
      dVar6 = dVar5 + 40.0;
      dVar5 = (double)(~-(ulong)(param_1 == -1.0) & (ulong)(dVar5 + param_1) |
                      -(ulong)(param_1 == -1.0) & (ulong)dVar6);
      if (dVar5 <= dVar6) {
        dVar6 = dVar5;
      }
      local_1c = 0xe800000c;
      do {
        dVar5 = (double)_CFAbsoluteTimeGetCurrent();
        iVar2 = _CFRunLoopRunInMode(dVar6 - dVar5,
                                    &cf_com_apple_MobileDevice_WakeupOperationPrivateMode,1);
      } while (iVar2 != 1);
    }
    _AMDeviceWakeupOperationInvalidate(lVar3);
    _CFRelease(lVar3);
  }
  return local_1c;
}

