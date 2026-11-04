// rea decompile_all
// name: ContactsDataClassHandler::clientFinishedPushingRecords
// address: 0x10000c4e3
// body: available
// range: 0x10000c4e3-0x10000cac6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void ContactsDataClassHandler::clientFinishedPushingRecords(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  ID IVar5;
  long lVar6;
  ID IVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ID local_78;
  class_t *local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ID local_38;
  
  lVar6 = _defaultGroupRecord;
  lVar4 = _defaultGroupName;
  lVar8 = _devicePushedContactsSet;
  if (*(long *)(param_1 + _defaultGroupRecord) == 0) {
    if ((*(long *)(param_1 + _defaultGroupName) != 0) &&
       (lVar6 = (*(code *)PTR__objc_msgSend_100020210)
                          (*(undefined8 *)(param_1 + _devicePushedContactsSet),"count"), lVar6 != 0)
       ) {
      cVar3 = _DLShouldLog(5);
      if (cVar3 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                ,"-[ContactsDataClassHandler clientFinishedPushingRecords]",5,
                &cf_Wehavegrouplesscontacts_butourdefaultgroup__wasn_tpushed_Lookinginthesnapshot,
                *(undefined8 *)(param_1 + lVar4));
      }
      puVar2 = PTR__objc_msgSend_100020210;
      local_38 = param_1;
      IVar5 = ConcreteDataClassHandler::snapshot(param_1,"snapshot");
      local_50 = *(undefined8 *)PTR__ISyncEntity_Contacts_Group_100020120;
      local_48 = *(undefined8 *)PTR__ISyncRecordEntityNameKey_100020150;
      IVar7 = NSDictionary::dictionaryWithObjectsAndKeys_
                        ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",local_50,
                         local_48,0);
      local_60 = (*(code *)puVar2)(IVar5,"recordsWithMatchingAttributes:",IVar7);
      local_68 = (*(code *)puVar2)(local_60,"keyEnumerator");
      local_40 = *(undefined8 *)PTR__ISyncAttribute_Contacts_Group_Name_100020078;
      local_58 = "isEqualToString:";
      do {
        lVar8 = (*(code *)puVar2)(local_68,"nextObject");
        if (lVar8 == 0) goto LAB_10000c7ba;
        uVar10 = (*(code *)puVar2)(local_60,"objectForKey:",lVar8);
        uVar11 = (*(code *)puVar2)(uVar10,"objectForKey:",local_40);
        cVar3 = (*(code *)puVar2)(uVar11,local_58,*(undefined8 *)(local_38 + _defaultGroupName));
      } while (cVar3 == '\0');
      uVar9 = (*(code *)PTR__objc_retain_100020220)(lVar8);
      *(undefined8 *)(local_38 + _defaultGroupRecordIdentifier) = uVar9;
      IVar5 = (*(code *)PTR__objc_msgSend_100020210)
                        (local_38,"_createGroupRecordWithPushedContacts:",uVar10);
      cVar3 = _DLShouldLog(5);
      if (cVar3 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                ,"-[ContactsDataClassHandler clientFinishedPushingRecords]",5,
                &cf_Founddefaultgroup__inthesnapshotwithrecordid__,uVar11,lVar8);
      }
      if (IVar5 == 0) {
LAB_10000c7ba:
        uVar10 = *(undefined8 *)PTR__kCFAllocatorDefault_1000201f0;
        uVar11 = _CFUUIDCreate(uVar10);
        uVar10 = _CFUUIDCreateString(uVar10,uVar11);
        param_1 = local_38;
        lVar6 = _defaultGroupRecordIdentifier;
        *(undefined8 *)(local_38 + _defaultGroupRecordIdentifier) = uVar10;
        _CFRelease(uVar11);
        lVar4 = _defaultGroupName;
        IVar5 = NSDictionary::dictionaryWithObjectsAndKeys_
                          ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",local_50,
                           local_48,*(undefined8 *)(param_1 + _defaultGroupName),local_40,0);
        IVar5 = (*(code *)puVar2)(param_1,"_createGroupRecordWithPushedContacts:",IVar5);
        cVar3 = _DLShouldLog(5);
        lVar8 = _devicePushedContactsSet;
        if (cVar3 == '\0') goto LAB_10000c894;
        bVar1 = false;
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                ,"-[ContactsDataClassHandler clientFinishedPushingRecords]",5,
                &
                cf_Createdanewdefaultgroup__withrecordid__sinceitwasn_tfoundinthesnapshot_norpushedbythedevice
                ,*(undefined8 *)(param_1 + lVar4),*(undefined8 *)(param_1 + lVar6));
        lVar8 = _devicePushedContactsSet;
        goto LAB_10000c896;
      }
      bVar1 = false;
      param_1 = local_38;
      goto LAB_10000c89f;
    }
  }
  else {
    cVar3 = _DLShouldLog(5);
    if (cVar3 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
              ,"-[ContactsDataClassHandler clientFinishedPushingRecords]",5,
              &cf_Wehaveadefaultgrouprecordfor__withid__,
              *(undefined8 *)(param_1 + _defaultGroupName),
              *(undefined8 *)(param_1 + _defaultGroupRecordIdentifier));
    }
    lVar8 = _devicePushedContactsSet;
    lVar4 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + _devicePushedContactsSet),"count");
    IVar5 = *(ID *)(param_1 + lVar6);
    if (lVar4 == 0) {
      (*(code *)PTR__objc_retain_100020220)(IVar5);
      bVar1 = true;
    }
    else {
      IVar5 = _createGroupRecordWithPushedContacts_
                        (param_1,"_createGroupRecordWithPushedContacts:",IVar5);
      cVar3 = _DLShouldLog(5);
      if (cVar3 == '\0') {
LAB_10000c894:
        bVar1 = false;
      }
      else {
        bVar1 = false;
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                ,"-[ContactsDataClassHandler clientFinishedPushingRecords]",5,
                &cf_Updatedgrouprecordwithid__fordefaultgroupforgrouplesscontacts___,
                *(undefined8 *)(param_1 + _defaultGroupRecordIdentifier),IVar5);
      }
    }
LAB_10000c896:
    if (IVar5 != 0) {
LAB_10000c89f:
      cVar3 = _DLShouldLog(5);
      if (cVar3 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                ,"-[ContactsDataClassHandler clientFinishedPushingRecords]",5,
                &cf_Pushingdefaultgrouprecord__withid_____,
                *(undefined8 *)(param_1 + _defaultGroupName),
                *(undefined8 *)(param_1 + _defaultGroupRecordIdentifier),IVar5);
      }
      lVar4 = _groupNames;
      lVar8 = _defaultGroupName;
      if ((*(long *)(param_1 + _groupNames) != 0) &&
         (cVar3 = (*(code *)PTR__objc_msgSend_100020210)
                            (*(long *)(param_1 + _groupNames),"containsObject:",
                             *(undefined8 *)(param_1 + _defaultGroupName)), cVar3 == '\0')) {
        *(undefined1 *)(param_1 + _rebuildFilterCriteria) = 1;
        (*(code *)PTR__objc_msgSend_100020210)
                  (*(undefined8 *)(param_1 + lVar4),"addObject:",*(undefined8 *)(param_1 + lVar8));
      }
      puVar2 = PTR__objc_msgSend_100020210;
      uVar10 = (*(code *)PTR__objc_msgSend_100020210)(param_1,"session");
      lVar8 = _defaultGroupRecordIdentifier;
      (*(code *)puVar2)(uVar10,"pushChangesFromRecord:withIdentifier:",IVar5,
                        *(undefined8 *)(param_1 + _defaultGroupRecordIdentifier));
      (*(code *)PTR__objc_release_100020218)(IVar5);
      if (!bVar1) {
        cVar3 = _DLShouldLog(5);
        if (cVar3 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                  ,"-[ContactsDataClassHandler clientFinishedPushingRecords]",5,
                  &cf_Losingdefaultgrouprecord__withid__sowe_llpullit,
                  *(undefined8 *)(param_1 + _defaultGroupName),*(undefined8 *)(param_1 + lVar8));
        }
        uVar10 = (*(code *)puVar2)(param_1,"session");
        (*(code *)puVar2)(uVar10,"clientLostRecordWithIdentifier:shouldReplaceOnNextSync:",
                          *(undefined8 *)(param_1 + lVar8),1);
      }
      goto LAB_10000ca9a;
    }
  }
  lVar4 = (*(code *)PTR__objc_msgSend_100020210)(*(undefined8 *)(param_1 + lVar8),"count");
  if (lVar4 != 0) {
    cVar3 = _DLShouldLog(6);
    puVar2 = PTR__objc_msgSend_100020210;
    if (cVar3 != '\0') {
      uVar10 = (*(code *)PTR__objc_msgSend_100020210)(*(undefined8 *)(param_1 + lVar8),"allObjects")
      ;
      uVar10 = (*(code *)puVar2)(uVar10,"componentsJoinedByString:",&cf_space_s_);
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
              ,"-[ContactsDataClassHandler clientFinishedPushingRecords]",6,
              &cf_Savingdevicepushedcontactlistafterpushing___,uVar10);
    }
    puVar2 = PTR__objc_msgSend_100020210;
    uVar10 = (*(code *)PTR__objc_msgSend_100020210)(param_1,"client");
    uVar11 = (*(code *)puVar2)(*(undefined8 *)(param_1 + lVar8),"allObjects");
    (*(code *)puVar2)(uVar10,"setObject:forKey:",uVar11,&cf_ContactsDevicePushedContacts);
  }
LAB_10000ca9a:
  local_70 = &objc::class_t::ContactsDataClassHandler;
  local_78 = param_1;
  ConcreteDataClassHandler::clientFinishedPushingRecords
            ((ID)&local_78,"clientFinishedPushingRecords");
  return;
}

