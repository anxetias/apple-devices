// rea decompile_all
// name: CalendarsDataClassHandler::_joinStartDate:endDate:originalDate:exceptionDates:allDay:record:recordIdentifier:
// address: 0x1000075d4
// body: available
// range: 0x1000075d4-0x10000790d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x44 bytes */

char CalendarsDataClassHandler::
     _joinStartDate_endDate_originalDate_exceptionDates_allDay_record_recordIdentifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,char param_7,
               ID param_8,ID param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_38;
  
  puVar1 = PTR__objc_msgSend_100020210;
  if (param_7 == '\0') {
    IVar4 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,"stringWithFormat:",&cf____timezone,
                       *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_StartDate_100020038);
    lVar3 = (*(code *)puVar1)(param_8,"objectForKey:",IVar4);
    (*(code *)puVar1)(param_8,"removeObjectForKey:",IVar4);
    if (lVar3 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = _CFTimeZoneCreateWithName(0,lVar3,1);
      _objc_autorelease(local_38);
    }
    uVar2 = (*(code *)PTR__objc_msgSend_100020210)
                      (param_3,"dateWithCalendarFormat:timeZone:",0,local_38);
  }
  else {
    local_38 = FUN_10000bca0();
    uVar2 = (*(code *)PTR__objc_msgSend_100020210)
                      (param_3,"dateWithCalendarFormat:timeZone:",0,local_38);
    if (param_7 == '\x01') {
      uVar2 = (*(code *)PTR__objc_msgSend_100020210)
                        (0x40e5180000000000,uVar2,"_addTimeIntervalToCalendarDate:");
    }
  }
  (*(code *)PTR__objc_msgSend_100020210)
            (param_8,"setObject:forKey:",uVar2,
             *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_StartDate_100020038);
  if (param_4 != 0) {
    uVar2 = FUN_10000bca0();
    uVar2 = (*(code *)PTR__objc_msgSend_100020210)
                      (param_4,"dateWithCalendarFormat:timeZone:",0,uVar2);
    if (param_7 == '\0') {
      (*(code *)PTR__objc_msgSend_100020210)(uVar2,"setTimeZone:",local_38);
    }
    else {
      uVar2 = (*(code *)PTR__objc_msgSend_100020210)
                        (0x40e5182000000000,uVar2,"_addTimeIntervalToCalendarDate:");
    }
    (*(code *)PTR__objc_msgSend_100020210)
              (param_8,"setObject:forKey:",uVar2,
               *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_EndDate_100020020);
  }
  if (param_5 != 0) {
    uVar2 = FUN_10000bca0();
    uVar2 = (*(code *)PTR__objc_msgSend_100020210)
                      (param_5,"dateWithCalendarFormat:timeZone:",0,uVar2);
    if (param_7 == '\0') {
      (*(code *)PTR__objc_msgSend_100020210)(uVar2,"setTimeZone:",local_38);
    }
    else {
      uVar2 = (*(code *)PTR__objc_msgSend_100020210)
                        (0x40e5180000000000,uVar2,"_addTimeIntervalToCalendarDate:");
    }
    (*(code *)PTR__objc_msgSend_100020210)
              (param_8,"setObject:forKey:",uVar2,
               *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_OriginalDate_100020030);
  }
  if (param_6 != 0) {
    lVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_6,"count");
    if (lVar3 < 1) {
      (*(code *)PTR__objc_msgSend_100020210)
                (param_8,"removeObjectForKey:",
                 *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_ExceptionDates_100020028);
    }
    else {
      IVar4 = NSMutableArray::arrayWithCapacity_
                        ((ID)&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",lVar3);
      puVar1 = PTR__objc_msgSend_100020210;
      lVar6 = 0;
      do {
        uVar2 = (*(code *)puVar1)(param_6,"objectAtIndex:",lVar6);
        uVar5 = FUN_10000bca0();
        uVar2 = (*(code *)puVar1)(uVar2,"dateWithCalendarFormat:timeZone:",0,uVar5);
        if (param_7 == '\0') {
          (*(code *)puVar1)(uVar2,"setTimeZone:",local_38);
        }
        else {
          uVar2 = (*(code *)puVar1)(0x40e5180000000000,uVar2,"_addTimeIntervalToCalendarDate:");
        }
        NSMutableArray::addObject_(IVar4,"addObject:",uVar2);
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      (*(code *)PTR__objc_msgSend_100020210)
                (param_8,"setObject:forKey:",IVar4,
                 *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_ExceptionDates_100020028);
    }
  }
  return '\x01';
}

