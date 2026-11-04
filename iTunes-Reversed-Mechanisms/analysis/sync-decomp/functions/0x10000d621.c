// rea decompile_all
// name: ContactsDataClassHandler::noteTargetPushedRecord:recordIdentifier:
// address: 0x10000d621
// body: available
// range: 0x10000d621-0x10000d9bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000d80b to 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000d8e9 to 0x100014863 __DLLog (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void ContactsDataClassHandler::noteTargetPushedRecord_recordIdentifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  ID IVar7;
  cfstringStruct *pcVar8;
  char *pcVar9;
  long lVar10;
  
  lVar3 = (*(code *)PTR__objc_msgSend_100020210)
                    (param_3,"objectForKey:",*(undefined8 *)PTR__ISyncRecordEntityNameKey_100020150)
  ;
  if (lVar3 == 0) {
    cVar2 = _DLShouldLog(3);
    if (cVar2 == '\0') {
      return;
    }
    pcVar8 = &cf_Bogusrecordwithfromtargetwithid___recordentitynameisnil;
  }
  else {
    cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                      (lVar3,"isEqualToString:",
                       *(undefined8 *)PTR__ISyncEntity_Contacts_Group_100020120);
    if (cVar2 == '\0') {
      cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                        (lVar3,"isEqualToString:",
                         *(undefined8 *)PTR__ISyncEntity_Contacts_Contact_100020100);
      if (cVar2 == '\0') {
        return;
      }
      cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                        (*(undefined8 *)(param_1 + _groupMemberSet),"containsObject:",param_4);
      puVar1 = PTR__objc_msgSend_100020210;
      if (cVar2 == '\0') {
        IVar5 = ConcreteDataClassHandler::snapshot(param_1,"snapshot");
        IVar7 = NSArray::arrayWithObject_((ID)&_OBJC_CLASS___NSArray,"arrayWithObject:",param_4);
        uVar6 = (*(code *)puVar1)(IVar5,"recordsWithIdentifiers:",IVar7);
        lVar3 = (*(code *)puVar1)(uVar6,"count");
        cVar2 = _DLShouldLog(5);
        if (lVar3 == 0) {
          if (cVar2 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                    ,"-[ContactsDataClassHandler noteTargetPushedRecord:recordIdentifier:]",5,
                    &cf_Addingrecordidentifier__todevicepushedcontactlist,param_4);
          }
          uVar6 = *(undefined8 *)(param_1 + _devicePushedContactsSet);
          pcVar9 = "addObject:";
          goto LAB_10000d7fd;
        }
        if (cVar2 == '\0') {
          return;
        }
        pcVar8 = &cf_Skippingaddofrecord__todevicepushedcontactlist_astherecordisalreadyknown;
      }
      else {
        cVar2 = _DLShouldLog(5);
        if (cVar2 == '\0') {
          return;
        }
        pcVar8 = &cf_Skippingaddofrecordidentifier__todevicepushedcontactlist_alreadyinagroup;
      }
      uVar6 = 5;
      goto LAB_10000d8d6;
    }
    lVar4 = (*(code *)PTR__objc_msgSend_100020210)
                      (param_3,"objectForKey:",
                       *(undefined8 *)PTR__ISyncAttribute_Contacts_Group_Name_100020078);
    lVar3 = _groupNames;
    if (lVar4 != 0) {
      if ((*(long *)(param_1 + _groupNames) != 0) &&
         (cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                            (*(long *)(param_1 + _groupNames),"containsObject:",lVar4),
         cVar2 == '\0')) {
        *(undefined1 *)(param_1 + _rebuildFilterCriteria) = 1;
        (*(code *)PTR__objc_msgSend_100020210)(*(undefined8 *)(param_1 + lVar3),"addObject:",lVar4);
      }
      IVar5 = (*(code *)PTR__objc_msgSend_100020210)
                        (param_3,"objectForKey:",
                         *(undefined8 *)PTR__ISyncRelationship_Contacts_Group_Members_1000201a0);
      if (IVar5 == 0) {
        return;
      }
      lVar4 = (*(code *)PTR__objc_msgSend_100020210)(IVar5,"count");
      lVar3 = _devicePushedContactsSet;
      puVar1 = PTR__objc_msgSend_100020210;
      if (0 < lVar4) {
        lVar10 = 0;
        do {
          uVar6 = (*(code *)puVar1)(IVar5,"objectAtIndex:",lVar10);
          cVar2 = (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar3),"containsObject:",uVar6);
          if (cVar2 != '\0') {
            cVar2 = _DLShouldLog(5);
            if (cVar2 != '\0') {
              __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                      ,"-[ContactsDataClassHandler noteTargetPushedRecord:recordIdentifier:]",5,
                      &cf_Removingpushedcontact__asitisingroup__,uVar6,param_4);
            }
            (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar3),"removeObject:",uVar6);
          }
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
      }
      uVar6 = *(undefined8 *)(param_1 + _groupMemberSet);
      pcVar9 = "addObjectsFromArray:";
      param_4 = IVar5;
LAB_10000d7fd:
      (*(code *)PTR__objc_msgSend_100020210)(uVar6,pcVar9,param_4);
      return;
    }
    cVar2 = _DLShouldLog(3);
    if (cVar2 == '\0') {
      return;
    }
    pcVar8 = &cf_Bogusgrouprecordwithfromtargetwithid___groupnameisnil;
  }
  uVar6 = 3;
LAB_10000d8d6:
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
          ,"-[ContactsDataClassHandler noteTargetPushedRecord:recordIdentifier:]",uVar6,pcVar8,
          param_4);
  return;
}

