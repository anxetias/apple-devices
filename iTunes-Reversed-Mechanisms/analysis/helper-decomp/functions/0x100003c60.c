// rea decompile_all
// name: FUN_100003c60
// address: 0x100003c60
// body: available
// range: 0x100003c60-0x100004359 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100003c60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ID IVar5;
  ID self;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ID IVar11;
  ID IVar12;
  long lVar13;
  cfstringStruct *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  code *pcVar18;
  undefined8 local_80;
  ID local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  ID local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  
  lVar4 = FUN_100007da1();
  pcVar18 = (code *)PTR__objc_msgSend_100012170;
  if (lVar4 == 0) {
    return 0;
  }
  IVar5 = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
  local_58 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,"dictionary");
  self = NSMutableSet::set((ID)&_OBJC_CLASS___NSMutableSet,"set");
  local_78 = NSMutableSet::set((ID)&_OBJC_CLASS___NSMutableSet,"set");
  local_70 = (char *)NSMutableSet::set((ID)&_OBJC_CLASS___NSMutableSet,"set");
  pcVar6 = (char *)NSMutableSet::set((ID)&_OBJC_CLASS___NSMutableSet,"set");
  local_50 = (char *)_CFArrayGetCount(param_2);
  if (local_50 != (char *)0x0) {
    local_48 = "boolValue";
    local_40 = "addObject:";
    local_68 = "numberWithBool:";
    local_38 = "setObject:forKey:";
    pcVar15 = (char *)0x0;
    local_60 = (char *)param_2;
    do {
      uVar7 = _CFArrayGetValueAtIndex(local_60,pcVar15);
      lVar8 = (*pcVar18)(uVar7,"objectForKey:",&cf_kAMSDataClassName);
      if (lVar8 != 0) {
        lVar9 = (*pcVar18)(uVar7,"objectForKey:",&cf_kAMSDataClassEnabled);
        if (lVar9 != 0) {
          cVar2 = (*pcVar18)(lVar9,local_48);
          IVar11 = local_78;
          if (cVar2 == '\x01') {
            IVar11 = self;
          }
          (*(code *)PTR__objc_msgSend_100012170)(IVar11,local_40,lVar8);
          pcVar18 = (code *)PTR__objc_msgSend_100012170;
          uVar10 = (*(code *)PTR__objc_msgSend_100012170)
                             (&_OBJC_CLASS___NSNumber,local_68,(int)cVar2);
          (*pcVar18)(local_58,local_38,uVar10,lVar8);
        }
        lVar9 = (*pcVar18)(uVar7,"objectForKey:",&cf_kAMSDataClassReset);
        if (lVar9 != 0) {
          cVar2 = (*pcVar18)(lVar9,local_48);
          pcVar17 = local_70;
          if (cVar2 == '\0') {
            pcVar17 = pcVar6;
          }
          (*pcVar18)(pcVar17,local_40,lVar8);
        }
      }
      pcVar15 = pcVar15 + 1;
    } while (local_50 != pcVar15);
  }
  local_38 = (char *)NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  pcVar15 = (char *)NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  local_68 = (char *)NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  IVar11 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  local_60 = (char *)(*pcVar18)(lVar4,"supportedEntityNames");
  local_48 = (char *)(*pcVar18)(local_60,"count");
  if (local_48 != (char *)0x0) {
    local_40 = "dataClassNameForEntityName:";
    local_50 = "addObject:";
    pcVar17 = (char *)0x0;
    do {
      puVar1 = PTR__objc_msgSend_100012170;
      uVar7 = (*(code *)PTR__objc_msgSend_100012170)(local_60,"objectAtIndex:",pcVar17);
      lVar8 = (*(code *)puVar1)(IVar5,local_40,uVar7);
      if (lVar8 != 0) {
        cVar2 = (*(code *)puVar1)(local_78,"containsObject:",lVar8);
        pcVar16 = local_38;
        if ((cVar2 != '\0') ||
           (IVar12 = NSMutableSet::containsObject_(self,"containsObject:",lVar8), pcVar16 = pcVar15,
           (char)IVar12 != '\0')) {
          (*(code *)puVar1)(pcVar16,local_50,uVar7);
        }
        cVar2 = (*(code *)puVar1)(local_70,"containsObject:",lVar8);
        pcVar16 = local_68;
        if ((cVar2 != '\0') ||
           (IVar12 = NSMutableSet::containsObject_((ID)pcVar6,"containsObject:",lVar8),
           pcVar16 = (char *)IVar11, (char)IVar12 != '\0')) {
          (*(code *)puVar1)(pcVar16,local_50,uVar7);
        }
      }
      pcVar17 = pcVar17 + 1;
    } while (local_48 != pcVar17);
  }
  pcVar18 = (code *)PTR__objc_msgSend_100012170;
  (*(code *)PTR__objc_msgSend_100012170)(lVar4,"setEnabled:forEntityNames:",0,local_38);
  (*pcVar18)(lVar4,"setEnabled:forEntityNames:",1,pcVar15);
  lVar8 = (*pcVar18)(local_58,"count");
  if (lVar8 == 0) goto LAB_1000042ea;
  cVar2 = _DLShouldLog(6);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_setTetheredSyncLockdownInfoForTarget",6,&cf_Settingenabledinlockdownfordataclasses___
            ,local_58);
  }
  cVar2 = (*(code *)PTR__objc_msgSend_100012170)(param_1,"isEqualToString:",&cf_localhost);
  if (cVar2 != '\0') goto LAB_1000042ea;
  if ((DAT_100016698 == 0) && (FUN_100007ae6(0), DAT_100016698 == 0)) {
    cVar2 = _DLShouldLog(3);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_setTetheredSyncLockdownInfoForTarget",3,
              &cf_Couldnotsetupadevicelistenertocheckfordisableddataclasses);
    }
    goto LAB_1000042ea;
  }
  IVar5 = _DLDeviceWaitForAttachedDevice(0,DAT_100016698,param_1);
  if (IVar5 == 0) {
    cVar2 = _DLShouldLog(3);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_setTetheredSyncLockdownInfoForTarget",3,
              &
              cf_Couldnotfindadevicewiththetargetidentifier___Assumingtherearenodisableddataclasses_
              ,param_1);
    }
    goto LAB_1000042ea;
  }
  local_80 = 0;
  local_78 = IVar5;
  iVar3 = _DLDeviceCopyAMDValue(IVar5,&cf_com_apple_mobile_tethered_sync,0,&local_80,1);
  uVar7 = local_80;
  if (iVar3 == 0) {
    IVar5 = NSDictionary::class((ID)&_OBJC_CLASS___NSDictionary,"class");
    cVar2 = (*pcVar18)(uVar7,"isKindOfClass:",IVar5);
    if (cVar2 == '\0') goto LAB_100004094;
  }
  else {
LAB_100004094:
    local_80 = 0;
  }
  local_50 = (char *)(*pcVar18)(local_58,"keyEnumerator");
  lVar8 = (*pcVar18)(local_50,"nextObject");
  if (lVar8 != 0) {
    pcVar6 = "objectForKey:";
    local_48 = "mutableCopy";
    local_38 = "init";
    local_70 = "boolValue";
    local_40 = "numberWithBool:";
    local_60 = "objectForKey:";
    do {
      lVar9 = FUN_100000d98(lVar8);
      if (lVar9 == 0) {
        cVar2 = _DLShouldLog(3);
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                  ,"_setTetheredSyncLockdownInfoForTarget",3,&cf_Unknowndataclassname___,lVar8);
        }
      }
      else {
        lVar13 = (*pcVar18)(local_80,pcVar6,lVar9);
        pcVar15 = local_48;
        if (lVar13 == 0) {
          lVar13 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
          pcVar15 = local_38;
        }
        uVar7 = (*pcVar18)(lVar13,pcVar15);
        uVar10 = (*pcVar18)(local_58,pcVar6,lVar8);
        cVar2 = (*pcVar18)(uVar10,local_70);
        pcVar14 = &cf_iPhone;
        if (cVar2 != '\0') {
          uVar10 = (*pcVar18)(&_OBJC_CLASS___NSNumber,local_40,0);
          (*pcVar18)(uVar7,"setObject:forKey:",uVar10,&cf_DisableTethered);
          pcVar14 = &cf_OSX;
        }
        (*pcVar18)(uVar7,"setObject:forKey:",pcVar14,&cf_SyncingOS);
        iVar3 = _DLDeviceSetAMDValue(local_78,&cf_com_apple_mobile_tethered_sync,lVar9,uVar7);
        if ((iVar3 != 0) && (cVar2 = _DLShouldLog(3), cVar2 != '\0')) {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                  ,"_setTetheredSyncLockdownInfoForTarget",3,
                  &cf_Couldnotsettetheredsyncinfo____inlockdownfor________d,uVar7,lVar8,lVar9,iVar3)
          ;
        }
        (*(code *)PTR__objc_release_100012178)(uVar7);
        pcVar6 = local_60;
        pcVar18 = (code *)PTR__objc_msgSend_100012170;
      }
      lVar8 = (*pcVar18)(local_50,"nextObject");
    } while (lVar8 != 0);
  }
  (*(code *)PTR__objc_release_100012178)(local_80);
LAB_1000042ea:
  (*pcVar18)(lVar4,"setShouldReplaceClientRecords:forEntityNames:",0,IVar11);
  (*pcVar18)(lVar4,"setShouldReplaceClientRecords:forEntityNames:",1,local_68);
  return 0;
}

