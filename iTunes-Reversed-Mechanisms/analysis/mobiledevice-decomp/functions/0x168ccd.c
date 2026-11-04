// rea decompile_all
// name: ____AMRestorableDeviceDisableTRM_block_invoke
// address: 0x168ccd
// body: available
// range: 0x168ccd-0x1692a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1692a0 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____AMRestorableDeviceDisableTRM_block_invoke(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  cfstringStruct *pcVar11;
  undefined8 uVar12;
  cfstringStruct *pcVar13;
  bool bVar14;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  undefined4 local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  pcVar13 = *(cfstringStruct **)(param_1 + 0x20);
  if (pcVar13[7].field3_0x18 != 0) goto LAB_0016918f;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_c0 = pcVar13;
  ___thr_AMRestorableDeviceGetLocationID(&local_c0);
  uVar8 = _CFNumberCreate(0,3);
  uVar8 = _CFMakeCollectable(uVar8);
  local_90 = (cfstringStruct *)_objc_autorelease(uVar8);
  puVar3 = PTR__objc_msgSend_00441098;
  local_68 = &cf_IOProviderClass;
  local_c0 = &cf_IOUSBHostDevice;
  local_60 = &cf_IOPropertyMatch;
  local_40 = &cf_locationID;
  local_b8 = (*(code *)PTR__objc_msgSend_00441098)
                       (&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",&local_90
                        ,&local_40,1);
  lVar9 = (*(code *)puVar3)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                            &local_c0,&local_68,2);
  uVar8 = 0;
  uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_004411d8;
  if (lVar9 != 0) {
    uVar8 = _CFRetain(lVar9,0);
  }
  iVar5 = _IOServiceGetMatchingService(uVar1,uVar8);
  if (iVar5 != 0) {
    _IOObjectRetain(iVar5);
    bVar14 = false;
    iVar7 = iVar5;
    do {
      iVar6 = _IORegistryEntryInPlane(iVar7,"IOPort");
      if (iVar6 != 0) {
        uVar8 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
        goto LAB_00168eac;
      }
      iVar6 = _IORegistryEntryGetParentEntry(iVar7,"IOService",&local_c0);
      _IOObjectRelease(iVar7);
      if (iVar6 != 0) {
        _AMRLog(3,&cf_IORegistryEntryGetParentEntryfailed__d,iVar6);
        goto LAB_001691e0;
      }
      bVar14 = true;
      iVar7 = (int)local_c0;
    } while ((int)local_c0 != 0);
    goto LAB_00168f5e;
  }
  uVar8 = 0;
  _AMRLog(3,&cf_Couldnotgetmatchingservicefordevice);
  goto LAB_00169183;
LAB_001691e0:
  uVar8 = 0;
  _AMRLog(3,&cf_Couldnotgetbuiltinportforservice_d,iVar5);
  goto LAB_0016917b;
  while (bVar14 = true, iVar7 = (int)local_c0, (int)local_c0 != 0) {
LAB_00168eac:
    if ((iVar7 != iVar5) && (iVar6 = _IOObjectConformsTo(iVar7,"IOPort"), iVar6 != 0)) {
      uVar12 = _IORegistryEntryCreateCFProperty(iVar7,&cf_BuiltIn,uVar8,0);
      uVar12 = _CFMakeCollectable(uVar12);
      lVar9 = _objc_autorelease(uVar12);
      if (lVar9 == 0) {
        _IOObjectRelease(iVar7);
        iVar7 = 0;
        _AMRLog(3,&cf_IORegistryEntryCreateCFPropertyfailed_);
      }
      else {
        cVar4 = (*(code *)PTR__objc_msgSend_00441098)(lVar9,"boolValue");
        if (cVar4 == '\0') goto LAB_00168f0d;
      }
      if (!bVar14) goto LAB_001691e0;
      goto LAB_00168f61;
    }
LAB_00168f0d:
    iVar6 = _IORegistryEntryGetParentEntry(iVar7,"IOPort",&local_c0);
    _IOObjectRelease(iVar7);
    if (iVar6 != 0) {
      _AMRLog(3,&cf_Couldnotfindparententry_);
      goto LAB_001691e0;
    }
    iVar7 = _IOObjectConformsTo((ulong)local_c0 & 0xffffffff,"IOService");
    if (iVar7 == 0) {
      _IOObjectRelease((int)local_c0);
      break;
    }
  }
LAB_00168f5e:
  iVar7 = 0;
LAB_00168f61:
  uVar8 = _IORegistryEntryCreateCFProperty(iVar7,&cf_PortType,0,0);
  uVar8 = _CFMakeCollectable(uVar8);
  pcVar10 = (cfstringStruct *)_objc_autorelease(uVar8);
  uVar8 = _IORegistryEntryCreateCFProperty(iVar7,&cf_PortNumber,0,0);
  uVar8 = _CFMakeCollectable(uVar8);
  pcVar11 = (cfstringStruct *)_objc_autorelease(uVar8);
  if (pcVar10 == (cfstringStruct *)0x0) {
    pcVar13 = &cf_CouldnotgetportTypeforport_d;
  }
  else {
    if (pcVar11 != (cfstringStruct *)0x0) {
      uVar8 = _IOServiceMatching("IOPortTransportState");
      uVar8 = _CFMakeCollectable(uVar8);
      lVar9 = _objc_autorelease(uVar8);
      puVar3 = PTR__objc_msgSend_00441098;
      local_90 = &cf_ParentPortType;
      local_88 = &cf_ParentPortNumber;
      local_80 = &cf_Active;
      local_68 = pcVar10;
      local_60 = pcVar11;
      local_58 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
      local_78 = &cf_AuthorizationRequired;
      local_50 = (*(code *)puVar3)(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
      local_70 = &cf_AuthorizationStatus;
      local_48 = (*(code *)puVar3)(&_OBJC_CLASS___NSNumber,"numberWithInt:",1);
      uVar8 = (*(code *)puVar3)(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                                &local_68,&local_90,5);
      (*(code *)puVar3)(lVar9,"setObject:forKeyedSubscript:",uVar8,&cf_IOPropertyMatch);
      local_40 = (cfstringStruct *)((ulong)local_40 & 0xffffffff00000000);
      uVar8 = _IONotificationPortCreate(uVar1);
      _IONotificationPortSetDispatchQueue(uVar8,uVar2);
      if (lVar9 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = _CFRetain(lVar9);
      }
      iVar7 = _IOServiceAddMatchingNotification
                        (uVar8,"IOServiceMatched",uVar12,__serviceAddedCallback,pcVar13,&local_40);
      if (iVar7 == 0) {
        *(undefined4 *)&pcVar13[8].field0_0x0 = local_40._0_4_;
        _CFRetain(pcVar13);
        local_c0 = (cfstringStruct *)PTR___NSConcreteStackBlock_004412a8;
        local_b8 = 0xc0000000;
        local_b0 = ____AMRestorableDeviceCreateTRMApprovalNotifications_block_invoke;
        local_a8 = &___block_descriptor_44_e5_v8__0l;
        local_98 = local_40._0_4_;
        local_a0 = pcVar13;
        _dispatch_async(uVar2);
      }
      else {
        _AMRLog(3,&cf_IOServiceAddMatchingNotificationfailed__d,iVar7);
      }
      goto LAB_0016917b;
    }
    pcVar13 = &cf_CouldnotgetportNumberforport_d;
  }
  uVar8 = 0;
  _AMRLog(3,pcVar13,iVar7);
LAB_0016917b:
  _IOObjectRelease(iVar5);
LAB_00169183:
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0xf8) = uVar8;
LAB_0016918f:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

