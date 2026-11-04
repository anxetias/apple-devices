// rea decompile_all
// name: AMRManagedDiskImage::attachAndMountImage
// address: 0x172db7
// body: available
// range: 0x172db7-0x17302a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

char AMRManagedDiskImage::attachAndMountImage(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_38 = 0;
  iVar3 = ___isPlatformVersionAtLeast(1,0xb,0,0);
  if (iVar3 == 0) {
    uVar4 = 0;
    _AMRSafeLog(3,&
                  cf_AMRManagedDiskImageisdependentonDiskImages2_framework_whichisnotpresentinyourOS_macOS11_iOS14_tvOS14_watchOS7_bridgeOS5__
               );
  }
  else {
    uVar4 = _objc_alloc(&_OBJC_CLASS___DIAttachParams);
    puVar1 = PTR__objc_msgSend_00441098;
    uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                      (uVar4,"initWithURL:error:",*(undefined8 *)(param_1 + 8),&local_40);
    (*(code *)puVar1)(uVar4,"setAutoMount:",0);
    iVar3 = ___isPlatformVersionAtLeast(1,0xc,0,0);
    if (iVar3 == 0) {
      cVar2 = '\0';
      _AMRSafeLog(3,&
                    cf_AMRManagedDiskImageisdependentonDiskImages2_frameworkwithuniqueDevicesupport_
                 );
      goto LAB_00172f93;
    }
    (*(code *)PTR__objc_msgSend_00441098)(uVar4,"setUniqueDevice:",1);
    iVar3 = ___isPlatformVersionAtLeast(1,0xc,0,0);
    if (iVar3 != 0) {
      (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___DiskImages2,"setForwardLogs:",1);
    }
    cVar2 = (*(code *)puVar1)(&_OBJC_CLASS___DiskImages2,"managedAttachWithParams:handle:error:",
                              uVar4,&local_38,&local_40);
    uVar5 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 8),"absoluteString");
    if (cVar2 == '\0') {
      pcVar8 = &cf_DiskImages2failedtoattachtheDMG_____Error___;
      uVar6 = local_40;
    }
    else {
      uVar6 = (*(code *)puVar1)(local_38,"BSDName");
      _AMRSafeLog(6,&cf_AttachedDMG____successfully_Attacheddeviceis___,uVar5,uVar6);
      uVar5 = (*(code *)puVar1)(param_1,"newRandomMountPoint");
      (*(code *)puVar1)(param_1,"setMountPoint:",uVar5);
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar5 = (*(code *)puVar1)(local_38,"BSDName");
        cVar2 = (*(code *)puVar1)(param_1,"mountVolumeInImage:",uVar5);
        if (cVar2 != '\0') {
          _AMRSafeLog(6,&cf_MountedDMGsuccessfullyat___,*(undefined8 *)(param_1 + 0x10));
          (*(code *)PTR__objc_msgSend_00441098)(param_1,"setHandle:",local_38);
          cVar2 = '\x01';
          goto LAB_00172f93;
        }
        goto LAB_00172f78;
      }
      uVar5 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 8),"absoluteString");
      uVar6 = (*(code *)puVar1)(local_38,"BSDName");
      pcVar8 = &cf_FailedtocreateamountpointforDMG_____BSDname___;
    }
    lVar7 = _AMRMakeString(pcVar8,uVar5,uVar6);
    if (lVar7 != 0) {
      cVar2 = '\0';
      _AMRSafeLog(3,&cf___,lVar7);
      _CFRelease(lVar7);
      goto LAB_00172f93;
    }
  }
LAB_00172f78:
  cVar2 = '\0';
LAB_00172f93:
  puVar1 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(local_38);
  (*(code *)puVar1)(uVar4);
  return cVar2;
}

