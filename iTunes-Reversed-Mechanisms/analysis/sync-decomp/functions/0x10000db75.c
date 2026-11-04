// rea decompile_all
// name: ContactsDataClassHandler::shouldApplyRecord:withRecordIdentifier:groupRecordIdentifiers:
// address: 0x10000db75
// body: available
// range: 0x10000db75-0x10000dd89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

char ContactsDataClassHandler::shouldApplyRecord_withRecordIdentifier_groupRecordIdentifiers_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ID IVar9;
  ID IVar10;
  undefined8 uVar11;
  long lVar12;
  
  if ((param_5 != 0) &&
     (lVar6 = (*(code *)PTR__objc_msgSend_100020210)(param_5,"count"), lVar4 = _groupNames,
     lVar3 = _groupNamesMap, puVar2 = PTR__objc_msgSend_100020210, 0 < lVar6)) {
    uVar1 = *(undefined8 *)PTR__ISyncAttribute_Contacts_Group_Name_100020078;
    lVar12 = 0;
    do {
      uVar7 = (*(code *)puVar2)(param_5,"objectAtIndex:",lVar12);
      lVar8 = (*(code *)puVar2)(*(undefined8 *)(param_1 + lVar3),"objectForKey:",uVar7);
      if (lVar8 == 0) {
        IVar9 = ConcreteDataClassHandler::snapshot(param_1,"snapshot");
        IVar10 = NSArray::arrayWithObject_((ID)&_OBJC_CLASS___NSArray,"arrayWithObject:",uVar7);
        uVar11 = (*(code *)puVar2)(IVar9,"recordsWithIdentifiers:",IVar10);
        uVar11 = (*(code *)puVar2)(uVar11,"objectForKey:",uVar7);
        lVar8 = (*(code *)puVar2)(uVar11,"objectForKey:",uVar1);
        cVar5 = _DLShouldLog(5);
        if (cVar5 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                  ,
                  "-[ContactsDataClassHandler shouldApplyRecord:withRecordIdentifier:groupRecordIdentifiers:]"
                  ,5,&cf____Snapshot_Group__hasname__,uVar7,lVar8);
        }
        if (lVar8 != 0) {
          IVar9 = *(ID *)(param_1 + lVar3);
          if (IVar9 == 0) {
            IVar9 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
            IVar9 = NSMutableDictionary::init(IVar9,"init");
            *(ID *)(param_1 + lVar3) = IVar9;
          }
          NSMutableDictionary::setObject_forKey_(IVar9,"setObject:forKey:",lVar8,uVar7);
          goto LAB_10000dd22;
        }
      }
      else {
LAB_10000dd22:
        cVar5 = (*(code *)puVar2)(*(undefined8 *)(param_1 + lVar4),"containsObject:",lVar8);
        if (cVar5 != '\0') {
          _acceptRecordWithIdentifier_(param_1,"_acceptRecordWithIdentifier:",param_4);
          return '\x01';
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar6 != lVar12);
  }
  _rejectRecordWithIdentifier_(param_1,"_rejectRecordWithIdentifier:",param_4);
  return '\0';
}

