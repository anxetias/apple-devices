// rea decompile_all
// name: CalendarsDataClassHandler::mutateRecordFromTargetForSyncServices:recordIdentifier:
// address: 0x100007d58
// body: available
// range: 0x100007d58-0x100008818 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x20 bytes */

ID CalendarsDataClassHandler::mutateRecordFromTargetForSyncServices_recordIdentifier_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  ID IVar15;
  long lVar16;
  ID IVar17;
  ID IVar18;
  ID IVar19;
  ID IVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  ulong uVar27;
  ID IVar28;
  undefined8 uVar29;
  ID IVar30;
  cfstringStruct *pcVar31;
  int iVar32;
  bool bVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  ID local_38;
  
  puVar4 = PTR__objc_msgSend_100020210;
  uVar29 = *(undefined8 *)PTR__ISyncRecordEntityNameKey_100020150;
  uVar10 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:");
  uVar1 = *(undefined8 *)PTR__ISyncEntity_Calendars_Event_1000200e0;
  cVar5 = (*(code *)puVar4)(uVar10,"isEqualToString:");
  lVar16 = _pushedEventsAllDayMap;
  if (cVar5 == '\0') {
    if ((*(char *)(param_1 + _supportsAttendees) == '\0') &&
       ((cVar5 = (*(code *)PTR__objc_msgSend_100020210)
                           (uVar10,"isEqualToString:",
                            *(undefined8 *)PTR__ISyncEntity_Calendars_Organizer_1000200e8),
        cVar5 != '\0' ||
        (cVar5 = (*(code *)PTR__objc_msgSend_100020210)
                           (uVar10,"isEqualToString:",
                            *(undefined8 *)PTR__ISyncEntity_Calendars_Attendee_1000200b8),
        cVar5 != '\0')))) {
      cVar5 = _DLShouldLog(4);
      if (cVar5 == '\0') {
        return 0;
      }
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,
              "-[CalendarsDataClassHandler mutateRecordFromTargetForSyncServices:recordIdentifier:]"
              ,4,&cf_Skippingorganizer_attendeewithid__fromdevice___,param_4,param_3);
      return 0;
    }
  }
  else {
    if (*(long *)(param_1 + _pushedEventsAllDayMap) == 0) {
      IVar11 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
      IVar11 = NSMutableDictionary::init(IVar11,"init");
      *(ID *)(param_1 + lVar16) = IVar11;
    }
    IVar11 = (*(code *)PTR__objc_msgSend_100020210)
                       (param_3,"objectForKey:",
                        *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_AllDay_100020018);
    if (IVar11 == 0) {
      IVar11 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    }
    (*(code *)PTR__objc_msgSend_100020210)
              (*(undefined8 *)(param_1 + lVar16),"setObject:forKey:",IVar11,param_4);
  }
  puVar4 = PTR__objc_msgSend_100020210;
  IVar12 = (*(code *)PTR__objc_msgSend_100020210)
                     (param_3,"objectForKey:",
                      *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_StartDate_100020038);
  IVar13 = (*(code *)puVar4)(param_3,"objectForKey:",
                             *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_EndDate_100020020);
  IVar14 = (*(code *)puVar4)(param_3,"objectForKey:",
                             *(undefined8 *)
                              PTR__ISyncAttribute_Calendars_Event_OriginalDate_100020030);
  IVar15 = (*(code *)puVar4)(param_3,"objectForKey:",
                             *(undefined8 *)
                              PTR__ISyncAttribute_Calendars_Event_ExceptionDates_100020028);
  uVar10 = *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_Url_100020040;
  lVar16 = (*(code *)puVar4)(param_3,"objectForKey:");
  IVar11 = *(ID *)PTR__ISyncAttribute_Calendars_Task_DueDate_100020058;
  IVar17 = (*(code *)puVar4)(param_3,"objectForKey:");
  IVar28 = *(ID *)PTR__ISyncAttribute_Calendars_Task_CompletionDate_100020050;
  IVar18 = (*(code *)puVar4)(param_3,"objectForKey:");
  IVar2 = *(ID *)PTR__ISyncAttribute_Calendars_Recurrence_Until_100020048;
  IVar19 = (*(code *)puVar4)(param_3,"objectForKey:");
  IVar3 = *(ID *)PTR__ISyncAttribute_Calendars_AudioAlarm_Triggerdate_100020000;
  IVar20 = (*(code *)puVar4)(param_3,"objectForKey:");
  lVar21 = (*(code *)puVar4)(param_3,"objectForKey:",&cf_colorComponents);
  lVar22 = (*(code *)puVar4)(param_3,"objectForKey:",&cf_floatingGMTDate);
  lVar23 = (*(code *)puVar4)(param_3,"objectForKey:",&cf_subscription_url);
  lVar24 = (*(code *)puVar4)(param_3,"objectForKey:",&cf_com_apple_ical_urlsubscribe_url);
  if ((((((IVar19 == 0 && IVar20 == 0) && lVar21 == 0) && lVar22 == 0) &&
       (((lVar16 == 0 && IVar17 == 0) && IVar18 == 0) &&
       ((IVar14 == 0 && IVar15 == 0) && (IVar12 == 0 && IVar13 == 0)))) && lVar23 == 0) &&
      lVar24 == 0) {
    IVar30 = 0;
  }
  else {
    uVar25 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"mutableCopy");
    param_3 = _objc_autorelease(uVar25);
    IVar30 = param_3;
  }
  puVar4 = PTR__objc_msgSend_100020210;
  if (IVar12 == 0) {
    uVar25 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",uVar29);
    cVar5 = (*(code *)puVar4)(uVar25,"isEqualToString:",uVar1);
    if (cVar5 == '\x01') {
      cVar5 = _DLShouldLog(3);
      if (cVar5 == '\0') {
        return 0;
      }
      pcVar31 = &cf_CalendarEventfromtargetdoesn_thaveastartdate___;
      goto LAB_1000084b7;
    }
  }
  else {
    lVar26 = (*(code *)PTR__objc_msgSend_100020210)
                       (param_3,"objectForKey:",
                        *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_AllDay_100020018);
    if (lVar26 == 0) {
      bVar33 = false;
    }
    else {
      iVar6 = (*(code *)PTR__objc_msgSend_100020210)(lVar26,"intValue");
      bVar33 = iVar6 != 0;
    }
    cVar5 = _joinStartDate_endDate_originalDate_exceptionDates_allDay_record_recordIdentifier_
                      (param_1,
                       "_joinStartDate:endDate:originalDate:exceptionDates:allDay:record:recordIdentifier:"
                       ,IVar12,IVar13,IVar14,IVar15,bVar33,IVar30,param_4);
    if (cVar5 == '\0') {
      cVar5 = _DLShouldLog(3);
      if (cVar5 == '\0') {
        return 0;
      }
      pcVar31 = &cf_CalendarEventfromtargethasbogusdates___;
LAB_1000084b7:
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,
              "-[CalendarsDataClassHandler mutateRecordFromTargetForSyncServices:recordIdentifier:]"
              ,3,pcVar31,param_3);
      return 0;
    }
  }
  if (lVar22 != 0) {
    uVar25 = FUN_10000bca0();
    puVar4 = PTR__objc_msgSend_100020210;
    uVar25 = (*(code *)PTR__objc_msgSend_100020210)
                       (lVar22,"dateWithCalendarFormat:timeZone:",0,uVar25);
    (*(code *)puVar4)(IVar30,"setObject:forKey:",uVar25,&cf_floatingGMTDate);
  }
  puVar4 = PTR__objc_msgSend_100020210;
  if (IVar17 != 0) {
    _calendarDate_propertyName_record_offset_
              (param_1,"_calendarDate:propertyName:record:offset:",IVar17,IVar11,IVar30,1);
    IVar11 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",1);
    (*(code *)puVar4)(IVar30,"setObject:forKey:",IVar11,
                      *(undefined8 *)PTR__ISyncAttribute_Calendars_Task_DueDateIsDateOnly_100020060)
    ;
  }
  if (IVar18 != 0) {
    _calendarDate_propertyName_record_offset_
              (param_1,"_calendarDate:propertyName:record:offset:",IVar18,IVar28,IVar30,2);
  }
  if (IVar19 != 0) {
    iVar32 = 3 - (*(char *)(param_1 + _supportsCorrectUntilDates) == '\0');
    cVar5 = _recordParentIsAllDay_(param_1,"_recordParentIsAllDay:",param_3);
    if (cVar5 != '\0') {
      iVar32 = 6;
      cVar5 = _DLShouldLog(6);
      if (cVar5 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                ,
                "-[CalendarsDataClassHandler mutateRecordFromTargetForSyncServices:recordIdentifier:]"
                ,6,&cf_Theparentisanall_dayevent);
      }
    }
    _calendarDate_propertyName_record_offset_
              (param_1,"_calendarDate:propertyName:record:offset:",IVar19,IVar2,IVar30,iVar32);
  }
  if (IVar20 != 0) {
    _calendarDate_propertyName_record_offset_
              (param_1,"_calendarDate:propertyName:record:offset:",IVar20,IVar3,IVar30,0);
  }
  if (lVar23 != 0) {
    IVar11 = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL,"URLWithString:");
    if (IVar11 != 0) {
      (*(code *)PTR__objc_msgSend_100020210)(IVar30,"setObject:forKey:",IVar11,&cf_subscription_url)
      ;
      goto LAB_1000082cb;
    }
LAB_100008464:
    cVar5 = _DLShouldLog(3);
    if (cVar5 == '\0') {
                    /* WARNING: Read-only address (ram,0x00010001e8a0) is written */
      return 0;
    }
    pcVar31 = &cf_Bogusurlincalendar_throwingawayrecord;
LAB_1000085a9:
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
            ,"-[CalendarsDataClassHandler mutateRecordFromTargetForSyncServices:recordIdentifier:]",
            3,pcVar31);
    return 0;
  }
LAB_1000082cb:
  if (lVar24 != 0) {
    IVar11 = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL,"URLWithString:");
    if (IVar11 == 0) goto LAB_100008464;
    (*(code *)PTR__objc_msgSend_100020210)
              (IVar30,"setObject:forKey:",IVar11,&cf_com_apple_ical_urlsubscribe_url);
  }
  if (lVar16 != 0) {
    IVar11 = NSURL::URLWithString_((ID)&_OBJC_CLASS___NSURL,"URLWithString:",lVar16);
    if (IVar11 == 0) {
      cVar5 = _DLShouldLog(3);
      if (cVar5 == '\0') {
        return 0;
      }
      pcVar31 = &cf_Bogusurlinevent_throwingawayrecord;
      goto LAB_1000085a9;
    }
    (*(code *)PTR__objc_msgSend_100020210)(IVar30,"setObject:forKey:",IVar11,uVar10);
  }
  if (lVar21 == 0) goto LAB_10000869f;
  uVar27 = (*(code *)PTR__objc_msgSend_100020210)(lVar21,"count");
  puVar4 = PTR__objc_msgSend_100020210;
  if (uVar27 < 3) {
    cVar5 = _DLShouldLog(4);
    if (cVar5 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,
              "-[CalendarsDataClassHandler mutateRecordFromTargetForSyncServices:recordIdentifier:]"
              ,4,&
                 cf_Receivedcalendarcolorcomponentsfromthedevice_butitdidnothaveenoughcomponents____recordid___
              ,lVar21,param_4);
    }
  }
  else {
    uVar10 = (*(code *)PTR__objc_msgSend_100020210)(lVar21,"objectAtIndex:",0);
    iVar6 = (*(code *)puVar4)(uVar10,"intValue");
    uVar10 = (*(code *)puVar4)(lVar21,"objectAtIndex:",1);
    iVar7 = (*(code *)puVar4)(uVar10,"intValue");
    uVar10 = (*(code *)puVar4)(lVar21,"objectAtIndex:",2);
    iVar8 = (*(code *)puVar4)(uVar10,"intValue");
    puVar4 = PTR__objc_msgSend_100020210;
    if ((double)iVar6 / 255.0 < 0.0) {
LAB_1000085c3:
      IVar11 = ConcreteDataClassHandler::snapshot(param_1,"snapshot");
      IVar28 = NSArray::arrayWithObject_((ID)&_OBJC_CLASS___NSArray,"arrayWithObject:",param_4);
      uVar10 = (*(code *)puVar4)(IVar11,"recordsWithIdentifiers:",IVar28);
      uVar10 = (*(code *)puVar4)(uVar10,"objectForKey:",param_4);
      lVar16 = (*(code *)puVar4)(uVar10,"objectForKey:",&cf_color);
      cVar5 = _DLShouldLog(6);
      if (cVar5 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                ,
                "-[CalendarsDataClassHandler mutateRecordFromTargetForSyncServices:recordIdentifier:]"
                ,6,&cf_Usingcalendarcolorfromsnapshot___,lVar16);
      }
    }
    else {
      auVar35._0_8_ = (double)iVar8;
      auVar35._8_8_ = (double)iVar7;
      auVar35 = divpd(auVar35,_DAT_10001e8a0);
      auVar34._8_8_ = -(ulong)(0.0 <= auVar35._8_8_);
      auVar34._0_8_ = -(ulong)(0.0 <= auVar35._0_8_);
      uVar9 = movmskpd(iVar8,auVar34);
      if (((byte)((byte)uVar9 >> 1) == 0) || ((uVar9 & 1) == 0)) goto LAB_1000085c3;
      lVar16 = (*(code *)PTR__objc_msgSend_100020210)
                         ((double)iVar6 / 255.0,auVar35._8_8_,auVar35._0_8_,0x3ff0000000000000,
                          &_OBJC_CLASS___NSColor,"colorWithCalibratedRed:green:blue:alpha:");
    }
    if (lVar16 != 0) {
      (*(code *)PTR__objc_msgSend_100020210)(IVar30,"setObject:forKey:",lVar16,&cf_color);
    }
  }
  (*(code *)PTR__objc_msgSend_100020210)(IVar30,"removeObjectForKey:",&cf_colorComponents);
LAB_10000869f:
  puVar4 = PTR__objc_msgSend_100020210;
  uVar10 = *(undefined8 *)PTR__ISyncRelationship_Calendars_Event_Calendar_100020160;
  uVar25 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",uVar10);
  lVar16 = (*(code *)puVar4)(uVar25,"count");
  if ((lVar16 != 0) &&
     (lVar16 = (*(code *)PTR__objc_msgSend_100020210)(uVar25,"objectAtIndex:",0), lVar16 != 0)) {
    return param_3;
  }
  puVar4 = PTR__objc_msgSend_100020210;
  uVar29 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",uVar29);
  cVar5 = (*(code *)puVar4)(uVar29,"isEqual:",uVar1);
  if ((cVar5 == '\0') &&
     (cVar5 = (*(code *)PTR__objc_msgSend_100020210)
                        (uVar29,"isEqual:",*(undefined8 *)PTR__ISyncEntity_Calendars_Task_1000200f8)
     , cVar5 == '\0')) {
    return param_3;
  }
  lVar16 = _defaultCalendarRecordIdentifier;
  if (*(long *)(param_1 + _defaultCalendarRecordIdentifier) == 0) {
    _setupDefaultCalendarRecordIdentifier(param_1,"_setupDefaultCalendarRecordIdentifier");
  }
  local_38 = param_3;
  if (IVar30 == 0) {
    uVar29 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"mutableCopy");
    IVar30 = _objc_autorelease(uVar29);
    local_38 = IVar30;
  }
  puVar4 = PTR__objc_msgSend_100020210;
  IVar11 = NSArray::arrayWithObject_
                     ((ID)&_OBJC_CLASS___NSArray,"arrayWithObject:",
                      *(undefined8 *)(param_1 + lVar16));
  (*(code *)puVar4)(IVar30,"setObject:forKey:",IVar11,uVar10);
  lVar16 = _lostRecordsInDefaultCalendar;
  IVar11 = *(ID *)(param_1 + _lostRecordsInDefaultCalendar);
  if (IVar11 == 0) {
    IVar11 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    IVar11 = NSMutableArray::init(IVar11,"init");
    *(ID *)(param_1 + lVar16) = IVar11;
  }
  NSMutableArray::addObject_(IVar11,"addObject:",param_4);
  return local_38;
}

