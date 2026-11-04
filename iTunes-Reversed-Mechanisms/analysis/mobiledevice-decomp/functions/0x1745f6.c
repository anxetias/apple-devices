// rea decompile_all
// name: __AMRSerialLogSerialDataIsReadyToRead
// address: 0x1745f6
// body: available
// range: 0x1745f6-0x174750 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17474c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRSerialLogSerialDataIsReadyToRead(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  char *pcVar5;
  undefined8 uVar6;
  size_t sVar7;
  cfstringStruct *pcVar8;
  ulong uVar9;
  undefined8 uStack_440;
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uStack_440 = (code *)0x17462c;
  ___bzero(local_438,0x400);
  uStack_440 = (code *)0x174635;
  uVar1 = _dispatch_source_get_data((dispatch_source_t)param_1[2]);
  if (uVar1 != 0) {
    uVar9 = 0;
    do {
      sVar7 = uVar1 - uVar9;
      if (0x3ff < sVar7) {
        sVar7 = 0x400;
      }
      uStack_440 = (code *)0x174668;
      uVar2 = _read((int)param_1[3],local_438,sVar7);
      if (uVar2 == 0) break;
      if (uVar2 == 0xffffffffffffffff) {
        uStack_440 = (code *)0x17470f;
        piVar4 = ___error();
        uStack_440 = (code *)0x174716;
        pcVar5 = _strerror(*piVar4);
        uStack_440 = (code *)0x174727;
        uVar6 = _AMRMakeString(&cf_serialreaderror__s,pcVar5);
        uStack_440 = (code *)0x174734;
        _AMRSafeLogAndRelease(3,uVar6);
        uStack_440 = (code *)0x174741;
        __AMRSerialLogStopWatchingDevice(*param_1,param_1[1]);
        goto LAB_001746e8;
      }
      uStack_440 = (code *)0x174691;
      lVar3 = _AMRCopyFormattedLogDataAndScrub
                        (local_438,uVar2 & 0xffffffff,(int)*(char *)((long)param_1 + 0x1c));
      *(undefined1 *)((long)param_1 + 0x1c) = local_438[uVar2 - 1];
      if (lVar3 == 0) {
        pcVar8 = &cf_FailedtocreateNSDatawithlogbytes;
        goto LAB_001746de;
      }
      uVar9 = uVar9 + uVar2;
      uStack_440 = (code *)0x1746c5;
      (**(code **)(*param_1 + 0x10))(param_1[1],lVar3,&cf_SerialLogType);
      uStack_440 = (code *)0x1746cd;
      _CFRelease(lVar3);
    } while (uVar1 != uVar9);
  }
  pcVar8 = (cfstringStruct *)0x0;
LAB_001746de:
  uStack_440 = (code *)0x1746e8;
  _AMRSafeLogAndRelease(3,pcVar8);
LAB_001746e8:
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  uStack_440 = __AMRSerialLogCancelDispatchSource;
  ___stack_chk_fail();
}

