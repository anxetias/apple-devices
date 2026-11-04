// rea decompile_all
// name: CalendarsDataClassHandler::mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:
// address: 0x1000091cb
// body: available
// range: 0x1000091cb-0x100009de1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x30 bytes */

ID CalendarsDataClassHandler::mutateRecordFromSyncServicesForTarget_change_recordIdentifier_sendNow_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,char *param_6)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  long lVar8;
  ID IVar9;
  ID IVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  cfstringStruct *pcVar15;
  undefined *puVar16;
  bool bVar17;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  long local_68;
  ID local_60;
  long local_58;
  ID local_50;
  long local_48;
  undefined *local_40;
  ID local_38;
  
  lVar8 = _outOfRangeEvents;
  if (*(long *)(param_1 + _outOfRangeEvents) == 0) {
    IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableSet);
    IVar4 = NSMutableSet::init(IVar4,"init");
    *(ID *)(param_1 + lVar8) = IVar4;
  }
  local_40 = (undefined *)param_1;
  cVar2 = _DLShouldLog(7);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
            ,
            "-[CalendarsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
            ,7,&cf_Mutatingrecord__fromSyncServices___,param_5,param_3);
  }
  puVar16 = PTR__objc_msgSend_100020210;
  uVar6 = *(undefined8 *)PTR__ISyncRecordEntityNameKey_100020150;
  local_50 = param_5;
  uVar5 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",uVar6);
  cVar2 = (*(code *)puVar16)(uVar5,"isEqualToString:",
                             *(undefined8 *)PTR__ISyncEntity_Calendars_Calendar_1000200c8);
  if (cVar2 != '\0') {
    uVar6 = (*(code *)puVar16)(local_40,"snapshot");
    IVar4 = local_50;
    IVar7 = NSArray::arrayWithObject_((ID)&_OBJC_CLASS___NSArray,"arrayWithObject:",local_50);
    uVar6 = (*(code *)puVar16)(uVar6,"recordsWithIdentifiers:",IVar7);
    lVar8 = (*(code *)puVar16)(uVar6,"objectForKey:",IVar4);
    if (lVar8 != 0) {
      uVar6 = (*(code *)puVar16)(lVar8,"objectForKey:",&cf_com_apple_ical_type);
      cVar2 = (*(code *)puVar16)(uVar6,"isEqualToString:",&cf_caldav);
      if (cVar2 != '\0') {
        cVar2 = _DLShouldLog(6);
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                  ,
                  "-[CalendarsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
                  ,6,&cf_CalendarrecordreceivedfromSyncServicesisaCalDAVcalendar);
        }
        uVar6 = (*(code *)puVar16)(param_3,"mutableCopy");
        param_3 = _objc_autorelease(uVar6);
        IVar4 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
        (*(code *)puVar16)(param_3,"setObject:forKey:",IVar4);
        IVar4 = param_3;
        goto LAB_10000938e;
      }
    }
    IVar4 = 0;
LAB_10000938e:
    lVar8 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",&cf_color);
    if (lVar8 != 0) {
      local_38 = param_3;
      IVar7 = NSColorSpace::genericRGBColorSpace
                        ((ID)&_OBJC_CLASS___NSColorSpace,"genericRGBColorSpace");
      lVar8 = (*(code *)puVar16)(lVar8,"colorUsingColorSpace:",IVar7);
      if (lVar8 == 0) {
        lVar8 = 0;
      }
      else {
        local_e8 = 0.0;
        local_e0 = 0.0;
        local_d8 = 0.0;
        local_d0 = 0.0;
        (*(code *)puVar16)(lVar8,"getRed:green:blue:alpha:",&local_e8,&local_e0,&local_d8);
        local_40 = &_OBJC_CLASS___NSArray;
        local_50 = NSNumber::numberWithInt_
                             ((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",
                              (ulong)(uint)(int)(local_e8 * 255.0));
        IVar7 = NSNumber::numberWithInt_
                          ((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",
                           (ulong)(uint)(int)(local_e0 * 255.0));
        IVar9 = NSNumber::numberWithInt_
                          ((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",
                           (ulong)(uint)(int)(local_d8 * 255.0));
        IVar10 = NSNumber::numberWithInt_
                           ((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",
                            (ulong)(uint)(int)(local_d0 * 255.0));
        lVar8 = (*(code *)puVar16)(local_40,"arrayWithObjects:",local_50,IVar7,IVar9,IVar10,0);
      }
      if (IVar4 == 0) {
        uVar6 = (*(code *)PTR__objc_msgSend_100020210)(local_38,"mutableCopy");
        IVar4 = _objc_autorelease(uVar6);
      }
      if (lVar8 != 0) {
        (*(code *)PTR__objc_msgSend_100020210)(IVar4,"setObject:forKey:",lVar8,&cf_colorComponents);
      }
      (*(code *)PTR__objc_msgSend_100020210)(IVar4,"removeObjectForKey:",&cf_color);
      param_3 = IVar4;
    }
    lVar8 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",&cf_subscription_url);
    if (lVar8 != 0) {
      uVar6 = (*(code *)puVar16)(lVar8,"absoluteString");
      (*(code *)puVar16)(param_3,"setValue:forKey:",uVar6,&cf_subscription_url);
    }
    lVar8 = (*(code *)PTR__objc_msgSend_100020210)
                      (param_3,"objectForKey:",&cf_com_apple_ical_urlsubscribe_url);
    if (lVar8 != 0) {
      uVar6 = (*(code *)puVar16)(lVar8,"absoluteString");
      (*(code *)puVar16)(param_3,"setValue:forKey:",uVar6,&cf_com_apple_ical_urlsubscribe_url);
    }
    return param_3;
  }
  lVar8 = *(long *)PTR__ISyncEntity_Calendars_Recurrence_1000200f0;
  cVar2 = (*(code *)PTR__objc_msgSend_100020210)(uVar5,"isEqual:",lVar8);
  local_38 = param_3;
  if (((cVar2 == '\0') &&
      (cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                         (uVar5,"isEqual:",
                          *(undefined8 *)PTR__ISyncEntity_Calendars_AudioAlarm_1000200c0),
      cVar2 == '\0')) &&
     (cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                        (uVar5,"isEqual:",
                         *(undefined8 *)PTR__ISyncEntity_Calendars_DisplayAlarm_1000200d8),
     cVar2 == '\0')) {
    cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                      (uVar5,"isEqual:",
                       *(undefined8 *)PTR__ISyncEntity_Calendars_Organizer_1000200e8);
    IVar4 = local_38;
    if (cVar2 != '\0') {
      cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                        (local_40,"_organizerRecordIsValid:withRecordId:",local_38,local_50);
      if (cVar2 != '\0') {
        return IVar4;
      }
      return 0;
    }
LAB_10000987a:
    IVar4 = local_38;
    puVar16 = PTR__objc_msgSend_100020210;
    local_88 = *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_StartDate_100020038;
    local_78 = (*(code *)PTR__objc_msgSend_100020210)(local_38,"objectForKey:");
    local_c8 = (*(code *)puVar16)(IVar4,"objectForKey:",
                                  *(undefined8 *)
                                   PTR__ISyncAttribute_Calendars_Event_EndDate_100020020);
    local_68 = (*(code *)puVar16)(IVar4,"objectForKey:",
                                  *(undefined8 *)
                                   PTR__ISyncAttribute_Calendars_Event_OriginalDate_100020030);
    local_70 = (*(code *)puVar16)(IVar4,"objectForKey:",
                                  *(undefined8 *)
                                   PTR__ISyncAttribute_Calendars_Event_ExceptionDates_100020028);
    local_98 = *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_Url_100020040;
    local_48 = (*(code *)puVar16)(IVar4,"objectForKey:");
    local_a0 = *(undefined8 *)PTR__ISyncAttribute_Calendars_Task_DueDate_100020058;
    local_58 = (*(code *)puVar16)(IVar4,"objectForKey:");
    local_a8 = *(undefined8 *)PTR__ISyncAttribute_Calendars_Task_CompletionDate_100020050;
    lVar13 = (*(code *)puVar16)(IVar4,"objectForKey:");
    local_80 = *(undefined8 *)PTR__ISyncAttribute_Calendars_Recurrence_Until_100020048;
    lVar14 = (*(code *)puVar16)(IVar4,"objectForKey:");
    local_90 = *(undefined8 *)PTR__ISyncAttribute_Calendars_AudioAlarm_Triggerdate_100020000;
    local_c0 = (*(code *)puVar16)(IVar4,"objectForKey:");
    lVar11 = local_78;
    lVar8 = local_c8;
    local_b8 = lVar14;
    local_b0 = lVar13;
    if (((((local_48 == 0 && local_58 == 0) && lVar13 == 0) &&
         ((local_68 == 0 && local_70 == 0) && (local_78 == 0 && local_c8 == 0))) && lVar14 == 0) &&
        local_c0 == 0) {
      IVar7 = 0;
    }
    else {
      uVar6 = (*(code *)PTR__objc_msgSend_100020210)(IVar4,"mutableCopy");
      IVar7 = _objc_autorelease(uVar6);
      local_38 = IVar7;
    }
    puVar16 = local_40;
    if (lVar11 == 0) {
      cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                        (uVar5,"isEqualToString:",
                         *(undefined8 *)PTR__ISyncEntity_Calendars_Event_1000200e0);
      if (cVar2 != '\x01') {
LAB_100009b94:
        if (local_58 != 0) {
          (*(code *)PTR__objc_msgSend_100020210)
                    (puVar16,"_clipDate:propertyName:record:offset:",local_58,local_a0,IVar7,1);
        }
        lVar8 = local_c0;
        if (local_b0 != 0) {
          (*(code *)PTR__objc_msgSend_100020210)
                    (puVar16,"_clipDate:propertyName:record:offset:",local_b0,local_a8,IVar7,2);
        }
        IVar4 = local_38;
        if ((local_b8 != 0) &&
           (cVar2 = (*(code *)PTR__objc_msgSend_100020210)(puVar16,"_dateOutsideRange:"),
           cVar2 != '\0')) {
          cVar2 = _DLShouldLog(4);
          if (cVar2 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                    ,
                    "-[CalendarsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
                    ,4,&
                       cf_RecurrencefromSyncServiceshasuntildateoutsideourrange_removingit_soitis_never_____
                    ,IVar4);
          }
          (*(code *)PTR__objc_msgSend_100020210)(IVar7,"removeObjectForKey:",local_80);
        }
        if (lVar8 != 0) {
          cVar2 = (*(code *)PTR__objc_msgSend_100020210)(puVar16,"_dateOutsideRange:",lVar8);
          if (cVar2 != '\0') {
            local_60 = IVar7;
            cVar2 = _DLShouldLog(4);
            if (cVar2 != '\0') {
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                      ,
                      "-[CalendarsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
                      ,4,&
                         cf_AlarmfromSyncServiceshastriggerdateoutsideourrange_settingtodateofevent___
                      ,IVar4);
            }
            puVar1 = PTR__objc_msgSend_100020210;
            uVar5 = (*(code *)PTR__objc_msgSend_100020210)
                              (IVar4,"objectForKey:",
                               *(undefined8 *)
                                PTR__ISyncRelationship_Calendars_Recurrence_Owner_100020188);
            lVar8 = (*(code *)puVar1)(uVar5,"count");
            puVar16 = local_40;
            uVar6 = 0;
            if (lVar8 == 1) {
              uVar6 = uVar5;
            }
            uVar5 = (*(code *)puVar1)(local_40,"snapshot");
            uVar6 = FUN_100007d01(uVar5,uVar6);
            lVar8 = (*(code *)puVar1)(uVar6,"objectForKey:",local_88);
            IVar7 = local_60;
            if (lVar8 == 0) {
              cVar2 = _DLShouldLog(3);
              if (cVar2 == '\0') {
                return 0;
              }
              pcVar15 = &cf_Can_tfindstartdateforownerofRecurrence_Alarm_skipping___;
              uVar6 = 3;
              goto LAB_10000962b;
            }
          }
          (*(code *)PTR__objc_msgSend_100020210)
                    (puVar16,"_clipDate:propertyName:record:offset:",lVar8,local_90,IVar7,0);
        }
        puVar16 = PTR__objc_msgSend_100020210;
        if (local_48 != 0) {
          uVar6 = (*(code *)PTR__objc_msgSend_100020210)(local_48,"absoluteString");
          (*(code *)puVar16)(IVar7,"setValue:forKey:",uVar6,local_98);
          return IVar4;
        }
        return IVar4;
      }
      cVar2 = _DLShouldLog(3);
      if (cVar2 == '\0') {
        return 0;
      }
      pcVar15 = &cf_CalendarEventfromSyncServicesdoesn_thaveastartdate___;
    }
    else {
      cVar2 = (*(code *)PTR__objc_msgSend_100020210)(local_40,"_dateOutsideRange:");
      if (((cVar2 != '\0') ||
          (cVar2 = (*(code *)PTR__objc_msgSend_100020210)(puVar16,"_dateOutsideRange:",lVar8),
          cVar2 != '\0')) ||
         (cVar2 = (*(code *)PTR__objc_msgSend_100020210)(puVar16,"_dateOutsideRange:",local_68),
         cVar2 != '\0')) {
        cVar2 = _DLShouldLog(4);
        IVar4 = local_50;
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                  ,
                  "-[CalendarsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
                  ,4,&cf_Event_sstart_end_ororiginaldateoutsideofourdatelimits_rejecting___,local_38
                 );
        }
        (*(code *)PTR__objc_msgSend_100020210)
                  (*(undefined8 *)(puVar16 + _outOfRangeEvents),"addObject:",IVar4);
        return 0;
      }
      lVar11 = (*(code *)PTR__objc_msgSend_100020210)
                         (local_38,"objectForKey:",
                          *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_AllDay_100020018);
      local_60 = IVar7;
      if (lVar11 == 0) {
        bVar17 = false;
      }
      else {
        iVar3 = (*(code *)PTR__objc_msgSend_100020210)(lVar11,"intValue");
        bVar17 = iVar3 != 0;
      }
      puVar1 = PTR__objc_msgSend_100020210;
      lVar11 = (*(code *)PTR__objc_msgSend_100020210)(local_38,"objectForKey:",&cf_floatingGMTDate);
      IVar7 = local_60;
      cVar2 = (*(code *)puVar1)(puVar16,
                                "_splitStartDate:endDate:originalDate:exceptionDates:allDay:floating:record:recordIdentifier:"
                                ,local_78,lVar8,local_68,local_70,bVar17,lVar11 != 0,local_60,
                                local_50);
      if (cVar2 != '\0') goto LAB_100009b94;
      cVar2 = _DLShouldLog(3);
      if (cVar2 == '\0') {
        return 0;
      }
      pcVar15 = &cf_CalendarEventfromSyncServiceshasbogusdates___;
    }
  }
  else {
    puVar16 = PTR__objc_msgSend_100020210;
    local_58 = lVar8;
    lVar8 = (*(code *)PTR__objc_msgSend_100020210)
                      (param_3,"objectForKey:",
                       *(undefined8 *)PTR__ISyncRelationship_Calendars_Recurrence_Owner_100020188);
    lVar11 = (*(code *)puVar16)(lVar8,"count");
    puVar1 = local_40;
    puVar16 = PTR__objc_msgSend_100020210;
    if ((lVar8 == 0) || (lVar11 != 1)) {
      cVar2 = _DLShouldLog(3);
      if (cVar2 == '\0') {
        return 0;
      }
      pcVar15 = &cf_Recurrence_Alarmhasnoownerormorethanoneowner_skipping___;
    }
    else {
      uVar12 = (*(code *)PTR__objc_msgSend_100020210)(lVar8,"objectAtIndex:",0);
      cVar2 = (*(code *)puVar16)(*(undefined8 *)(puVar1 + _outOfRangeEvents),"containsObject:",
                                 uVar12);
      if (cVar2 != '\0') {
        cVar2 = _DLShouldLog(4);
        if (cVar2 == '\0') {
          return 0;
        }
        pcVar15 = &cf_OwnerforRecurrence_Alarmhasdateoutofrange_skipping___;
        uVar6 = 4;
        IVar4 = local_38;
        goto LAB_10000962b;
      }
      uVar12 = (*(code *)puVar16)(puVar1,"snapshot");
      local_48 = (*(code *)puVar16)(uVar12,"recordsWithIdentifiers:",lVar8);
      uVar12 = (*(code *)puVar16)(lVar8,"objectAtIndex:",0);
      lVar8 = (*(code *)puVar16)(local_48,"objectForKey:",uVar12);
      if (lVar8 != 0) {
        local_48 = lVar8;
        uVar6 = (*(code *)puVar16)(lVar8,"objectForKey:",uVar6);
        cVar2 = (*(code *)puVar16)(uVar5,"isEqual:",local_58);
        if (((cVar2 != '\0') || (puVar1[_supportsTasks] == '\0')) &&
           (cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                              (uVar6,"isEqual:",
                               *(undefined8 *)PTR__ISyncEntity_Calendars_Event_1000200e0),
           cVar2 == '\0')) {
          cVar2 = _DLShouldLog(4);
          if (cVar2 == '\0') {
            return 0;
          }
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                  ,
                  "-[CalendarsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
                  ,4,&cf_Alarm_RecurrenceownerisnotanEvent_skipping___parent___,local_38,local_48);
          return 0;
        }
        goto LAB_10000987a;
      }
      cVar2 = _DLShouldLog(3);
      if (cVar2 == '\0') {
        return 0;
      }
      pcVar15 = &cf_Can_tfindownerrecordforRecurrence_Alarm_skipping___;
    }
  }
  uVar6 = 3;
  IVar4 = local_38;
LAB_10000962b:
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
          ,
          "-[CalendarsDataClassHandler mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:]"
          ,uVar6,pcVar15,IVar4);
  return 0;
}

