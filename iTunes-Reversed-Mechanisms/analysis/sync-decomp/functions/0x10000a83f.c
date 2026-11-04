// rea decompile_all
// name: CalendarsDataClassHandler::_shouldApplyEventRecurrences:withRecordIdentifier:
// address: 0x10000a83f
// body: available
// range: 0x10000a83f-0x10000a96a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char CalendarsDataClassHandler::_shouldApplyEventRecurrences_withRecordIdentifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  
  puVar2 = PTR__objc_msgSend_100020210;
  if (*(int *)(param_1 + _dayLimit) != 0) {
    IVar4 = ConcreteDataClassHandler::snapshot(param_1,"snapshot");
    uVar5 = (*(code *)puVar2)(IVar4,"recordsWithIdentifiers:",param_3);
    uVar6 = (*(code *)puVar2)(uVar5,"keyEnumerator");
    uVar1 = *(undefined8 *)PTR__ISyncAttribute_Calendars_Recurrence_Until_100020048;
    do {
      lVar7 = (*(code *)puVar2)(uVar6,"nextObject");
      if (lVar7 == 0) {
        return '\0';
      }
      uVar8 = (*(code *)puVar2)(uVar5,"objectForKey:",lVar7);
      lVar9 = (*(code *)puVar2)(uVar8,"objectForKey:",uVar1);
    } while ((lVar9 != 0) &&
            (dVar10 = (double)(*(code *)puVar2)(lVar9,"timeIntervalSince1970"),
            (int)dVar10 < *(int *)(param_1 + _dayLimit)));
    cVar3 = _DLShouldLog(7);
    if (cVar3 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/CalendarsDataClassHandler.m"
              ,"-[CalendarsDataClassHandler _shouldApplyEventRecurrences:withRecordIdentifier:]",7,
              &cf_Accepting__becauserecurrence__hasnountildateoruntildateiswithinrangeRecurrence___,
              param_4,lVar7,uVar8);
    }
  }
  return '\x01';
}

