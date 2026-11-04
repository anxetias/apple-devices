// rea decompile_all
// name: ConcreteSyncClient::setDataClassNames:
// address: 0x100002278
// body: available
// range: 0x100002278-0x10000248c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100002471 to 0x100014863 __DLLog (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void ConcreteSyncClient::setDataClassNames_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  ID IVar5;
  ID IVar6;
  undefined8 uVar7;
  ID IVar8;
  
  cVar3 = _DLShouldLog(5);
  if (cVar3 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient setDataClassNames:]",5,&cf_Askedtosyncdataclasses__,param_3);
  }
  lVar2 = _dataClassNames;
  (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + _dataClassNames));
  lVar4 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"count");
  puVar1 = PTR__objc_msgSend_100020210;
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + lVar2) = 0;
  }
  else {
    IVar5 = NSMutableSet::setWithArray_((ID)&_OBJC_CLASS___NSMutableSet,"setWithArray:",param_3);
    IVar6 = _objc_alloc(&_OBJC_CLASS___NSMutableArray);
    uVar7 = (*(code *)puVar1)(param_3,"count");
    IVar6 = NSMutableArray::initWithCapacity_(IVar6,"initWithCapacity:",uVar7);
    *(ID *)(param_1 + _dataClassNames) = IVar6;
    uVar7 = *(undefined8 *)PTR__ISyncDataClass_Contacts_1000200a0;
    IVar8 = NSMutableSet::containsObject_(IVar5,"containsObject:",uVar7);
    if ((char)IVar8 != '\0') {
      NSMutableArray::addObject_(IVar6,"addObject:",uVar7);
      NSMutableSet::removeObject_(IVar5,"removeObject:",uVar7);
    }
    uVar7 = *(undefined8 *)PTR__ISyncDataClass_Calendars_100020098;
    IVar8 = NSMutableSet::containsObject_(IVar5,"containsObject:",uVar7);
    if ((char)IVar8 != '\0') {
      NSMutableArray::addObject_(IVar6,"addObject:",uVar7);
      NSMutableSet::removeObject_(IVar5,"removeObject:",uVar7);
    }
    uVar7 = *(undefined8 *)PTR__ISyncDataClass_Bookmarks_100020090;
    IVar8 = NSMutableSet::containsObject_(IVar5,"containsObject:",uVar7);
    if ((char)IVar8 != '\0') {
      NSMutableArray::addObject_(IVar6,"addObject:",uVar7);
      NSMutableSet::removeObject_(IVar5,"removeObject:",uVar7);
    }
    IVar5 = NSMutableSet::allObjects(IVar5,"allObjects");
    NSMutableArray::addObjectsFromArray_(IVar6,"addObjectsFromArray:",IVar5);
    cVar3 = _DLShouldLog(5);
    if (cVar3 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
              ,"-[ConcreteSyncClient setDataClassNames:]",5,&cf_Syncingorderedlistofdataclasses__,
              *(undefined8 *)(param_1 + _dataClassNames));
      return;
    }
  }
  return;
}

