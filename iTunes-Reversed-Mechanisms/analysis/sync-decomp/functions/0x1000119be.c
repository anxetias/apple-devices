// rea decompile_all
// name: FUN_1000119be
// address: 0x1000119be
// body: available
// range: 0x1000119be-0x100011b56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_1000119be(ID param_1,undefined8 param_2,char param_3)

{
  undefined *puVar1;
  char cVar2;
  ID self;
  ID IVar3;
  ID self_00;
  ID self_01;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  char *pcVar7;
  ID IVar8;
  
  puVar1 = PTR__objc_msgSend_100020210;
  self = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
  IVar3 = SyncClient::clientIdForTarget_
                    ((ID)&objc::class_t::SyncClient,"clientIdForTarget:",param_1);
  if ((IVar3 != 0) &&
     (IVar3 = ISyncManager::clientWithIdentifier_(self,"clientWithIdentifier:",IVar3), IVar3 != 0))
  {
    self_00 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
    self_01 = ISyncManager::enabledEntityNames(IVar3,"enabledEntityNames");
    IVar4 = ISyncManager::count(self_01,"count");
    if (0 < (long)IVar4) {
      IVar8 = 0;
      do {
        IVar5 = ISyncManager::objectAtIndex_(self_01,"objectAtIndex:",IVar8);
        IVar6 = ISyncManager::dataClassNameForEntityName_(self,"dataClassNameForEntityName:",IVar5);
        cVar2 = (*(code *)puVar1)(param_2,"containsObject:",IVar6);
        if (cVar2 != '\0') {
          NSMutableArray::addObject_(self_00,"addObject:",IVar5);
        }
        IVar8 = IVar8 + 1;
      } while (IVar4 != IVar8);
    }
    cVar2 = _DLShouldLog(5);
    if (cVar2 != '\0') {
      pcVar7 = "YES";
      if (param_3 == '\0') {
        pcVar7 = "NO";
      }
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/iPodSync.m"
              ,"SetShouldReplaceClientRecordsForClientAndDataClasses",5,
              &cf_shouldReplaceClientRecords__sforEntityNames___,pcVar7,self_00);
    }
    ISyncManager::setShouldReplaceClientRecords_forEntityNames_
              (IVar3,"setShouldReplaceClientRecords:forEntityNames:",(ulong)(uint)(int)param_3,
               self_00);
    return 1;
  }
  return 0;
}

