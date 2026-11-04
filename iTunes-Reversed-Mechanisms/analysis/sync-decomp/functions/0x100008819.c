// rea decompile_all
// name: CalendarsDataClassHandler::_splitStartDate:endDate:originalDate:exceptionDates:allDay:floating:record:recordIdentifier:
// address: 0x100008819
// body: available
// range: 0x100008819-0x100008bb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x48 bytes */

char CalendarsDataClassHandler::
     _splitStartDate_endDate_originalDate_exceptionDates_allDay_floating_record_recordIdentifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,char param_7,
               char param_8,ID param_9,ID param_10)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double local_38;
  
  puVar1 = PTR__objc_msgSend_100020210;
  if (param_7 == '\0') {
    IVar5 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf____timezone,
                       *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_StartDate_100020038);
    uVar4 = (*(code *)puVar1)(param_3,"timeZone");
    lVar3 = (*(code *)puVar1)(uVar4,"name");
    if (param_8 == '\0') {
      if (lVar3 == 0) {
        cVar2 = _DLShouldLog(4);
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                  ,
                  "-[CalendarsDataClassHandler _splitStartDate:endDate:originalDate:exceptionDates:allDay:floating:record:recordIdentifier:]"
                  ,4,&cf_Bogustimezoneineventstartdate____treatingasfloating,param_3);
        }
        local_38 = 0.0;
        goto LAB_10000895c;
      }
      (*(code *)PTR__objc_msgSend_100020210)(param_9,"setObject:forKey:",lVar3,IVar5);
    }
    else {
      cVar2 = _DLShouldLog(6);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                ,
                "-[CalendarsDataClassHandler _splitStartDate:endDate:originalDate:exceptionDates:allDay:floating:record:recordIdentifier:]"
                ,6,&cf_Syncingafloatingdate_notaddingatimezone);
      }
    }
    local_38 = 0.0;
  }
  else {
    lVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"hourOfDay");
    local_38 = 0.0;
    if (lVar3 != 0) {
      local_38 = 43200.0;
    }
    cVar2 = _DLShouldLog(5);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,
              "-[CalendarsDataClassHandler _splitStartDate:endDate:originalDate:exceptionDates:allDay:floating:record:recordIdentifier:]"
              ,5,&cf_Settingalldayoffsetto_d,(int)local_38);
    }
  }
LAB_10000895c:
  puVar1 = PTR__objc_msgSend_100020210;
  dVar7 = (double)(*(code *)PTR__objc_msgSend_100020210)(param_3,"timeIntervalSinceReferenceDate");
  uVar4 = (*(code *)puVar1)(dVar7 - local_38,&_OBJC_CLASS___NSDate,
                            "dateWithTimeIntervalSinceReferenceDate:");
  (*(code *)puVar1)(param_9,"setObject:forKey:",uVar4,
                    *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_StartDate_100020038);
  puVar1 = PTR__objc_msgSend_100020210;
  if (param_4 != 0) {
    dVar7 = 0.0;
    if (param_7 != '\0') {
      dVar7 = local_38 + 1.0;
    }
    dVar8 = (double)(*(code *)PTR__objc_msgSend_100020210)(param_4,"timeIntervalSinceReferenceDate")
    ;
    uVar4 = (*(code *)puVar1)(dVar8 - dVar7,&_OBJC_CLASS___NSDate,
                              "dateWithTimeIntervalSinceReferenceDate:");
    (*(code *)puVar1)(param_9,"setObject:forKey:",uVar4,
                      *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_EndDate_100020020);
  }
  if (param_5 != 0) {
    if ((param_7 == '\0') ||
       (lVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_5,"hourOfDay"), lVar3 != 0xc)) {
      dVar7 = 0.0;
    }
    else {
      dVar7 = 43200.0;
    }
    puVar1 = PTR__objc_msgSend_100020210;
    dVar8 = (double)(*(code *)PTR__objc_msgSend_100020210)(param_5,"timeIntervalSinceReferenceDate")
    ;
    uVar4 = (*(code *)puVar1)(dVar8 - dVar7,&_OBJC_CLASS___NSDate,
                              "dateWithTimeIntervalSinceReferenceDate:");
    (*(code *)puVar1)(param_9,"setObject:forKey:",uVar4,
                      *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_OriginalDate_100020030);
  }
  if (param_6 != 0) {
    lVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_6,"count");
    if (lVar3 < 1) {
      (*(code *)PTR__objc_msgSend_100020210)
                (param_9,"removeObjectForKey:",
                 *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_ExceptionDates_100020028);
    }
    else {
      IVar5 = NSMutableArray::arrayWithCapacity_
                        ((ID)&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",lVar3);
      puVar1 = PTR__objc_msgSend_100020210;
      lVar6 = 0;
      do {
        uVar4 = (*(code *)puVar1)(param_6,"objectAtIndex:",lVar6);
        dVar7 = (double)(*(code *)puVar1)(uVar4,"timeIntervalSinceReferenceDate");
        uVar4 = (*(code *)puVar1)(dVar7 - local_38,&_OBJC_CLASS___NSDate,
                                  "dateWithTimeIntervalSinceReferenceDate:");
        NSMutableArray::addObject_(IVar5,"addObject:",uVar4);
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      (*(code *)PTR__objc_msgSend_100020210)
                (param_9,"setObject:forKey:",IVar5,
                 *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_ExceptionDates_100020028);
    }
  }
  return '\x01';
}

