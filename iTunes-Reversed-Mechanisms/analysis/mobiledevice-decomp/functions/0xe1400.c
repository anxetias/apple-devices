// rea decompile_all
// name: __AMRUSBDeviceAddNonceWithInfo
// address: 0xe1400
// body: available
// range: 0xe1400-0xe15c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __AMRUSBDeviceAddNonceWithInfo(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  cfstringStruct *pcVar6;
  long local_40;
  long local_38;
  
  local_40 = 0;
  local_38 = 0;
  if (param_2 == 0) {
    pcVar6 = &cf_deviceinfomustbeprovidedtoquerynonce;
LAB_000e151c:
    _AMRLog(3,pcVar6);
    uVar5 = 1;
  }
  else {
    plVar1 = (long *)(param_2 + 0x38);
    if (*(long *)(param_2 + 0x38) != 0) {
      _CFRelease();
      *plVar1 = 0;
    }
    plVar2 = (long *)(param_2 + 0x30);
    if (*(long *)(param_2 + 0x30) != 0) {
      _CFRelease();
      *plVar2 = 0;
    }
    iVar4 = __AMRUSBDeviceCopyNonceWithTag(param_1,param_2,&cf_NONC,&local_40);
    lVar3 = local_40;
    if ((iVar4 == 0) &&
       (iVar4 = _AMAuthInstallSupportCopyDataFromHexString
                          (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_40,plVar2),
       iVar4 != 0)) {
      _AMRLog(3,&cf_unparsableapnonce___,lVar3);
      if (*plVar2 != 0) {
        _CFRelease();
        *plVar2 = 0;
      }
    }
    else {
      uVar5 = 0;
      if (((*(char *)(param_2 + 0x5f) == '\0') || ((*(byte *)(param_2 + 0x10) & 4) == 0)) ||
         (iVar4 = __AMRUSBDeviceCopyNonceWithTag(param_1,param_2,&cf_SNON,&local_38),
         lVar3 = local_38, iVar4 != 0)) goto LAB_000e1589;
      if (local_38 == 0) {
        pcVar6 = &cf_sepnonceisNULL;
        goto LAB_000e151c;
      }
      iVar4 = _AMAuthInstallSupportCopyDataFromHexString
                        (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,local_38,plVar1);
      uVar5 = 0;
      if (iVar4 == 0) goto LAB_000e1589;
      _AMRLog(3,&cf_unparsablesepnonce___,lVar3);
      if (*plVar1 != 0) {
        _CFRelease();
        *plVar1 = 0;
      }
    }
    uVar5 = _AMAuthInstallToRestoreError(iVar4);
  }
LAB_000e1589:
  if (local_40 != 0) {
    _CFRelease();
  }
  if (local_38 != 0) {
    _CFRelease();
  }
  return uVar5;
}

