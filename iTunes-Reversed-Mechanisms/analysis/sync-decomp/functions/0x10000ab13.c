// rea decompile_all
// name: CalendarsDataClassHandler::_shouldApplyRecordForCalendarFiltering:relationshipName:
// address: 0x10000ab13
// body: available
// range: 0x10000ab13-0x10000ac1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char CalendarsDataClassHandler::_shouldApplyRecordForCalendarFiltering_relationshipName_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  
  puVar1 = PTR__objc_msgSend_100020210;
  if (*(long *)(param_1 + _filterCalendarNames) == 0) {
    return '\x01';
  }
  uVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",param_4);
  lVar4 = (*(code *)puVar1)(uVar3,"count");
  if ((lVar4 != 0) &&
     (IVar5 = (*(code *)PTR__objc_msgSend_100020210)(uVar3,"objectAtIndex:",0), IVar5 != 0)) {
    cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + _filterAcceptSet),"containsObject:",IVar5);
    if (cVar2 != '\0') {
      return '\x01';
    }
    cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + _filterRejectSet),"containsObject:",IVar5);
    if (cVar2 == '\0') {
      IVar6 = ConcreteDataClassHandler::snapshot(param_1,"snapshot");
      uVar3 = (*(code *)puVar1)(IVar6,"recordsWithIdentifiers:",uVar3);
      IVar6 = (*(code *)puVar1)(uVar3,"objectForKey:",IVar5);
      cVar2 = _shouldApplyCalendar_withRecordIdentifier_
                        (param_1,"_shouldApplyCalendar:withRecordIdentifier:",IVar6,IVar5);
      if (cVar2 == '\x01') {
        return '\x01';
      }
    }
  }
  return '\0';
}

