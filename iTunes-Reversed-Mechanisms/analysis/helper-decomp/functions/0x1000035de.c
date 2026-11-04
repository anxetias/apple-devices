// rea decompile_all
// name: FUN_1000035de
// address: 0x1000035de
// body: available
// range: 0x1000035de-0x100003c5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000035de(undefined8 param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  char *self;
  ID IVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID IVar9;
  undefined8 uVar10;
  ID IVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_60;
  ID local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  
  puVar1 = PTR__objc_msgSend_100012170;
  self = (char *)NSMutableSet::set((ID)&_OBJC_CLASS___NSMutableSet,"set");
  IVar4 = NSMutableSet::set((ID)&_OBJC_CLASS___NSMutableSet,"set");
  local_58 = NSMutableSet::set((ID)&_OBJC_CLASS___NSMutableSet,"set");
  cVar2 = (*(code *)puVar1)(param_1,"isEqualToString:",&cf_localhost);
  if (cVar2 == '\0') {
    if ((DAT_100016698 == 0) && (FUN_100007ae6(0), DAT_100016698 == 0)) {
      cVar2 = _DLShouldLog(3);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                ,"_getDisabledDataClassNamesFromLockdownForTarget",3,
                &cf_Couldnotsetupadevicelistenertocheckfordisableddataclasses);
      }
    }
    else {
      lVar5 = _DLDeviceWaitForAttachedDevice(0,DAT_100016698,param_1);
      if (lVar5 == 0) {
        cVar2 = _DLShouldLog(3);
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                  ,"_getDisabledDataClassNamesFromLockdownForTarget",3,
                  &
                  cf_Couldnotfindadevicewiththetargetidentifier___Assumingtherearenodisableddataclasses_
                  ,param_1);
        }
      }
      else {
        local_60 = 0;
        iVar3 = _DLDeviceCopyAMDValue(lVar5,&cf_com_apple_mobile_tethered_sync,0,&local_60,1);
        uVar7 = local_60;
        if (iVar3 == 0) {
          IVar9 = NSDictionary::class((ID)&_OBJC_CLASS___NSDictionary,"class");
          cVar2 = (*(code *)puVar1)(uVar7,"isKindOfClass:",IVar9);
          if (cVar2 == '\0') {
            cVar2 = _DLShouldLog(4);
            if (cVar2 != '\0') {
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                      ,"_getDisabledDataClassNamesFromLockdownForTarget",4,
                      &cf_Lockdowndoesn_thaveadictionarysetforthe__domain,
                      &cf_com_apple_mobile_tethered_sync);
            }
          }
          else {
            local_40 = (char *)(*(code *)puVar1)(local_60,"keyEnumerator");
            lVar5 = (*(code *)puVar1)(local_40,"nextObject");
            if (lVar5 != 0) {
              local_38 = "boolValue";
              local_50 = "addObject:";
              do {
                uVar7 = (*(code *)puVar1)(local_60,"objectForKey:",lVar5);
                lVar13 = (*(code *)puVar1)(uVar7,"objectForKey:",&cf_DisableTethered);
                if (lVar13 != 0) {
                  IVar9 = NSNumber::class((ID)&_OBJC_CLASS___NSNumber,"class");
                  cVar2 = (*(code *)puVar1)(lVar13,"isKindOfClass:",IVar9);
                  if ((cVar2 != '\0') &&
                     (cVar2 = (*(code *)puVar1)(lVar13,local_38), cVar2 == '\x01')) {
                    lVar13 = FUN_100000e4e(lVar5);
                    if (lVar13 == 0) {
                      cVar2 = _DLShouldLog(3);
                      if (cVar2 != '\0') {
                        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                                ,"_getDisabledDataClassNamesFromLockdownForTarget",3,
                                &cf_Coudn_tgetadataclassnamefor__,lVar5);
                      }
                    }
                    else {
                      (*(code *)puVar1)(local_58,local_50,lVar13);
                    }
                  }
                }
                lVar5 = (*(code *)puVar1)(local_40,"nextObject");
              } while (lVar5 != 0);
            }
          }
        }
        else {
          cVar2 = _DLShouldLog(4);
          if (cVar2 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                    ,"_getDisabledDataClassNamesFromLockdownForTarget",4,
                    &cf_Couldn_tgettetheredsyncdataclassinformationfromthedevice);
          }
        }
        (*(code *)PTR__objc_release_100012178)(local_60);
      }
    }
    cVar2 = _DLShouldLog(6);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_getDisabledDataClassNamesFromLockdownForTarget",6,&cf_Disableddataclassset___,
              local_58);
    }
  }
  pcVar6 = (char *)FUN_100007da1(param_1);
  if (pcVar6 != (char *)0x0) {
    local_48 = (char *)NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
    local_50 = (char *)ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
    uVar7 = (*(code *)puVar1)(pcVar6,"supportedEntityNames");
    local_38 = pcVar6;
    uVar8 = (*(code *)puVar1)(pcVar6,"enabledEntityNames");
    IVar9 = NSSet::setWithArray_((ID)&_OBJC_CLASS___NSSet,"setWithArray:",uVar8);
    lVar5 = (*(code *)puVar1)(uVar7,"count");
    if (lVar5 != 0) {
      local_40 = "addObject:";
      lVar13 = 0;
      do {
        uVar8 = (*(code *)puVar1)(uVar7,"objectAtIndex:",lVar13);
        uVar10 = (*(code *)puVar1)(local_50,"dataClassNameForEntityName:",uVar8);
        IVar11 = NSSet::containsObject_(IVar9,"containsObject:",uVar8);
        if ((char)IVar11 != '\0') {
          cVar2 = (*(code *)puVar1)(local_58,"containsObject:",uVar10);
          uVar12 = uVar10;
          pcVar6 = self;
          if (cVar2 != '\0') {
            uVar12 = uVar8;
            pcVar6 = local_48;
          }
          (*(code *)puVar1)(pcVar6,local_40,uVar12);
        }
        cVar2 = (*(code *)puVar1)(local_38,"shouldReplaceClientRecordsForEntityName:",uVar8);
        if (cVar2 != '\0') {
          (*(code *)puVar1)(IVar4,local_40,uVar10);
        }
        lVar13 = lVar13 + 1;
      } while (lVar5 != lVar13);
    }
    lVar5 = (*(code *)PTR__objc_msgSend_100012170)(local_48,"count");
    if (lVar5 != 0) {
      cVar2 = _DLShouldLog(4);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                ,"_getDataClassInfoForTarget",4,
                &cf_Thephonehasdisabledthefollowingdataclasses_Unregisteringourclientfor__,local_48)
        ;
      }
      (*(code *)PTR__objc_msgSend_100012170)(local_38,"setEnabled:forEntityNames:",0,local_48);
    }
  }
  local_50 = (char *)NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  uVar7 = FUN_1000075f4();
  lVar5 = (*(code *)puVar1)(uVar7,"count");
  if (lVar5 != 0) {
    local_48 = "numberWithBool:";
    lVar13 = 0;
    do {
      uVar8 = (*(code *)puVar1)(uVar7,"objectAtIndex:",lVar13);
      IVar9 = NSMutableSet::containsObject_((ID)self,"containsObject:",uVar8);
      if ((char)IVar9 == '\0') {
        local_38 = (char *)((ulong)local_38 & 0xffffffff00000000);
      }
      else {
        uVar10 = (*(code *)puVar1)(local_58,"containsObject:",uVar8);
        local_38 = (char *)CONCAT44(local_38._4_4_,
                                    (int)CONCAT71((int7)((ulong)uVar10 >> 8),(char)uVar10 == '\0'));
      }
      IVar9 = NSMutableSet::containsObject_(IVar4,"containsObject:",uVar8);
      local_40 = (char *)CONCAT71(local_40._1_7_,(char)IVar9);
      IVar9 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,"dictionary");
      NSMutableDictionary::setObject_forKey_(IVar9,"setObject:forKey:",uVar8,&cf_kAMSDataClassName);
      pcVar6 = local_48;
      uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,local_48,(ulong)local_38 & 0xff);
      NSMutableDictionary::setObject_forKey_
                (IVar9,"setObject:forKey:",uVar8,&cf_kAMSDataClassEnabled);
      uVar8 = (*(code *)puVar1)(&_OBJC_CLASS___NSNumber,pcVar6,(int)(char)local_40);
      NSMutableDictionary::setObject_forKey_(IVar9,"setObject:forKey:",uVar8,&cf_kAMSDataClassReset)
      ;
      (*(code *)puVar1)(local_50,"addObject:",IVar9);
      lVar13 = lVar13 + 1;
    } while (lVar5 != lVar13);
  }
  IVar4 = _objc_alloc(&_OBJC_CLASS___NSDictionary);
  NSDictionary::initWithObjectsAndKeys_
            (IVar4,"initWithObjectsAndKeys:",local_50,&cf_AMSDataClassInfoKey,0);
  return;
}

