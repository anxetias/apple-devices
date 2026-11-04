// rea decompile_all
// name: CalendarsDataClassHandler::_recordParentIsAllDay:
// address: 0x100007b94
// body: available
// range: 0x100007b94-0x100007d00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100007caa to 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100007cee to 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char CalendarsDataClassHandler::_recordParentIsAllDay_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long local_38;
  
  puVar1 = PTR__objc_msgSend_100020210;
  lVar3 = (*(code *)PTR__objc_msgSend_100020210)
                    (param_3,"objectForKey:",
                     *(undefined8 *)PTR__ISyncRelationship_Calendars_Recurrence_Owner_100020188);
  lVar4 = (*(code *)puVar1)(lVar3,"count");
  lVar8 = 0;
  if (lVar4 == 1) {
    lVar8 = lVar3;
  }
  lVar3 = (*(code *)puVar1)(lVar8,"count");
  if (lVar3 != 0) {
    IVar5 = ConcreteDataClassHandler::snapshot(param_1,"snapshot");
    puVar1 = PTR__objc_msgSend_100020210;
    if (lVar8 == 0) {
      local_38 = 0;
    }
    else {
      uVar6 = (*(code *)PTR__objc_msgSend_100020210)(IVar5,"recordsWithIdentifiers:",lVar8);
      uVar7 = (*(code *)puVar1)(lVar8,"objectAtIndex:",0);
      local_38 = (*(code *)puVar1)(uVar6,"objectForKey:",uVar7);
    }
    uVar6 = *(undefined8 *)(param_1 + _pushedEventsAllDayMap);
    uVar7 = (*(code *)puVar1)(lVar8,"objectAtIndex:",0);
    lVar8 = (*(code *)puVar1)(uVar6,"objectForKey:",uVar7);
    puVar1 = PTR__objc_msgSend_100020210;
    if (lVar8 != 0) {
      cVar2 = (*(code *)PTR__objc_msgSend_100020210)(lVar8,"boolValue");
      return cVar2;
    }
    if (local_38 != 0) {
      uVar6 = (*(code *)PTR__objc_msgSend_100020210)
                        (local_38,"objectForKey:",
                         *(undefined8 *)PTR__ISyncAttribute_Calendars_Event_AllDay_100020018);
      cVar2 = (*(code *)puVar1)(uVar6,"boolValue");
      return cVar2;
    }
  }
  return '\0';
}

