// rea decompile_all
// name: CalendarsDataClassHandler::_organizerRecordIsValid:withRecordId:
// address: 0x100008ff3
// body: available
// range: 0x100008ff3-0x1000091ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char CalendarsDataClassHandler::_organizerRecordIsValid_withRecordId_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  
  puVar1 = PTR__objc_msgSend_100020210;
  uVar3 = (*(code *)PTR__objc_msgSend_100020210)
                    (param_3,"objectForKey:",
                     *(undefined8 *)PTR__ISyncRelationship_Calendars_Organizer_Owner_100020180);
  lVar4 = (*(code *)puVar1)(uVar3,"count");
  if (lVar4 == 1) {
    IVar5 = ConcreteDataClassHandler::snapshot(param_1,"snapshot");
    uVar6 = (*(code *)puVar1)(IVar5,"recordsWithIdentifiers:",uVar3);
    uVar3 = (*(code *)puVar1)(uVar3,"objectAtIndex:",0);
    IVar5 = (*(code *)puVar1)(uVar6,"objectForKey:",uVar3);
    if (IVar5 == 0) {
      cVar2 = _DLShouldLog(4);
      if (cVar2 != '\0') {
        pcVar7 = &cf_Organizerdidnothaveaparenteventinthesnapshot___;
        goto LAB_10000917c;
      }
    }
    else {
      uVar3 = (*(code *)puVar1)(IVar5,"objectForKey:",
                                *(undefined8 *)
                                 PTR__ISyncRelationship_Calendars_Event_Organizer_100020170);
      lVar4 = (*(code *)puVar1)(uVar3,"count");
      if (lVar4 == 1) {
        uVar6 = (*(code *)puVar1)(uVar3,"objectAtIndex:",0);
        cVar2 = (*(code *)puVar1)(uVar6,"isEqualToString:",param_4);
        if (cVar2 != '\0') {
          return '\x01';
        }
        cVar2 = _DLShouldLog(4);
        if (cVar2 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
                  ,"-[CalendarsDataClassHandler _organizerRecordIsValid:withRecordId:]",4,
                  &cf_Theorganizer_seventdoesnothaveabackreferencetothisorganizer_______,param_4,
                  uVar3);
          return '\0';
        }
      }
      else {
        cVar2 = _DLShouldLog(4);
        if (cVar2 != '\0') {
          pcVar7 = &cf_Eventdoesnothaveoneorganizer___;
          param_3 = IVar5;
          goto LAB_10000917c;
        }
      }
    }
  }
  else {
    cVar2 = _DLShouldLog(4);
    if (cVar2 != '\0') {
      pcVar7 = &cf_Organizerdoesnothaveoneowningevent___;
LAB_10000917c:
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,"-[CalendarsDataClassHandler _organizerRecordIsValid:withRecordId:]",4,pcVar7,param_3
             );
      return '\0';
    }
  }
  return '\0';
}

