// rea decompile_all
// name: __AMRestorableDeviceHandleDisconnection
// address: 0x1617f8
// body: available
// range: 0x1617f8-0x161978 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16191f to 0x17415e __AMRHostLogMapCurrentThreadToDevice (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMRestorableDeviceHandleDisconnection(long param_1)

{
  char cVar1;
  int iVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  
  __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78),param_1);
  __AMRestorableDeviceLogStateChange(*(undefined8 *)(param_1 + 0x20),0);
  cVar1 = *(char *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x28) = 0;
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
  case 1:
  case 2:
    cVar1 = __AMRestorableRemoveDevice(param_1);
    if (cVar1 != '\0') goto LAB_0016190e;
    _AMRSafeLog(3,&cf___,&cf_Failedtoremovedevicefrominternaltracking);
    pcVar3 = &cf_Failedtoremovedevicefrominternaltracking;
    goto LAB_00161972;
  case 3:
    pcVar3 = &cf_Weird_adisappeareddevicewasremoved_Thatdoesn_tsoundright_;
    uVar4 = 4;
    break;
  case 4:
    if (cVar1 == '\0') {
      pcVar3 = &
               cf_Wegotaseconddisconnecteventforadevicebutnevergotaconnectevent_whichmeanswehaveanunstableUSBconnection_Harmlessbyitself_butbothunstableconnectionandmissingUSBeventscancausefailureslaterintheflow_
      ;
      goto LAB_00161902;
    }
    pcVar3 = &cf_Devicedisconnectedduringtransition;
    uVar4 = 6;
    break;
  case 5:
    pcVar3 = &cf_Devicebouncedduringrestoredebouncetimer___;
    uVar4 = 7;
    break;
  case 6:
    iVar2 = __AMDeviceProxyGetState(*(undefined8 *)(param_1 + 0x20));
    if (iVar2 != 3) goto LAB_0016190e;
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
      AMDeviceProxy::Log(0,(__CFString *)((long)&MACH_HEADER.magic + 3),&cf_failedtoget_sfrom_s,
                         "restoreOS completed status","NULL proxy");
    }
    else {
      cVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x90))();
      if (cVar1 != '\0') goto LAB_0016190e;
    }
    pcVar3 = *(cfstringStruct **)(param_1 + 0x10);
    uVar4 = _AMRCreateErrorWithDomain
                      (&cf_RestoreOSdeviceremovedbeforerestoredcompleted,9,
                       &cf_com_apple_MobileDevice_MobileRestore,pcVar3);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    if (pcVar3 == (cfstringStruct *)0x0) goto LAB_0016190e;
LAB_00161972:
    _CFRelease(pcVar3);
    goto LAB_0016190e;
  case 7:
    _AMRLog(6,&cf_Devicedisconnectedwhilepreparing_ignoringdisconnectincaseitshowsupagain);
    *(undefined4 *)(param_1 + 0x2c) = 8;
    goto LAB_0016190e;
  case 8:
    pcVar3 = &cf_Deviceremovedwhenalreadyinremovedwhilepreparingstate____Thisisabug_;
    goto LAB_00161902;
  default:
    pcVar3 = &cf_Can_thandledisconnectionofdeviceinunknownstate;
LAB_00161902:
    uVar4 = 3;
  }
  _AMRLog(uVar4,pcVar3);
LAB_0016190e:
  __AMRHostLogMapCurrentThreadToDevice(*(undefined8 *)(_gRestorableData + 0x78),0);
  return;
}

