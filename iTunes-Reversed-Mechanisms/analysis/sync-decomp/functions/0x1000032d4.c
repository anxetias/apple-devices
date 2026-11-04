// rea decompile_all
// name: ConcreteSyncClient::_syncClient:canBeginSession:
// address: 0x1000032d4
// body: available
// range: 0x1000032d4-0x100003575 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100003465 to 0x1000043d7 ConcreteSyncClient::_syncNextDataClassOrExit (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void ConcreteSyncClient::_syncClient_canBeginSession_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  ID IVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_40;
  ID local_38;
  
  local_40 = 0;
  *(undefined1 *)(param_1 + _syncClientStateWaitingForSession) = 0;
  if (param_4 != 0) {
    uVar6 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"displayName");
    _postNotification_message_(param_1,"_postNotification:message:",0x100020a58,0x100020b38);
    cVar5 = _DLShouldLog(5);
    if (cVar5 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
              ,"-[ConcreteSyncClient _syncClient:canBeginSession:]",5,
              &cf_SyncSessionhasbegun_Currentdisplaynamefor__is___,
              *(undefined8 *)(param_1 + _targetIdentifier),uVar6);
    }
    lVar4 = _displayName;
    if (*(long *)(param_1 + _displayName) != 0) {
      cVar5 = (*(code *)PTR__objc_msgSend_100020210)(uVar6,"isEqualToString:");
      if (cVar5 == '\0') {
        cVar5 = _DLShouldLog(5);
        if (cVar5 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                  ,"-[ConcreteSyncClient _syncClient:canBeginSession:]",5,
                  &cf_SettingDisplayNamefor__to___,*(undefined8 *)(param_1 + _targetIdentifier),
                  *(undefined8 *)(param_1 + lVar4));
        }
        (*(code *)PTR__objc_msgSend_100020210)
                  (param_3,"setDisplayName:",*(undefined8 *)(param_1 + lVar4));
      }
    }
    uVar6 = (*(code *)PTR__objc_retain_100020220)(param_4);
    *(undefined8 *)(param_1 + _session) = uVar6;
    _setupFiltersAndSessionForDataClassHandler(param_1,"_setupFiltersAndSessionForDataClassHandler")
    ;
    IVar7 = _hostOSString(param_1,"_hostOSString");
    if (IVar7 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = NSDictionary::dictionaryWithObject_forKey_
                           ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObject:forKey:",IVar7,
                            &cf_HostVersion);
    }
    puVar3 = PTR__objc_msgSend_100020210;
    uVar6 = *(undefined8 *)(param_1 + _talker);
    uVar8 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + _dataClassHandler),"dataClassName");
    uVar1 = *(undefined8 *)(param_1 + _lastDeviceAnchor);
    uVar2 = *(undefined8 *)(param_1 + _nextComputerAnchor);
    uVar9 = (*(code *)puVar3)(*(undefined8 *)(param_1 + _dataClassHandler),"getVersion");
    cVar5 = (*(code *)puVar3)(uVar6,
                              "syncDataClass:lastDeviceAnchor:nextComputerAnchor:version:info:error:"
                              ,uVar8,uVar1,uVar2,uVar9,local_38,&local_40);
    if (cVar5 == '\x01') {
      if (1 < *(int *)(param_1 + _syncType) - 3U) {
        _postNotification_message_(param_1,"_postNotification:message:",0x100020a58,0x100020bd8);
      }
    }
    else {
      cVar5 = _DLShouldLog(3);
      if (cVar5 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                ,"-[ConcreteSyncClient _syncClient:canBeginSession:]",3,&cf_syncDataClassfailed___,
                local_40);
      }
      *(undefined1 *)(param_1 + _running) = 0;
    }
    return;
  }
  _syncNextDataClassOrExit(param_1,"_syncNextDataClassOrExit");
  return;
}

