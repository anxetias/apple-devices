// rea decompile_all
// name: FUN_100002609
// address: 0x100002609
// body: available
// range: 0x100002609-0x100003204 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100002609(long param_1,ID param_2,long param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  ID IVar7;
  ID IVar8;
  undefined8 uVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  cfstringStruct *pcVar15;
  ID IVar16;
  uint uVar17;
  ulong uVar18;
  bool bVar19;
  double dVar20;
  ID local_38;
  
  cVar1 = _DLShouldLog(6);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_registerClientWithTargetIdentifierAndDisplayName",6,
            &cf_Registerclientcalledfortargetid___displayname___synctoolpath__,param_1,param_2,
            param_3);
  }
  if (param_1 == 0) {
    return 0;
  }
  cVar1 = (*(code *)PTR__objc_msgSend_100012170)(param_1,"isEqualToString:",&cf___);
  if (cVar1 != '\0') {
    return 0;
  }
  uVar3 = _CFStringCreateWithFormat(0,0,&cf_com_apple_MobileSync___,param_1);
  uVar3 = _objc_autorelease(uVar3);
  IVar4 = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
  IVar5 = ISyncManager::clientWithIdentifier_(IVar4,"clientWithIdentifier:",uVar3);
  cVar1 = (*(code *)PTR__objc_msgSend_100012170)(param_1,"isEqualToString:",&cf_localhost);
  if (cVar1 == '\0') {
    dVar20 = (double)FUN_10000773b(param_1);
    if (5.0 <= dVar20) {
      cVar1 = FUN_10000766f();
      if (cVar1 != '\0') {
        cVar1 = FUN_1000079ca();
        goto LAB_100002767;
      }
      goto LAB_10000277d;
    }
    if (4.0 <= dVar20) {
      cVar1 = FUN_10000766f();
      bVar19 = cVar1 == '\0';
      pcVar6 = &cf_ClientDescription40Tiger;
      pcVar15 = &cf_ClientDescription40;
LAB_100002777:
      if (bVar19) {
        pcVar15 = pcVar6;
      }
    }
    else {
      if (3.0 <= dVar20) {
        cVar1 = FUN_10000766f();
        bVar19 = cVar1 == '\0';
        pcVar6 = &cf_ClientDescription33Tiger;
        pcVar15 = &cf_ClientDescription33;
        goto LAB_100002777;
      }
      pcVar15 = &cf_ClientDescription20;
      if (dVar20 < 2.0) {
        pcVar15 = &cf_ClientDescription;
      }
    }
  }
  else {
    cVar1 = FUN_10000766f();
    if (cVar1 != '\0') {
      cVar1 = FUN_1000079ca();
LAB_100002767:
      bVar19 = cVar1 == '\0';
      pcVar6 = &cf_ClientDescription50SnowLeopard;
      pcVar15 = &cf_ClientDescription50;
      goto LAB_100002777;
    }
LAB_10000277d:
    pcVar15 = &cf_ClientDescription50Tiger;
  }
  IVar7 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar7 = NSBundle::pathForResource_ofType_(IVar7,"pathForResource:ofType:",pcVar15,&cf_plist);
  if (IVar7 == 0) {
    cVar1 = _DLShouldLog(3);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_getClientDescriptionPathForTarget",3,
              &cf_Couldnotfindaclientdescriptionplistwiththename___Fallingbacktodefaultfile,pcVar15)
      ;
    }
    IVar7 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    IVar7 = NSBundle::pathForResource_ofType_
                      (IVar7,"pathForResource:ofType:",&cf_ClientDescription,&cf_plist);
  }
  cVar1 = _DLShouldLog(5);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_getClientDescriptionPathForTarget",5,&cf_Registeringclientdescriptionat__,IVar7);
  }
  local_38 = IVar5;
  if (IVar5 == 0) {
    if (IVar7 == 0) {
      IVar7 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
      IVar7 = NSBundle::pathForResource_ofType_
                        (IVar7,"pathForResource:ofType:",&cf_ClientDescription,&cf_plist);
    }
    cVar1 = _DLShouldLog(5);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_registerClientWithTargetIdentifierAndDisplayName",5,
              &cf_Clientdoesn_texist_registering);
    }
    local_38 = ISyncManager::registerClientWithIdentifier_descriptionFilePath_
                         (IVar4,"registerClientWithIdentifier:descriptionFilePath:",uVar3,IVar7);
    IVar11 = ISyncManager::supportedEntityNames(local_38,"supportedEntityNames");
    ISyncManager::setEnabled_forEntityNames_(local_38,"setEnabled:forEntityNames:",0,IVar11);
    cVar1 = _DLShouldLog(5);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_registerClientWithTargetIdentifierAndDisplayName",5,
              &cf_Settingcalendardaylimitfor__to_ddays,param_1,0x1e);
    }
    IVar11 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",0x1e);
    FUN_100004535(param_1,IVar11);
  }
  dVar20 = (double)FUN_10000773b(param_1);
  if (4.0 <= dVar20) {
    IVar8 = ISyncManager::filters(local_38,"filters");
    IVar11 = *(ID *)PTR__ISyncDataClass_Calendars_100012070;
    IVar8 = DataClassFilter::filterForDataClassName_fromFilters_
                      ((ID)&objc::class_t::DataClassFilter,"filterForDataClassName:fromFilters:",
                       IVar11,IVar8);
    if ((IVar8 == 0) || (IVar8 = DataClassFilter::criteria(IVar8,"criteria"), IVar8 == 0)) {
      IVar8 = NSMutableDictionary::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary,"dictionary");
    }
    else {
      uVar9 = (*(code *)PTR__objc_msgSend_100012170)
                        (IVar8,"objectForKey:",&cf_CalendarFilterBirthdayCalendarKey);
      cVar1 = (*(code *)PTR__objc_msgSend_100012170)(uVar9,"boolValue");
      if (cVar1 != '\0') goto LAB_100002ae1;
      uVar9 = (*(code *)PTR__objc_msgSend_100012170)(IVar8,"mutableCopy");
      IVar8 = _objc_autorelease(uVar9);
    }
    IVar10 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
    NSMutableDictionary::setObject_forKey_
              (IVar8,"setObject:forKey:",IVar10,&cf_CalendarFilterBirthdayCalendarKey);
    if (IVar8 != 0) {
      IVar10 = NSArray::arrayWithObjects_
                         ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",
                          *(undefined8 *)PTR__ISyncEntity_Calendars_Calendar_100012090,
                          *(undefined8 *)PTR__ISyncEntity_Calendars_Event_1000120a8,
                          *(undefined8 *)PTR__ISyncEntity_Calendars_Task_1000120b8,
                          *(undefined8 *)PTR__ISyncEntity_Calendars_AudioAlarm_100012088,
                          *(undefined8 *)PTR__ISyncEntity_Calendars_DisplayAlarm_1000120a0,
                          *(undefined8 *)PTR__ISyncEntity_Calendars_Recurrence_1000120b0,0);
      FUN_100007bd9(local_38,IVar11,IVar10,IVar8);
    }
  }
LAB_100002ae1:
  IVar11 = ISyncManager::objectForKey_(local_38,"objectForKey:",&cf_ClientDescriptionPath);
  if ((IVar7 != 0) &&
     (IVar8 = ISyncManager::isEqualToString_(IVar11,"isEqualToString:",IVar7), (char)IVar8 == '\0'))
  {
    cVar1 = _DLShouldLog(4);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_registerClientWithTargetIdentifierAndDisplayName",4,
              &cf_Clientdescriptionsdonotmatch_old_____new____,IVar11,IVar7);
    }
    if (IVar5 != 0) {
      cVar1 = _DLShouldLog(4);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                ,"_registerClientWithTargetIdentifierAndDisplayName",4,
                &cf_Reregisteringclientasclientdescriptionsdon_tmatch_andwedidn_tjustregisterit);
      }
      local_38 = ISyncManager::registerClientWithIdentifier_descriptionFilePath_
                           (IVar4,"registerClientWithIdentifier:descriptionFilePath:",uVar3,IVar7);
    }
    ISyncManager::setObject_forKey_(local_38,"setObject:forKey:",IVar7,&cf_ClientDescriptionPath);
  }
  cVar1 = _DLShouldLog(6);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_sanitizeClientRegistration",6,&cf_Sanitizingclientregistrationstate);
  }
  IVar4 = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
  IVar5 = ISyncManager::supportedEntityNames(local_38,"supportedEntityNames");
  IVar7 = _objc_alloc(&_OBJC_CLASS___NSSet);
  IVar11 = ISyncManager::enabledEntityNames(local_38,"enabledEntityNames");
  IVar7 = NSSet::initWithArray_(IVar7,"initWithArray:",IVar11);
  IVar11 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
  IVar11 = NSMutableArray::init(IVar11,"init");
  IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
  IVar8 = NSMutableDictionary::init(IVar8,"init");
  IVar10 = ISyncManager::count(IVar5,"count");
  if (IVar10 != 0) {
    IVar16 = 0;
    do {
      IVar12 = ISyncManager::objectAtIndex_(IVar5,"objectAtIndex:",IVar16);
      IVar13 = ISyncManager::dataClassNameForEntityName_(IVar4,"dataClassNameForEntityName:",IVar12)
      ;
      IVar14 = NSMutableDictionary::objectForKey_(IVar8,"objectForKey:",IVar13);
      if (IVar14 == 0) {
        IVar14 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
        IVar14 = NSMutableDictionary::init(IVar14,"init");
        NSMutableDictionary::setObject_forKey_(IVar8,"setObject:forKey:",IVar14,IVar13);
        (*(code *)PTR__objc_release_100012178)(IVar14);
      }
      IVar13 = NSSet::containsObject_(IVar7,"containsObject:",IVar12);
      IVar13 = NSNumber::numberWithBool_
                         ((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",
                          (ulong)(uint)(int)(char)IVar13);
      NSMutableDictionary::setObject_forKey_(IVar14,"setObject:forKey:",IVar13,IVar12);
      IVar16 = IVar16 + 1;
    } while (IVar10 != IVar16);
  }
  IVar5 = NSMutableDictionary::keyEnumerator(IVar8,"keyEnumerator");
  IVar4 = NSMutableDictionary::nextObject(IVar5,"nextObject");
  while (IVar4 != 0) {
    IVar10 = NSMutableDictionary::objectForKey_(IVar8,"objectForKey:",IVar4);
    IVar16 = NSMutableDictionary::keyEnumerator(IVar10,"keyEnumerator");
    IVar12 = NSMutableDictionary::nextObject(IVar16,"nextObject");
    if (IVar12 != 0) {
      uVar18 = 0;
      do {
        IVar12 = NSMutableDictionary::objectForKey_(IVar10,"objectForKey:",IVar12);
        IVar13 = NSMutableDictionary::boolValue(IVar12,"boolValue");
        IVar12 = NSMutableDictionary::nextObject(IVar16,"nextObject");
        uVar17 = ((int)uVar18 + 1) - (uint)((char)IVar13 == '\0');
        uVar18 = (ulong)uVar17;
      } while (IVar12 != 0);
      if ((uVar17 != 0) && (IVar16 = NSMutableDictionary::count(IVar10,"count"), IVar16 != uVar18))
      {
        cVar1 = _DLShouldLog(4);
        if (cVar1 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                  ,"_sanitizeClientRegistration",4,
                  &
                  cf_Badnewseverybody_Theentityregistrationfor__isinconsistent_We_llhavetoturnoffthisdataclass___
                  ,IVar4,IVar10);
        }
        IVar4 = NSMutableDictionary::allKeys(IVar10,"allKeys");
        NSMutableArray::addObjectsFromArray_(IVar11,"addObjectsFromArray:",IVar4);
      }
    }
    IVar4 = NSMutableDictionary::nextObject(IVar5,"nextObject");
  }
  IVar4 = NSMutableArray::count(IVar11,"count");
  if (IVar4 != 0) {
    cVar1 = _DLShouldLog(4);
    if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_sanitizeClientRegistration",4,
              &
              cf_Notsofast_buddy_Wefoundsomeinconsistenciesinyourclientregistration_Here_letmetakethoseforyou___
              ,IVar11);
    }
    ISyncManager::setEnabled_forEntityNames_(local_38,"setEnabled:forEntityNames:",0,IVar11);
  }
  (*(code *)PTR__objc_release_100012178)(IVar7);
  (*(code *)PTR__objc_release_100012178)(IVar11);
  (*(code *)PTR__objc_release_100012178)(IVar8);
  if ((param_2 == 0) ||
     (cVar1 = (*(code *)PTR__objc_msgSend_100012170)(param_2,"isEqualToString:",&cf___),
     IVar4 = param_2, cVar1 != '\0')) {
    IVar4 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_iPhone___,param_1);
  }
  ISyncManager::setDisplayName_(local_38,"setDisplayName:",IVar4);
  IVar4 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  IVar4 = NSBundle::pathForResource_ofType_
                    (IVar4,"pathForResource:ofType:",&cf_iPodSyncClientImages,&cf_icns);
  ISyncManager::setImagePath_(local_38,"setImagePath:",IVar4);
  if (param_3 != 0) {
    IVar4 = ISyncManager::syncAlertToolPath(local_38,"syncAlertToolPath");
    IVar4 = ISyncManager::isEqual_(IVar4,"isEqual:",param_3);
    if ((char)IVar4 == '\0') {
      cVar1 = _DLShouldLog(5);
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                ,"_registerClientWithTargetIdentifierAndDisplayName",5,&cf_Settingalerttoolto__,
                param_3);
      }
      ISyncManager::setSyncAlertToolPath_(local_38,"setSyncAlertToolPath:",param_3);
    }
  }
  IVar4 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  NSUserDefaults::synchronize(IVar4,"synchronize");
  IVar4 = NSUserDefaults::boolForKey_(IVar4,"boolForKey:",&cf_TrickleSync);
  cVar1 = (char)IVar4;
  if ((cVar1 == '\0') &&
     (cVar1 = _CFPreferencesGetAppBooleanValue(&cf_TrickleSync,&cf_com_apple_sync_FakeTunes,0),
     cVar1 == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar2 = _DLShouldLog(5);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_registerClientWithTargetIdentifierAndDisplayName",5,
              &cf_Tricklesyncisenabledfor______,param_2,param_1);
    }
  }
  uVar17 = (uint)cVar1;
  ISyncManager::setShouldSynchronize_withClientsOfType_
            (local_38,"setShouldSynchronize:withClientsOfType:",(ulong)uVar17,
             *(undefined8 *)PTR__ISyncClientTypeApplication_100012050);
  ISyncManager::setShouldSynchronize_withClientsOfType_
            (local_38,"setShouldSynchronize:withClientsOfType:",(ulong)uVar17,
             *(undefined8 *)PTR__ISyncClientTypeDevice_100012058);
  ISyncManager::setShouldSynchronize_withClientsOfType_
            (local_38,"setShouldSynchronize:withClientsOfType:",(ulong)uVar17,
             *(undefined8 *)PTR__ISyncClientTypeServer_100012060);
  (*(code *)PTR__objc_msgSend_100012170)(DAT_100016680,"setObject:forKey:",local_38,param_1);
  return 0;
}

