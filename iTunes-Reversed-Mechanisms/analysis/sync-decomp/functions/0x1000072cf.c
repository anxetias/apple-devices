// rea decompile_all
// name: CalendarsDataClassHandler::entityNamesToSync
// address: 0x1000072cf
// body: available
// range: 0x1000072cf-0x10000739a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID CalendarsDataClassHandler::entityNamesToSync(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  
  bVar6 = *(char *)(param_1 + _supportsAttendees) == '\0';
  uVar4 = 0;
  uVar3 = *(undefined8 *)PTR__ISyncEntity_Calendars_Organizer_1000200e8;
  if (bVar6) {
    uVar3 = 0;
  }
  uVar2 = *(undefined8 *)PTR__ISyncEntity_Calendars_Attendee_1000200b8;
  if (bVar6) {
    uVar2 = 0;
  }
  uVar5 = 0;
  if (*(char *)(param_1 + _supportsCalendarOrder) != '\0') {
    uVar5 = *(undefined8 *)PTR__ISyncEntity_Calendars_CalendarOrder_1000200d0;
  }
  if (*(char *)(param_1 + _supportsTasks) != '\0') {
    uVar4 = *(undefined8 *)PTR__ISyncEntity_Calendars_Task_1000200f8;
  }
  IVar1 = NSArray::arrayWithObjects_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Calendar_1000200c8,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Event_1000200e0,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_AudioAlarm_1000200c0,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_DisplayAlarm_1000200d8,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Recurrence_1000200f0,uVar3,uVar2,
                     uVar5,uVar4,0);
  return IVar1;
}

