// rea decompile_all
// name: ContactsDataClassHandler::clientCommittedPulledRecords
// address: 0x10000e35e
// body: available
// range: 0x10000e35e-0x10000e428 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void ContactsDataClassHandler::clientCommittedPulledRecords(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  ID IVar5;
  
  cVar3 = _DLShouldLog(5);
  lVar2 = _devicePushedContactsSet;
  puVar1 = PTR__objc_msgSend_100020210;
  if (cVar3 != '\0') {
    uVar4 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + _devicePushedContactsSet),"allObjects");
    uVar4 = (*(code *)puVar1)(uVar4,"componentsJoinedByString:",&cf_space_s_);
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
            ,"-[ContactsDataClassHandler clientCommittedPulledRecords]",5,
            &cf_Savingdevicepushedcontactlistaftercommit___,uVar4);
  }
  puVar1 = PTR__objc_msgSend_100020210;
  IVar5 = ConcreteDataClassHandler::client(param_1,"client");
  uVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar2),"allObjects");
  (*(code *)puVar1)(IVar5,"setObject:forKey:",uVar4,&cf_ContactsDevicePushedContacts);
  *(undefined4 *)(param_1 + _totalImageSizes) = 0;
  return;
}

