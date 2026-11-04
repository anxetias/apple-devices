// rea decompile_all
// name: AMRLocalUSBDevice::openDeviceWithReply:
// address: 0xfb74f
// body: available
// range: 0xfb74f-0xfb8a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void AMRLocalUSBDevice::openDeviceWithReply_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  int iVar6;
  
  iVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x40))();
  if (iVar2 == 0) {
LAB_000fb80c:
    plVar1 = *(long **)(param_1 + 8);
    iVar6 = 0;
    iVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1,0);
    if ((iVar2 == 0) && (iVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,0), iVar2 == 0)) {
      uVar4 = 0;
      goto LAB_000fb876;
    }
    pcVar5 = &cf_errorsettingconfigurationdescriptor_0x_x;
LAB_000fb859:
    uVar4 = _createAndLogUSBError(iVar2,pcVar5,iVar2);
  }
  else {
    if (iVar2 != -0x1ffffd3b) {
      pcVar5 = &cf_erroropeningUSBdevice_0x_x;
      goto LAB_000fb859;
    }
    (*(code *)PTR__objc_msgSend_00441098)(param_1,"printDeviceWithExclusiveAccess");
    iVar2 = _IOServiceAddInterestNotification
                      (__notificationPort,*(undefined4 *)(param_1 + 0x20),"IOGeneralInterest",
                       __handleUSBDeviceGeneralInterestNotification,param_1,param_1 + 0x24);
    if (iVar2 != 0) {
      pcVar5 = &cf_errorschedulingUSBdevicenotification_0x_x;
      goto LAB_000fb859;
    }
    _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(param_1 + 0x28),0xffffffffffffffff);
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 == 0) goto LAB_000fb80c;
    iVar6 = 0;
    uVar4 = _createAndLogUSBError(iVar2,&cf_erroropeningUSBdeviceinthebackground_0x_x,iVar2);
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 == 0) goto LAB_000fb876;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x48))();
  iVar6 = iVar2;
LAB_000fb876:
  uVar3 = __AMRestoreErrorForIOReturn(iVar6,0x7da);
  (**(code **)(param_3 + 0x10))(param_3,uVar3,uVar4);
  return;
}

