// rea decompile_all
// name: ___thr_AMRecoveryDeviceConnected
// address: 0x164563
// body: available
// range: 0x164563-0x164688 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x164666 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___thr_AMRecoveryDeviceConnected(long param_1)

{
  int *piVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == 0) {
    plVar2 = (long *)0x0;
  }
  else {
    _AMRSafePrintLog(5,&cf_Entered__s_libusbrestore_device_0x_p,"__thr_AMRecoveryDeviceConnected",
                     param_1);
    plVar2 = (long *)__AMDeviceProxyCreateRecoveryProxy(param_1);
  }
  uVar3 = _AMRecoveryModeDeviceGetECID(param_1);
  _AMRLog(7,&cf_RecoverymodedeviceconnectedwithECID_0x_lX,uVar3);
  if (plVar2 == (long *)0x0) {
    _AMRSafeLogAndRelease(3,&cf_Failedtocreaterecoveryproxy);
    goto LAB_00164654;
  }
  lVar4 = __AMRestorableCopyTrackedDevice(param_1);
  if (lVar4 == 0) {
    _AMRLog(7,&cf_Foundnewdevice_);
    lVar4 = __AMRestorableDeviceCreate(plVar2);
    __AMRestorableAddNewDevice(lVar4);
    _AMRSafeLogAndRelease(3,0);
    if (lVar4 != 0) goto LAB_0016463c;
  }
  else {
    _AMRLog(7,&cf_Foundknowndevice_nudgingstatemachine_);
    __AMRestorableAddKnownDevice(lVar4,plVar2);
    _AMRSafeLogAndRelease(3,0);
LAB_0016463c:
    _CFRelease(lVar4);
  }
  LOCK();
  piVar1 = (int *)((long)plVar2 + 0x14);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
LAB_00164654:
  if (param_1 != 0) {
    _CFRelease(param_1);
    return;
  }
  return;
}

