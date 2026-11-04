// rea decompile_all
// name: __AMDeviceCopyDebugDescription
// address: 0x12bb2f
// body: available
// range: 0x12bb2f-0x12bd45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMDeviceCopyDebugDescription(long param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  int iVar9;
  
  if (((param_1 == 0) || (*(long *)(param_1 + 0xf8) == 0)) &&
     (cVar1 = __AMDeviceIsBackedByRSD(param_1), cVar1 == '\0')) {
    iVar9 = *(int *)(param_1 + 0x30);
    if (iVar9 == 1) {
      uVar7 = _CFGetAllocator(param_1);
      pcVar6 = (cfstringStruct *)
               _CFStringCreateWithFormat
                         (uVar7,0,&cf_locationID_0x_x_productID_0x_x,*(undefined4 *)(param_1 + 0x14)
                          ,*(undefined2 *)(param_1 + 0x18));
LAB_0012bcd2:
      iVar9 = *(int *)(param_1 + 0x30);
    }
    else {
      if (iVar9 == 0) {
        uVar7 = _CFGetAllocator(param_1);
        pcVar6 = (cfstringStruct *)
                 _CFStringCreateWithFormat
                           (uVar7,0,&cf_FullServiceName___,*(undefined8 *)(param_1 + 0x88));
        goto LAB_0012bcd2;
      }
      pcVar6 = (cfstringStruct *)0x0;
    }
    uVar4 = _CFGetAllocator(param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    if (iVar9 != 2) {
      lVar3 = 0;
      uVar7 = _CFStringCreateWithFormat
                        (uVar4,0,&cf_AMDevice_p_UDID____deviceID__d____,param_1,uVar7,
                         *(undefined4 *)(param_1 + 0x10),pcVar6);
      goto LAB_0012bc82;
    }
    if (*(long *)(param_1 + 0xb0) == 0) {
      pcVar5 = &cf_NONE;
    }
    else {
      pcVar5 = *(cfstringStruct **)(*(long *)(param_1 + 0xb0) + 0x20);
    }
    pcVar8 = &cf_AMDevice_p_UDID____CompanionUDID____;
    lVar3 = 0;
  }
  else {
    if (*(long *)(param_1 + 0xf0) == 0) {
      __AMDeviceIsBackedByRSD(param_1);
      lVar3 = 0;
LAB_0012bbf2:
      if (*(long *)(param_1 + 0xf8) == 0) {
        pcVar5 = (cfstringStruct *)0x0;
      }
      else {
        uVar7 = _CFGetAllocator(param_1);
        pcVar5 = (cfstringStruct *)_CFStringCreateWithFormat(uVar7,0,&cf_noremotedevice);
      }
    }
    else {
      lVar3 = _MDRemoteServiceDeviceProviderCopyRemoteDevice();
      bVar2 = __AMDeviceIsBackedByRSD(param_1);
      if ((lVar3 != 0 & bVar2) != 1) goto LAB_0012bbf2;
      uVar7 = *(undefined8 *)(lVar3 + 0x10);
      uVar4 = _CFGetAllocator(param_1);
      pcVar5 = (cfstringStruct *)_CFStringCreateWithFormat(uVar4,0,&cf_remotedevice___,uVar7);
    }
    if ((*(int *)(param_1 + 0x30) != 1) && (*(int *)(param_1 + 0x30) == 0)) {
      _AMDeviceIsWiFiPairableRef(param_1);
    }
    uVar4 = _CFGetAllocator(param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    pcVar8 = &cf_AMDevice_p_UDID_______endpointType____;
    pcVar6 = pcVar5;
  }
  uVar7 = _CFStringCreateWithFormat(uVar4,0,pcVar8,param_1,uVar7,pcVar5);
LAB_0012bc82:
  if (pcVar6 != (cfstringStruct *)0x0) {
    _CFRelease(pcVar6);
  }
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return uVar7;
}

