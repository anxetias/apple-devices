// rea decompile_all
// name: ___thr_AMRestorableDeviceAdvanceStateMachineAsyncFinished
// address: 0x162534
// body: available
// range: 0x162534-0x162753 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x162703 to 0x158b35 __AMRestorableDeviceSetState (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRestorableDeviceAdvanceStateMachineAsyncFinished(long *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar11 = *param_1;
  lVar5 = param_1[2];
  lVar6 = param_1[3];
  uVar1 = *(uint *)(lVar11 + 0x2c);
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar1 != uVar2) {
    if (uVar2 < 7) {
      uVar9 = *(undefined8 *)(&DAT_0044a348 + (ulong)uVar2 * 8);
    }
    else {
      uVar9 = 0;
    }
    if (uVar1 < 7) {
      uVar7 = *(undefined8 *)(&DAT_0044a348 + (ulong)uVar1 * 8);
    }
    else {
      uVar7 = 0;
    }
    _AMRSafeLog(4,&cf_Unexpectedstatechangefrom____to____whilerestoring,uVar9,uVar7);
  }
  lVar10 = *(long *)(lVar11 + 0x10);
  if ((char)lVar5 == '\0') {
    if (lVar6 == 0 || lVar10 == 0) {
      if ((lVar10 == 0) && (lVar10 = lVar6, lVar6 == 0)) {
        uVar9 = 0;
      }
      else {
        uVar9 = _CFRetain(lVar10);
      }
    }
    else {
      lVar5 = _CFErrorCopyDescription(lVar10);
      uVar9 = _CFErrorGetCode(lVar10);
      uVar7 = _CFErrorGetDomain(lVar10);
      uVar9 = _AMRCreateErrorWithDomain(lVar5,uVar9,uVar7,lVar6);
      if (lVar5 != 0) {
        _CFRelease(lVar5);
      }
    }
    if (*(long *)(lVar11 + 0x10) != 0) {
      _CFRelease();
    }
    *(undefined8 *)(lVar11 + 0x10) = uVar9;
  }
  else {
    if (lVar10 != 0) {
      _CFRelease(lVar10);
    }
    *(undefined8 *)(lVar11 + 0x10) = 0;
    cVar3 = __AMRestorableStateMachineIsComplete(*(undefined8 *)(*param_1 + 0x18));
    if (cVar3 != '\0') {
      lVar6 = *(long *)(*param_1 + 0x50);
      if (lVar6 != 0) {
        lVar5 = _CFDictionaryGetValue(lVar6,&cf_WaitForDeviceConnectionToFinishStateMachine);
        lVar6 = _CFDictionaryGetValue(lVar6,&cf_DontExpectReboot);
        if (((lVar5 != 0) && (cVar3 = _CFBooleanGetValue(lVar5), cVar3 == '\0')) ||
           ((lVar6 != 0 && (cVar3 = _CFBooleanGetValue(lVar6), cVar3 != '\0')))) {
          _AMRSafeLog(7,&cf_Sendingrestorecompleteeventimmediatelyasrequestedinrestoreoptions);
          lVar11 = *param_1;
          uVar9 = 1;
          goto LAB_001626f5;
        }
      }
      _AMRSafeLog(7,&cf_Waitingfordevicetoconnectbacktohosttosendrestorecompleteevent);
    }
    if ((*(int *)(lVar11 + 0x2c) != 6) || (*(long *)(lVar11 + 0x20) != param_1[1])) {
      return;
    }
    iVar4 = __AMDeviceProxyGetState();
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = 0xffffffff;
      if (iVar4 - 1U < 6) {
        uVar8 = *(undefined4 *)(&DAT_00330b70 + (ulong)(iVar4 - 1U) * 4);
      }
      __AMRestorableDeviceNotifyStatusInfoChanged(lVar11,uVar8,0xffffffff,0);
      uVar9 = 4;
      goto LAB_001626f5;
    }
    __AMRestorableRemoveDevice(lVar11);
  }
  uVar9 = 2;
LAB_001626f5:
  __AMRestorableDeviceSetState(lVar11,uVar9);
  return;
}

