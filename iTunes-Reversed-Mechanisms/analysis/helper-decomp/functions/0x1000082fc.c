// rea decompile_all
// name: FUN_1000082fc
// address: 0x1000082fc
// body: available
// range: 0x1000082fc-0x10000853b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000082fc(void)

{
  undefined8 uVar1;
  char cVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID self;
  ID self_00;
  ID IVar6;
  ID self_01;
  ID IVar7;
  ID IVar8;
  
  IVar3 = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
  cVar2 = _DLShouldLog(5);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_resetSyncData",5,&cf_Resettingsyncdata___);
  }
  ISyncManager::resetSyncData(IVar3,"resetSyncData");
  IVar3 = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
  IVar4 = NSArray::arrayWithObjects_
                    ((ID)&_OBJC_CLASS___NSArray,"arrayWithObjects:",
                     *(undefined8 *)PTR__ISyncEntity_Calendars_Calendar_100012090,
                     *(undefined8 *)PTR__ISyncEntity_Contacts_Group_1000120d8,
                     &cf_com_apple_mail_Account,0);
  IVar5 = NSSet::setWithArray_((ID)&_OBJC_CLASS___NSSet,"setWithArray:",IVar4);
  self = ISyncManager::allClients(IVar3,"allClients");
  self_00 = NSMutableArray::array((ID)&_OBJC_CLASS___NSMutableArray,"array");
  IVar6 = ISyncManager::count(self,"count");
  if (IVar6 != 0) {
    uVar1 = *(undefined8 *)PTR__ISyncClientTypeApplication_100012050;
    IVar8 = 0;
    do {
      self_01 = ISyncManager::objectAtIndex_(self,"objectAtIndex:",IVar8);
      IVar7 = ISyncManager::clientType(self_01,"clientType");
      IVar7 = ISyncManager::isEqualToString_(IVar7,"isEqualToString:",uVar1);
      if ((char)IVar7 != '\0') {
        IVar7 = ISyncManager::enabledEntityNames(self_01,"enabledEntityNames");
        IVar7 = NSSet::setWithArray_((ID)&_OBJC_CLASS___NSSet,"setWithArray:",IVar7);
        IVar7 = NSSet::intersectsSet_(IVar7,"intersectsSet:",IVar5);
        if ((char)IVar7 != '\0') {
          cVar2 = _DLShouldLog(5);
          if (cVar2 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                    ,"_waitForSyncToResetCollections",5,&cf_Addingclienttorefreshgroup___,self_01);
          }
          NSMutableArray::addObject_(self_00,"addObject:",self_01);
        }
      }
      IVar8 = IVar8 + 1;
    } while (IVar6 != IVar8);
  }
  ISyncManager::setOneShotSyncGroupWithClients_entityNames_
            (IVar3,"setOneShotSyncGroupWithClients:entityNames:",self_00,IVar4);
  return 0;
}

