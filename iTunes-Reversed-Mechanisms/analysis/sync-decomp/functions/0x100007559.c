// rea decompile_all
// name: CalendarsDataClassHandler::entityNamesOfRecordsToMutate
// address: 0x100007559
// body: available
// range: 0x100007559-0x1000075d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID CalendarsDataClassHandler::entityNamesOfRecordsToMutate(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = NSSet::setWithObjects_
                    ((ID)&_OBJC_CLASS___NSSet,"setWithObjects:",
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Calendar_1000200c8,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Event_1000200e0,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Task_1000200f8,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_AudioAlarm_1000200c0,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_DisplayAlarm_1000200d8,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Recurrence_1000200f0,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Organizer_1000200e8,
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Attendee_1000200b8,0);
  return IVar1;
}

