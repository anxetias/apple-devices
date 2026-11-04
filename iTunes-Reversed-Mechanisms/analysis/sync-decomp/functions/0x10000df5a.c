// rea decompile_all
// name: ContactsDataClassHandler::shouldApplyRecord:withRecordIdentifier:
// address: 0x10000df5a
// body: available
// range: 0x10000df5a-0x10000e300 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000e051 to 0x10000db75 ContactsDataClassHandler::shouldApplyRecord:withRecordIdentifier:groupRecordIdentifiers: (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000e090 to 0x10000dd8a ContactsDataClassHandler::shouldApplyContact:withRecordIdentifier: (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000e28d to 0x10000dd8a ContactsDataClassHandler::shouldApplyContact:withRecordIdentifier: (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

char ContactsDataClassHandler::shouldApplyRecord_withRecordIdentifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  cfstringStruct *pcVar7;
  
  if (*(long *)(param_1 + _groupNames) == 0) {
    return '\x01';
  }
  cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                    (*(undefined8 *)(param_1 + _acceptedRecords),"containsObject:",param_4);
  if (cVar2 != '\0') {
    return '\x01';
  }
  cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                    (*(undefined8 *)(param_1 + _rejectedRecords),"containsObject:",param_4);
  puVar1 = PTR__objc_msgSend_100020210;
  if (cVar2 == '\0') {
    uVar3 = (*(code *)PTR__objc_msgSend_100020210)
                      (param_3,"objectForKey:",
                       *(undefined8 *)PTR__ISyncRecordEntityNameKey_100020150);
    cVar2 = (*(code *)puVar1)(uVar3,"isEqualToString:",
                              *(undefined8 *)PTR__ISyncEntity_Contacts_Group_100020120);
    if (cVar2 != '\0') {
      IVar4 = NSArray::arrayWithObject_((ID)&_OBJC_CLASS___NSArray,"arrayWithObject:",param_4);
      cVar2 = shouldApplyRecord_withRecordIdentifier_groupRecordIdentifiers_
                        (param_1,"shouldApplyRecord:withRecordIdentifier:groupRecordIdentifiers:",
                         param_3,param_4,IVar4);
      return cVar2;
    }
    cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                      (uVar3,"isEqualToString:",
                       *(undefined8 *)PTR__ISyncEntity_Contacts_Contact_100020100);
    if (cVar2 != '\0') {
      cVar2 = shouldApplyContact_withRecordIdentifier_
                        (param_1,"shouldApplyContact:withRecordIdentifier:",param_3,param_4);
      return cVar2;
    }
    cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                      (uVar3,"isEqualToString:",
                       *(undefined8 *)PTR__ISyncEntity_Contacts_PhoneNumber_100020130);
    if (((((cVar2 == '\0') &&
          (cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                             (uVar3,"isEqualToString:",
                              *(undefined8 *)PTR__ISyncEntity_Contacts_EmailAddress_100020118),
          cVar2 == '\0')) &&
         (cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                            (uVar3,"isEqualToString:",
                             *(undefined8 *)PTR__ISyncEntity_Contacts_StreetAddress_100020140),
         cVar2 == '\0')) &&
        ((cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                            (uVar3,"isEqualToString:",
                             *(undefined8 *)PTR__ISyncEntity_Contacts_Date_100020110), cVar2 == '\0'
         && (cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                               (uVar3,"isEqualToString:",
                                *(undefined8 *)PTR__ISyncEntity_Contacts_RelatedName_100020138),
            cVar2 == '\0')))) &&
       ((cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                           (uVar3,"isEqualToString:",
                            *(undefined8 *)PTR__ISyncEntity_Contacts_URL_100020148), cVar2 == '\0'
        && ((cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                               (uVar3,"isEqualToString:",
                                *(undefined8 *)PTR__ISyncEntity_Contacts_IM_100020128),
            cVar2 == '\0' &&
            (cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                               (uVar3,"isEqualToString:",
                                *(undefined8 *)PTR__ISyncEntity_Contacts_CustomField_100020108),
            cVar2 == '\0')))))) {
      cVar2 = _DLShouldLog(4);
      if (cVar2 != '\0') {
        pcVar7 = &
                 cf_ContactsDataClassHandler_shouldApplyRecordcalledwithunknownrecordtype_recordidentifier___record___
        ;
        uVar3 = 4;
LAB_10000e2be:
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                ,"-[ContactsDataClassHandler shouldApplyRecord:withRecordIdentifier:]",uVar3,pcVar7,
                param_4,param_3);
        return '\0';
      }
    }
    else {
      puVar1 = PTR__objc_msgSend_100020210;
      uVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",&cf_contact);
      lVar5 = (*(code *)puVar1)(uVar3,"count");
      puVar1 = PTR__objc_msgSend_100020210;
      if (lVar5 == 1) {
        IVar4 = (*(code *)PTR__objc_msgSend_100020210)(uVar3,"objectAtIndex:",0);
        cVar2 = (*(code *)puVar1)(*(undefined8 *)(param_1 + _acceptedRecords),"containsObject:",
                                  IVar4);
        if (cVar2 != '\0') {
          return '\x01';
        }
        cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                          (*(undefined8 *)(param_1 + _rejectedRecords),"containsObject:",IVar4);
        puVar1 = PTR__objc_msgSend_100020210;
        if (cVar2 == '\0') {
          IVar6 = ConcreteDataClassHandler::snapshot(param_1,"snapshot");
          uVar3 = (*(code *)puVar1)(IVar6,"recordsWithIdentifiers:",uVar3);
          IVar6 = (*(code *)puVar1)(uVar3,"objectForKey:",IVar4);
          cVar2 = shouldApplyContact_withRecordIdentifier_
                            (param_1,"shouldApplyContact:withRecordIdentifier:",IVar6,IVar4);
          return cVar2;
        }
      }
      else {
        cVar2 = _DLShouldLog(3);
        if (cVar2 != '\0') {
          pcVar7 = &cf_Subentity__eitherhasnocontact_orhasmorethanonecontactinrelationship___;
          uVar3 = 3;
          goto LAB_10000e2be;
        }
      }
    }
  }
  return '\0';
}

