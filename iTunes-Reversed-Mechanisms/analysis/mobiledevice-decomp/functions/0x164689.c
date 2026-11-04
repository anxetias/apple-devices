// rea decompile_all
// name: ___thr_AMDFUDeviceConnected
// address: 0x164689
// body: available
// range: 0x164689-0x1647a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16476b to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMDFUDeviceConnected(long param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  
  plVar5 = (long *)__AMDeviceProxyCreate();
  if (plVar5 == (long *)0x0) {
    _AMRSafeLog(3,&cf___,&cf_FailedtocreateDFUproxy);
    _CFRelease(&cf_FailedtocreateDFUproxy);
  }
  else {
    iVar3 = __AMDeviceProxyGetState(plVar5);
    if (iVar3 == 6) {
      uVar4 = __AMDeviceProxyGetLocationID();
      uVar6 = (ulong)uVar4;
      pcVar8 = &cf_PortDFUmodedeviceconnectedatlocationID_0x_llX;
    }
    else {
      uVar6 = __AMDeviceProxyGetECID(plVar5);
      pcVar8 = &cf_DFUmodedeviceconnectedwithECID_0x_llX;
    }
    _AMRLog(7,pcVar8,uVar6);
    lVar7 = __AMRestorableCopyTrackedDevice(param_1);
    if (lVar7 == 0) {
      lVar7 = __AMRestorableDeviceCreate(plVar5);
      __AMRestorableAddNewDevice(lVar7);
    }
    else {
      _AMRLog(7,&cf_Foundknowndevice_nudgingstatemachine_);
      __AMRestorableAddKnownDevice(lVar7,plVar5);
    }
    uVar2 = __AMRestorableDeviceIsProxyTrackable(*(undefined8 *)(lVar7 + 0x20));
    *(undefined1 *)(lVar7 + 0xb8) = uVar2;
    *(undefined1 *)(lVar7 + 0xb9) = uVar2;
    _CFRelease(lVar7);
    LOCK();
    piVar1 = (int *)((long)plVar5 + 0x14);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  if (param_1 != 0) {
    _CFRelease(param_1);
    return;
  }
  return;
}

