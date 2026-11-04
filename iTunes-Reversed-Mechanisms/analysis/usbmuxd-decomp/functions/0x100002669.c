// rea decompile_all
// name: FUN_100002669
// address: 0x100002669
// body: available
// range: 0x100002669-0x1000028aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000026f2 to 0x1000008d2 FUN_1000008d2 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1000028a6 to 0x100002ac7 FUN_100002ac7 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100002669(int param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (param_3 == 0) {
    if (DAT_100021030 < 3) {
      return;
    }
    FUN_1000008d2(3,0,&cf_Callbackcontexthasbeenlost_);
    return;
  }
  lVar3 = FUN_100008f33(*(undefined4 *)(param_3 + 8));
  if (lVar3 == 0) {
    if (6 < DAT_100021030) {
      FUN_1000008d2(7,0,&cf__sdevice_uisnolongerattached_,"HandleDeviceAttachHelperCallback",
                    *(undefined4 *)(param_3 + 8));
    }
    goto LAB_100002895;
  }
  lVar4 = _CFPreferencesCopyAppValue(&cf_USBHeartbeat,&cf_com_apple_usbmuxd);
  if (lVar4 == 0) {
    bVar7 = false;
  }
  else {
    cVar1 = _CFEqual(lVar4,*(undefined8 *)PTR__kCFBooleanTrue_10001c030);
    bVar7 = cVar1 != '\0';
    _CFRelease(lVar4);
  }
  if (*(int *)(lVar3 + 0x18) == 2) {
    if (param_1 == 0) {
      param_1 = FUN_10000f9bb(param_2,lVar3);
      if (param_1 == 0 || DAT_100021034 != '\0') goto LAB_100002821;
      if (2 < DAT_100021030) {
        uVar6 = *(undefined8 *)(lVar3 + 0x28);
        pcVar5 = &cf__sunabletoinitializeheartbeatforWiFidevice___0x_x_Ignoringdevice_;
        goto LAB_100002883;
      }
    }
    else if (2 < DAT_100021030) {
      uVar6 = *(undefined8 *)(lVar3 + 0x28);
      pcVar5 = &cf__spreflightingfailedforWiFidevice___0x_x_Ignoringdevice_;
LAB_100002883:
      FUN_1000008d2(3,0,pcVar5,"HandleDeviceAttachHelperCallback",uVar6,param_1);
    }
    *(undefined4 *)(lVar3 + 0x1ac) = 0;
  }
  else {
    if (bVar7 && param_1 == 0) {
      if (6 < DAT_100021030) {
        FUN_1000008d2(7,0,&cf__sinitializingheartbeatforUSBdevice__,
                      "HandleDeviceAttachHelperCallback",*(undefined8 *)(lVar3 + 0x28));
      }
      iVar2 = FUN_10000f9bb(param_2,lVar3);
      if (2 < DAT_100021030 && iVar2 != 0) {
        FUN_1000008d2(3,0,&cf__sunabletoinitializeheartbeatforUSBdevice___0x_x_,
                      "HandleDeviceAttachHelperCallback",*(undefined8 *)(lVar3 + 0x28),iVar2);
      }
    }
LAB_100002821:
    if (6 < DAT_100021030) {
      FUN_1000008d2(7,0,&cf__snotifyingclientsofattachfordevice___,
                    "HandleDeviceAttachHelperCallback",*(undefined8 *)(lVar3 + 0x28));
    }
    *(undefined4 *)(lVar3 + 0x1ac) = 2;
    FUN_1000028ab(lVar3);
  }
LAB_100002895:
  FUN_100002ac7(param_3);
  return;
}

