// rea decompile_all
// name: ContactsDataClassHandler::initWithDataClassName:client:
// address: 0x10000bcd9
// body: available
// range: 0x10000bcd9-0x10000bec8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID ContactsDataClassHandler::initWithDataClassName_client_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  ID local_40;
  class_t *local_38;
  
  local_38 = &objc::class_t::ContactsDataClassHandler;
  local_40 = param_1;
  IVar4 = ConcreteDataClassHandler::initWithDataClassName_client_
                    ((ID)&local_40,"initWithDataClassName:client:",param_3,param_4);
  if (IVar4 != 0) {
    *(undefined1 *)(IVar4 + _rebuildFilterCriteria) = 0;
    *(undefined8 *)(IVar4 + _groupNamesMap) = 0;
    IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableSet);
    IVar5 = NSMutableSet::init(IVar5,"init");
    *(ID *)(IVar4 + _groupMemberSet) = IVar5;
    cVar3 = _DLShouldLog(5);
    if (cVar3 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
              ,"-[ContactsDataClassHandler initWithDataClassName:client:]",5,
              &cf_Creatingemptydevicepushedcontactlist);
    }
    IVar5 = _objc_alloc(&_OBJC_CLASS___NSMutableSet);
    puVar1 = PTR__objc_msgSend_100020210;
    IVar5 = NSMutableSet::init(IVar5,"init");
    *(ID *)(IVar4 + _devicePushedContactsSet) = IVar5;
    *(undefined4 *)(IVar4 + _totalImageSizes) = 0;
    *(undefined1 *)(IVar4 + _batching) = 1;
    *(undefined1 *)(IVar4 + _useImageChangedPlaceholder) = 0;
    uVar6 = (*(code *)puVar1)(param_4,"objectForKey:",&cf_iPodSyncNewRecordGroupKey);
    uVar6 = (*(code *)PTR__objc_retain_100020220)(uVar6);
    lVar2 = _defaultGroupName;
    *(undefined8 *)(IVar4 + _defaultGroupName) = uVar6;
    IVar5 = _objc_alloc(&_OBJC_CLASS___NSSet);
    IVar5 = NSSet::initWithObjects_
                      (IVar5,"initWithObjects:",
                       *(undefined8 *)PTR__ISyncEntity_Contacts_PhoneNumber_100020130,
                       *(undefined8 *)PTR__ISyncEntity_Contacts_EmailAddress_100020118,
                       *(undefined8 *)PTR__ISyncEntity_Contacts_StreetAddress_100020140,
                       *(undefined8 *)PTR__ISyncEntity_Contacts_Date_100020110,
                       *(undefined8 *)PTR__ISyncEntity_Contacts_RelatedName_100020138,
                       *(undefined8 *)PTR__ISyncEntity_Contacts_URL_100020148,
                       *(undefined8 *)PTR__ISyncEntity_Contacts_IM_100020128,
                       *(undefined8 *)PTR__ISyncEntity_Contacts_CustomField_100020108,0);
    *(ID *)(IVar4 + _subEntityEntityNameSet) = IVar5;
    cVar3 = _DLShouldLog(5);
    if (cVar3 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
              ,"-[ContactsDataClassHandler initWithDataClassName:client:]",5,
              &cf_DefaultGroupNameis__,*(undefined8 *)(IVar4 + lVar2));
    }
  }
  return IVar4;
}

