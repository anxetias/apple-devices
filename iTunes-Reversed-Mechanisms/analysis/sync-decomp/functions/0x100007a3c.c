// rea decompile_all
// name: CalendarsDataClassHandler::_setupDefaultCalendarRecordIdentifier
// address: 0x100007a3c
// body: available
// range: 0x100007a3c-0x100007b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void CalendarsDataClassHandler::_setupDefaultCalendarRecordIdentifier(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  ID IVar9;
  
  lVar4 = _defaultCalendarRecordIdentifier;
  if (*(long *)(param_1 + _defaultCalendarRecordIdentifier) == 0) {
    uVar7 = *(undefined8 *)PTR__kCFAllocatorDefault_1000201f0;
    uVar6 = _CFUUIDCreate(uVar7);
    uVar7 = _CFUUIDCreateString(uVar7,uVar6);
    *(undefined8 *)(param_1 + lVar4) = uVar7;
    _CFRelease(uVar6);
    puVar3 = PTR__objc_msgSend_100020210;
    uVar7 = *(undefined8 *)PTR__ISyncEntity_Calendars_Calendar_1000200c8;
    uVar6 = *(undefined8 *)PTR__ISyncRecordEntityNameKey_100020150;
    uVar1 = *(undefined8 *)(param_1 + _defaultCalendarName);
    uVar2 = *(undefined8 *)PTR__ISyncAttribute_Calendars_Calendar_Title_100020010;
    IVar8 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",0);
    lVar4 = _defaultCalendarRecordIdentifier;
    IVar8 = NSDictionary::dictionaryWithObjectsAndKeys_
                      ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",uVar7,uVar6,
                       uVar1,uVar2,IVar8,
                       *(undefined8 *)PTR__ISyncAttribute_Calendars_Calendar_ReadOnly_100020008,0);
    cVar5 = _DLShouldLog(5);
    if (cVar5 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,"-[CalendarsDataClassHandler _setupDefaultCalendarRecordIdentifier]",5,
              &cf_Noexistingcalendartoputneweventsinto_socreating_pushingcalendarwithrecordid_____,
              *(undefined8 *)(param_1 + lVar4),IVar8);
    }
    IVar9 = ConcreteDataClassHandler::session(param_1,"session");
    (*(code *)puVar3)(IVar9,"pushChangesFromRecord:withIdentifier:",IVar8,
                      *(undefined8 *)(param_1 + lVar4));
    *(undefined1 *)(param_1 + _createdDefaultCalendar) = 1;
  }
  return;
}

