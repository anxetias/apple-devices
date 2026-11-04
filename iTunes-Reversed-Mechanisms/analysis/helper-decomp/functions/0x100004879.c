// rea decompile_all
// name: FUN_100004879
// address: 0x100004879
// body: available
// range: 0x100004879-0x100005de0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100005dc7 to 0x100027600 _objc_msgSend (external=false, thunk=true, hasNoReturn=false), 0x100025b01 NSDictionary::initWithObjectsAndKeys: (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_100004879(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  cfstringStruct *self;
  cfstringStruct *pcVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ID IVar20;
  code *pcVar21;
  bool bVar22;
  double dVar23;
  ID local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  ID local_38;
  
  uVar5 = FUN_100007da1();
  IVar7 = *(ID *)PTR__ISyncDataClass_Calendars_100012070;
  lVar6 = _CFStringCompare(param_2,IVar7,0);
  pcVar21 = (code *)PTR__objc_msgSend_100012170;
  if (lVar6 == 0) {
    IVar8 = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
    uVar18 = *(undefined8 *)PTR__ISyncEntity_Calendars_CalendarOrder_100012098;
    uVar19 = *(undefined8 *)PTR__ISyncEntity_Calendars_Calendar_100012090;
    local_70 = (cfstringStruct *)0x0;
    IVar9 = NSArray::arrayWithObjects_
                      ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",uVar18,uVar19,0);
    IVar8 = ISyncManager::snapshotOfRecordsInTruthWithEntityNames_usingIdentifiersForClient_
                      (IVar8,"snapshotOfRecordsInTruthWithEntityNames:usingIdentifiersForClient:",
                       IVar9,0);
    uVar15 = *(undefined8 *)PTR__ISyncRecordEntityNameKey_100012108;
    IVar9 = NSDictionary::dictionaryWithObjectsAndKeys_
                      ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar19,uVar15
                       ,0);
    IVar9 = ISyncManager::recordsWithMatchingAttributes_
                      (IVar8,"recordsWithMatchingAttributes:",IVar9);
    IVar20 = (*pcVar21)(uVar5,"filters");
    IVar7 = DataClassFilter::filterForDataClassName_fromFilters_
                      ((ID)&objc::class_t::DataClassFilter,"filterForDataClassName:fromFilters:",
                       IVar7,IVar20);
    lVar6 = 0;
    if (IVar7 != 0) {
      IVar7 = DataClassFilter::criteria(IVar7,"criteria");
      lVar6 = (*pcVar21)(IVar7,"objectForKey:",&cf_CalendarFilterCalendarsKey);
      if (lVar6 == 0) {
        local_70 = (cfstringStruct *)0x0;
        lVar6 = 0;
      }
      else {
        local_70 = (cfstringStruct *)
                   NSSet::setWithArray_((ID)&_OBJC_CLASS___NSSet,"setWithArray:",lVar6);
      }
    }
    dVar23 = (double)FUN_10000773b(param_1);
    IVar7 = NSDictionary::dictionaryWithObjectsAndKeys_
                      ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar18,uVar15
                       ,0);
    IVar7 = ISyncManager::recordsWithMatchingAttributes_
                      (IVar8,"recordsWithMatchingAttributes:",IVar7);
    IVar7 = ISyncManager::allValues(IVar7,"allValues");
    IVar8 = ISyncManager::count(IVar7,"count");
    if (IVar8 != 0) {
      IVar7 = ISyncManager::objectAtIndex_(IVar7,"objectAtIndex:",0);
      local_38 = ISyncManager::objectForKey_
                           (IVar7,"objectForKey:",
                            *(undefined8 *)
                             PTR__ISyncRelationship_Calendars_CalendarOrder_Calendars_100012110);
      IVar7 = ISyncManager::count(local_38,"count");
      if (IVar7 != 0) {
        IVar8 = ISyncManager::count(IVar9,"count");
        if (IVar7 != IVar8) {
          cVar2 = _DLShouldLog(5);
          if (cVar2 != '\0') {
            IVar8 = ISyncManager::count(IVar9,"count");
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                    ,"_getCalendarCollectionsForClient",5,
                    &cf_Countofcalendarorderentries__d_doesn_tmatchthenumberofcalendars__d__order___
                    ,IVar7,IVar8,local_38);
          }
          IVar8 = ISyncManager::allKeys(IVar9,"allKeys");
          IVar8 = NSMutableSet::setWithArray_((ID)&_OBJC_CLASS___NSMutableSet,"setWithArray:",IVar8)
          ;
          IVar20 = 0;
          do {
            IVar10 = ISyncManager::objectAtIndex_(local_38,"objectAtIndex:",IVar20);
            NSMutableSet::removeObject_(IVar8,"removeObject:",IVar10);
            IVar20 = IVar20 + 1;
          } while (IVar7 != IVar20);
          IVar20 = NSMutableSet::count(IVar8,"count");
          if (IVar20 != 0) {
            IVar7 = ISyncManager::mutableCopy(local_38,"mutableCopy");
            local_38 = _objc_autorelease(IVar7);
            IVar7 = NSMutableSet::allObjects(IVar8,"allObjects");
            (*pcVar21)(local_38,"addObjectsFromArray:",IVar7);
            IVar7 = (*pcVar21)(local_38,"count");
            cVar2 = _DLShouldLog(5);
            if (cVar2 != '\0') {
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                      ,"_getCalendarCollectionsForClient",5,&cf_UpdatedCalendarOrderto__,local_38);
            }
          }
        }
        IVar8 = NSMutableArray::arrayWithCapacity_
                          ((ID)&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",IVar7);
        if (IVar7 != 0) {
          uVar5 = *(undefined8 *)PTR__ISyncAttribute_Calendars_Calendar_Title_100012040;
          uVar18 = *(undefined8 *)PTR__ISyncAttribute_Calendars_Calendar_ReadOnly_100012038;
          IVar20 = 0;
          do {
            uVar19 = (*pcVar21)(local_38,"objectAtIndex:",IVar20);
            IVar10 = ISyncManager::objectForKey_(IVar9,"objectForKey:",uVar19);
            if (IVar10 == 0) {
              cVar2 = _DLShouldLog(4);
              if (cVar2 != '\0') {
                __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                        ,"_getCalendarCollectionsForClient",4,
                        &
                        cf_CalendarOrderreferstocalendarwithidentifier___butcalendarrecordnotfoundinsnapshot
                        ,uVar19);
              }
            }
            else {
              IVar12 = ISyncManager::objectForKey_(IVar10,"objectForKey:",uVar5,pcVar21);
              if (IVar12 == 0) {
                cVar2 = _DLShouldLog(6);
                if (cVar2 != '\0') {
                  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                          ,"_getCalendarCollectionsForClient",6,
                          &cf_Calendar__doesn_thavetitle_skipping___,0,IVar10);
                }
              }
              else {
                if (4.0 <= dVar23) {
                  IVar13 = ISyncManager::objectForKey_
                                     (IVar10,"objectForKey:",&cf_com_apple_ical_type);
                  IVar13 = ISyncManager::isEqualToString_(IVar13,"isEqualToString:",&cf_birthday);
                  if ((char)IVar13 != '\0') {
                    cVar2 = _DLShouldLog(6);
                    if (cVar2 != '\0') {
                      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                              ,"_getCalendarCollectionsForClient",6,&cf_Skippingthebirthdaycalendar)
                      ;
                    }
                    goto LAB_100005d71;
                  }
                }
                cVar2 = (*(code *)PTR__objc_msgSend_100012170)(local_70,"containsObject:",IVar12);
                IVar13 = ISyncManager::objectForKey_(IVar10,"objectForKey:",uVar18);
                IVar13 = ISyncManager::intValue(IVar13,"intValue");
                bVar22 = true;
                if ((int)IVar13 == 0) {
                  IVar10 = ISyncManager::objectForKey_
                                     (IVar10,"objectForKey:",&cf_com_apple_ical_type);
                  IVar10 = ISyncManager::isEqualToString_(IVar10,"isEqualToString:",&cf_caldav);
                  bVar22 = (char)IVar10 != '\0';
                }
                IVar10 = NSNumber::numberWithBool_
                                   ((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",
                                    (ulong)(uint)(int)cVar2);
                IVar13 = NSNumber::numberWithBool_
                                   ((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",(ulong)bVar22);
                IVar10 = NSDictionary::dictionaryWithObjectsAndKeys_
                                   ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",
                                    IVar12,&cf_AMSCollectionName,IVar12,&cf_AMSCollectionDisplayName
                                    ,IVar10,&cf_AMSCollectionFiltered,IVar13,
                                    &cf_AMSCollectionReadOnly,0);
                NSMutableArray::addObject_(IVar8,"addObject:",IVar10);
              }
            }
LAB_100005d71:
            IVar20 = IVar20 + 1;
            pcVar21 = (code *)PTR__objc_msgSend_100012170;
          } while (IVar7 != IVar20);
        }
        goto LAB_100005d8c;
      }
    }
    IVar7 = ISyncManager::allValues(IVar9,"allValues");
    IVar9 = ISyncManager::count(IVar7,"count");
    if ((lVar6 != 0) && (IVar9 == 0)) {
      cVar2 = _DLShouldLog(5);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                ,"_getCalendarCollectionsForClient",5,
                &
                cf_Nocalendarsinsnapshotandwehavefilteringset_perhapsthetruthwascleared_checkingforevents
               );
      }
      IVar7 = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
      uVar5 = *(undefined8 *)PTR__ISyncEntity_Calendars_Event_1000120a8;
      IVar8 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",uVar5,0);
      IVar7 = ISyncManager::snapshotOfRecordsInTruthWithEntityNames_usingIdentifiersForClient_
                        (IVar7,"snapshotOfRecordsInTruthWithEntityNames:usingIdentifiersForClient:",
                         IVar8,0);
      IVar8 = NSDictionary::dictionaryWithObjectsAndKeys_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar5,
                         uVar15,0);
      IVar7 = ISyncManager::recordsWithMatchingAttributes_
                        (IVar7,"recordsWithMatchingAttributes:",IVar8);
      IVar7 = ISyncManager::count(IVar7,"count");
      if (IVar7 != 0) {
        return 0;
      }
      cVar2 = _DLShouldLog(5);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                ,"_getCalendarCollectionsForClient",5,
                &
                cf_Nocalendareventsinsnapshotandwehavefilteringset_itappearsthetruthwascleared_UsingCalendarNames___
                ,lVar6);
      }
      IVar9 = (*pcVar21)(lVar6,"count");
      IVar7 = NSMutableArray::arrayWithCapacity_
                        ((ID)&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",IVar9);
      if (IVar9 != 0) {
        uVar5 = *(undefined8 *)PTR__ISyncAttribute_Calendars_Calendar_Title_100012040;
        IVar8 = 0;
        do {
          uVar18 = (*pcVar21)(lVar6,"objectAtIndex:",IVar8);
          IVar20 = NSDictionary::dictionaryWithObjectsAndKeys_
                             ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar18
                              ,uVar5,0);
          NSMutableArray::addObject_(IVar7,"addObject:",IVar20);
          IVar8 = IVar8 + 1;
        } while (IVar9 != IVar8);
      }
      cVar2 = _DLShouldLog(5);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                ,"_getCalendarCollectionsForClient",5,
                &cf_Dummiedupcalendarsfromfiltersincethetruthisempty___,IVar7);
      }
    }
    if (IVar9 == 0) {
      return 0;
    }
    IVar7 = ISyncManager::mutableCopy(IVar7,"mutableCopy");
    uVar19 = _objc_autorelease(IVar7);
    (*pcVar21)(uVar19,"sortUsingFunction:context:",FUN_100007fd2,0);
    uVar5 = (*pcVar21)(uVar19,"count");
    IVar8 = NSMutableArray::arrayWithCapacity_
                      ((ID)&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",uVar5);
    uVar5 = *(undefined8 *)PTR__ISyncAttribute_Calendars_Calendar_Title_100012040;
    uVar18 = *(undefined8 *)PTR__ISyncAttribute_Calendars_Calendar_ReadOnly_100012038;
    IVar7 = 0;
    do {
      uVar15 = (*pcVar21)(uVar19,"objectAtIndex:",IVar7);
      uVar16 = (*pcVar21)(uVar15,"objectForKey:",uVar5);
      if (dVar23 < 4.0) {
LAB_100005667:
        cVar2 = (*pcVar21)(local_70,"containsObject:",uVar16);
        uVar17 = (*pcVar21)(uVar15,"objectForKey:",uVar18);
        iVar4 = (*pcVar21)(uVar17,"intValue");
        bVar22 = true;
        if (iVar4 == 0) {
          uVar15 = (*pcVar21)(uVar15,"objectForKey:",&cf_com_apple_ical_type);
          cVar3 = (*pcVar21)(uVar15,"isEqualToString:",&cf_caldav);
          bVar22 = cVar3 != '\0';
        }
        IVar20 = NSNumber::numberWithBool_
                           ((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",(ulong)(uint)(int)cVar2);
        IVar10 = NSNumber::numberWithBool_
                           ((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",(ulong)bVar22);
        IVar20 = NSDictionary::dictionaryWithObjectsAndKeys_
                           ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar16,
                            &cf_AMSCollectionName,uVar16,&cf_AMSCollectionDisplayName,IVar20,
                            &cf_AMSCollectionFiltered,IVar10,&cf_AMSCollectionReadOnly,0);
        NSMutableArray::addObject_(IVar8,"addObject:",IVar20);
      }
      else {
        uVar17 = (*pcVar21)(uVar15,"objectForKey:",&cf_com_apple_ical_type);
        cVar2 = (*pcVar21)(uVar17,"isEqualToString:",&cf_birthday);
        if (cVar2 == '\0') goto LAB_100005667;
        cVar2 = _DLShouldLog(6);
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                  ,"_getCalendarCollectionsForClient",6,&cf_Skippingthebirthdaycalendar);
        }
      }
      IVar7 = IVar7 + 1;
    } while (IVar9 != IVar7);
  }
  else {
    IVar7 = *(ID *)PTR__ISyncDataClass_Contacts_100012078;
    lVar6 = _CFStringCompare(param_2,IVar7,0);
    puVar1 = PTR__objc_msgSend_100012170;
    if (lVar6 != 0) {
      lVar6 = _CFStringCompare(param_2,&cf_com_apple_MailAccounts,0);
      puVar1 = PTR__objc_msgSend_100012170;
      if (lVar6 != 0) {
        return 0;
      }
      IVar7 = (*(code *)PTR__objc_msgSend_100012170)(uVar5,"filters");
      IVar7 = DataClassFilter::filterForDataClassName_fromFilters_
                        ((ID)&objc::class_t::DataClassFilter,"filterForDataClassName:fromFilters:",
                         0x100012388,IVar7);
      if ((IVar7 == 0) || (IVar7 = DataClassFilter::criteria(IVar7,"criteria"), IVar7 == 0)) {
        local_78 = 0;
      }
      else {
        local_78 = NSSet::setWithArray_((ID)&_OBJC_CLASS___NSSet,"setWithArray:",IVar7);
      }
      IVar7 = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
      IVar8 = NSArray::arrayWithObject_
                        ((ID)&_OBJC_CLASS___NSArray,"arrayWithObject:",&cf_com_apple_mail_Account);
      IVar7 = ISyncManager::snapshotOfRecordsInTruthWithEntityNames_usingIdentifiersForClient_
                        (IVar7,"snapshotOfRecordsInTruthWithEntityNames:usingIdentifiersForClient:",
                         IVar8,0);
      IVar8 = NSDictionary::dictionaryWithObjectsAndKeys_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",
                         &cf_com_apple_mail_Account,
                         *(undefined8 *)PTR__ISyncRecordEntityNameKey_100012108,0);
      IVar7 = ISyncManager::recordsWithMatchingAttributes_
                        (IVar7,"recordsWithMatchingAttributes:",IVar8);
      IVar7 = ISyncManager::allValues(IVar7,"allValues");
      IVar9 = ISyncManager::count(IVar7,"count");
      if (IVar9 == 0) {
        return 0;
      }
      IVar8 = ISyncManager::count(IVar7,"count");
      IVar8 = NSMutableArray::arrayWithCapacity_
                        ((ID)&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",IVar8);
      IVar20 = 0;
      do {
        IVar10 = ISyncManager::objectAtIndex_(IVar7,"objectAtIndex:",IVar20);
        self = (cfstringStruct *)ISyncManager::objectForKey_(IVar10,"objectForKey:",&cf_accountType)
        ;
        local_70 = (cfstringStruct *)
                   ISyncManager::objectForKey_(IVar10,"objectForKey:",&cf_accountType);
        pcVar11 = (cfstringStruct *)ISyncManager::objectForKey_(IVar10,"objectForKey:",&cf_hostname)
        ;
        local_68 = (cfstringStruct *)
                   ISyncManager::objectForKey_(IVar10,"objectForKey:",&cf_hostname);
        IVar12 = ISyncManager::objectForKey_(IVar10,"objectForKey:",&cf_username);
        IVar13 = ISyncManager::objectForKey_(IVar10,"objectForKey:",&cf_accountName);
        IVar14 = ISyncManager::isEqualToString_((ID)self,"isEqualToString:",&cf_EWSAccount);
        if ((char)IVar14 == '\0') {
          IVar14 = ISyncManager::isEqualToString_((ID)self,"isEqualToString:",&cf_HTTPMailAccount);
          if ((char)IVar14 == '\0') {
            IVar14 = ISyncManager::isEqual_((ID)self,"isEqual:",&cf_iToolsAccount);
            if ((char)IVar14 == '\0') {
              if (self == (cfstringStruct *)0x0) goto LAB_100004e58;
            }
            else {
              IVar10 = ISyncManager::objectForKey_(IVar10,"objectForKey:",&cf_addresses);
              IVar10 = ISyncManager::objectAtIndex_(IVar10,"objectAtIndex:",0);
              pcVar11 = &cf_me_com;
              IVar10 = ISyncManager::hasSuffix_(IVar10,"hasSuffix:",&cf_me_com);
              if ((char)IVar10 == '\0') {
                pcVar11 = &cf_mac_com;
              }
              self = &cf_iCloud;
              local_70 = &cf__Mac;
              local_68 = &cf_mac_com;
            }
            IVar10 = ISyncManager::isEqualToString_((ID)self,"isEqualToString:",&cf_SMTPAccount);
            if (((((char)IVar10 == '\0') && (pcVar11 != (cfstringStruct *)0x0)) && (IVar12 != 0)) &&
               (IVar13 != 0)) {
              IVar10 = ISyncManager::hasSuffix_((ID)self,"hasSuffix:",&cf_Account);
              if ((char)IVar10 != '\0') {
                IVar10 = ISyncManager::length((ID)self,"length");
                self = (cfstringStruct *)
                       ISyncManager::substringToIndex_((ID)self,"substringToIndex:",IVar10 - 7);
              }
              IVar10 = ISyncManager::hasSuffix_((ID)local_70,"hasSuffix:",&cf_Account);
              if ((char)IVar10 != '\0') {
                IVar10 = ISyncManager::length((ID)local_70,"length");
                local_70 = (cfstringStruct *)
                           ISyncManager::substringToIndex_
                                     ((ID)local_70,"substringToIndex:",IVar10 - 7);
              }
              IVar10 = NSString::stringWithFormat_
                                 ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_________,
                                  local_70,IVar12,local_68);
              IVar14 = ISyncManager::rangeOfString_(IVar12,"rangeOfString:",&cf__);
              if (IVar14 == 0x7fffffffffffffff) {
                IVar12 = NSString::stringWithFormat_
                                   ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf______,IVar12
                                    ,pcVar11);
              }
              IVar12 = NSString::stringWithFormat_
                                 ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__________,
                                  IVar13,self,IVar12);
              cVar2 = (*(code *)puVar1)(local_78,"containsObject:",IVar10);
              IVar13 = NSNumber::numberWithBool_
                                 ((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",
                                  (ulong)(uint)(int)cVar2);
              IVar10 = NSDictionary::dictionaryWithObjectsAndKeys_
                                 ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",
                                  IVar10,&cf_AMSCollectionName,IVar12,&cf_AMSCollectionDisplayName,
                                  IVar13,&cf_AMSCollectionFiltered,0);
              NSMutableArray::addObject_(IVar8,"addObject:",IVar10);
            }
          }
          else {
            cVar2 = _DLShouldLog(6);
            if (cVar2 != '\0') {
              pcVar11 = &cf_SkippingHTTPMailaccount___;
              goto LAB_100004e4e;
            }
          }
        }
        else {
          cVar2 = _DLShouldLog(6);
          if (cVar2 != '\0') {
            pcVar11 = &cf_SkippingExchangeaccount___;
LAB_100004e4e:
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                    ,"_getMailAccountCollectionsForClient",6,pcVar11,IVar10);
          }
        }
LAB_100004e58:
        IVar20 = IVar20 + 1;
      } while (IVar9 != IVar20);
      if (IVar8 == 0) {
        return 0;
      }
      NSMutableArray::sortUsingFunction_context_(IVar8,"sortUsingFunction:context:",FUN_100008094,0)
      ;
      goto LAB_100005d91;
    }
    IVar8 = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
    uVar18 = *(undefined8 *)PTR__ISyncEntity_Contacts_Group_1000120d8;
    local_38 = 0;
    IVar9 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",uVar18,0);
    IVar8 = ISyncManager::snapshotOfRecordsInTruthWithEntityNames_usingIdentifiersForClient_
                      (IVar8,"snapshotOfRecordsInTruthWithEntityNames:usingIdentifiersForClient:",
                       IVar9,0);
    uVar19 = *(undefined8 *)PTR__ISyncRecordEntityNameKey_100012108;
    IVar9 = NSDictionary::dictionaryWithObjectsAndKeys_
                      ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar18,uVar19
                       ,0);
    IVar8 = ISyncManager::recordsWithMatchingAttributes_
                      (IVar8,"recordsWithMatchingAttributes:",IVar9);
    IVar8 = ISyncManager::allValues(IVar8,"allValues");
    IVar9 = (*(code *)puVar1)(uVar5,"filters");
    IVar7 = DataClassFilter::filterForDataClassName_fromFilters_
                      ((ID)&objc::class_t::DataClassFilter,"filterForDataClassName:fromFilters:",
                       IVar7,IVar9);
    lVar6 = 0;
    if (IVar7 != 0) {
      IVar7 = DataClassFilter::criteria(IVar7,"criteria");
      lVar6 = (*(code *)puVar1)(IVar7,"objectForKey:",&cf_ContactsFilterGroupsKey);
      if (lVar6 == 0) {
        local_38 = 0;
        lVar6 = 0;
      }
      else {
        local_38 = NSSet::setWithArray_((ID)&_OBJC_CLASS___NSSet,"setWithArray:",lVar6);
      }
    }
    IVar7 = ISyncManager::count(IVar8,"count");
    if ((lVar6 != 0) && (IVar7 == 0)) {
      cVar2 = _DLShouldLog(5);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                ,"_getContactGroupCollectionsForClient",5,
                &
                cf_Nogroupsinsnapshotandwehavefilteringset_maybethetruthwascleared_socheckingtoseeifthereareanycontacts
               );
      }
      IVar7 = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
      uVar5 = *(undefined8 *)PTR__ISyncEntity_Contacts_Contact_1000120c0;
      IVar8 = NSArray::arrayWithObjects_((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",uVar5,0);
      IVar7 = ISyncManager::snapshotOfRecordsInTruthWithEntityNames_usingIdentifiersForClient_
                        (IVar7,"snapshotOfRecordsInTruthWithEntityNames:usingIdentifiersForClient:",
                         IVar8,0);
      IVar8 = NSDictionary::dictionaryWithObjectsAndKeys_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar5,
                         uVar19,0);
      IVar7 = ISyncManager::recordsWithMatchingAttributes_
                        (IVar7,"recordsWithMatchingAttributes:",IVar8);
      IVar7 = ISyncManager::count(IVar7,"count");
      if (IVar7 != 0) {
        return 0;
      }
      cVar2 = _DLShouldLog(5);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                ,"_getContactGroupCollectionsForClient",5,
                &cf_Snapshotisempty_usingfiltergroupnames___,lVar6);
      }
      IVar7 = (*(code *)puVar1)(lVar6,"count");
      IVar8 = NSMutableArray::arrayWithCapacity_
                        ((ID)&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",IVar7);
      if (IVar7 != 0) {
        uVar5 = *(undefined8 *)PTR__ISyncAttribute_Contacts_Group_Name_100012048;
        IVar9 = 0;
        do {
          uVar18 = (*(code *)puVar1)(lVar6,"objectAtIndex:",IVar9);
          IVar20 = NSDictionary::dictionaryWithObjectsAndKeys_
                             ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar18
                              ,uVar5,0);
          NSMutableArray::addObject_(IVar8,"addObject:",IVar20);
          IVar9 = IVar9 + 1;
        } while (IVar7 != IVar9);
      }
      cVar2 = _DLShouldLog(5);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                ,"_getContactGroupCollectionsForClient",5,
                &cf_Dummiedupcontactsgroupsfromfiltersincethetruthisempty___,IVar8);
      }
    }
    if (IVar7 == 0) {
      return 0;
    }
    IVar8 = ISyncManager::mutableCopy(IVar8,"mutableCopy");
    uVar18 = _objc_autorelease(IVar8);
    (*(code *)puVar1)(uVar18,"sortUsingFunction:context:",FUN_100008033,0);
    uVar5 = (*(code *)puVar1)(uVar18,"count");
    IVar8 = NSMutableArray::arrayWithCapacity_
                      ((ID)&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",uVar5);
    uVar5 = *(undefined8 *)PTR__ISyncAttribute_Contacts_Group_Name_100012048;
    IVar9 = 0;
    do {
      uVar19 = (*(code *)puVar1)(uVar18,"objectAtIndex:",IVar9);
      uVar19 = (*(code *)puVar1)(uVar19,"objectForKey:",uVar5);
      cVar2 = (*(code *)puVar1)(local_38,"containsObject:",uVar19);
      IVar20 = NSNumber::numberWithBool_
                         ((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",(ulong)(uint)(int)cVar2);
      IVar20 = NSDictionary::dictionaryWithObjectsAndKeys_
                         ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar19,
                          &cf_AMSCollectionName,uVar19,&cf_AMSCollectionDisplayName,IVar20,
                          &cf_AMSCollectionFiltered,0);
      NSMutableArray::addObject_(IVar8,"addObject:",IVar20);
      IVar9 = IVar9 + 1;
    } while (IVar7 != IVar9);
  }
LAB_100005d8c:
  if (IVar8 == 0) {
    return 0;
  }
LAB_100005d91:
  IVar7 = _objc_alloc(&_OBJC_CLASS___NSDictionary);
  IVar7 = NSDictionary::initWithObjectsAndKeys_
                    (IVar7,"initWithObjectsAndKeys:",IVar8,&cf_AMSDataClassCollectionsKey,0);
  return IVar7;
}

