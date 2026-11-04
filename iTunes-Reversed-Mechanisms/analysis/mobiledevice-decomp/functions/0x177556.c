// rea decompile_all
// name: __AMRDeviceLogHandleReadEvent
// address: 0x177556
// body: available
// range: 0x177556-0x177720 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17771c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRDeviceLogHandleReadEvent(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  cfstringStruct *local_448;
  undefined1 local_439 [1025];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 == 0) {
    local_448 = &cf_Can_thandlelogdataeventwithoutcontext;
  }
  else {
    ___bzero(local_439 + 1,0x400);
    uVar1 = _dispatch_source_get_data(*(dispatch_source_t *)(param_1 + 0x10));
    if (uVar1 == 0) {
      local_439[0] = 0;
      local_448 = (cfstringStruct *)0x0;
      uVar2 = _CFArrayCreateMutable(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,3,0);
      _CFArrayAppendValue(uVar2,*(undefined8 *)(param_1 + 0x28));
      _CFArrayAppendValue(uVar2,*(undefined8 *)(param_1 + 0x20));
      _CFArrayAppendValue(uVar2,local_439);
      ___thr_AMRDeviceLogStopWatchingDevice(uVar2);
    }
    else if (*(char *)(param_1 + 0x34) == '\0') {
      local_448 = (cfstringStruct *)0x0;
      uVar6 = 0;
      while( true ) {
        sVar5 = uVar1 - uVar6;
        if (0x3ff < sVar5) {
          sVar5 = 0x400;
        }
        uVar3 = _recv(*(int *)(param_1 + 0x30),local_439 + 1,sVar5,0);
        if (uVar3 == 0xffffffffffffffff) break;
        if (uVar3 == 0) goto LAB_001776e0;
        lVar4 = _AMRCopyFormattedLogDataAndScrub
                          (local_439 + 1,uVar3 & 0xffffffff,(int)*(char *)(param_1 + 0x35));
        *(undefined1 *)(param_1 + 0x35) = (local_439 + 1)[uVar3 - 1];
        if (lVar4 == 0) {
          local_448 = &cf_FailedtocreateNSDatawithsocketbytes;
          goto LAB_001776e0;
        }
        uVar6 = uVar6 + uVar3;
        (**(code **)(*(long *)(param_1 + 0x28) + 8))
                  (*(undefined8 *)(param_1 + 0x20),lVar4,&cf_DeviceLogType);
        _CFRelease(lVar4);
        if ((uVar1 == uVar6) || (*(char *)(param_1 + 0x34) != '\0')) goto LAB_001776e0;
      }
      local_448 = &cf_Failedtoreadlogdatafromsocket;
    }
    else {
      local_448 = (cfstringStruct *)0x0;
    }
  }
LAB_001776e0:
  _AMRSafeLogAndRelease(3,local_448);
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

