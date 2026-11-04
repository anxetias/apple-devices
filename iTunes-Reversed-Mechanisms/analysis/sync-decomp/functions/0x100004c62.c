// rea decompile_all
// name: ConcreteSyncClient::deviceWillSyncDataClass:lastComputerAnchor:nextDeviceAnchor:syncType:version:info:
// address: 0x100004c62
// body: available
// range: 0x100004c62-0x100005189 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100004fcd to 0x100002f84 ConcreteSyncClient::_cancelAndContinueToNextDataClassWithReason:errorCode: (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10000501a to 0x10000559b ConcreteSyncClient::_sendChangesToDevice: (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100005119 to 0x100002f84 ConcreteSyncClient::_cancelAndContinueToNextDataClassWithReason:errorCode: (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x40 bytes */

void ConcreteSyncClient::
     deviceWillSyncDataClass_lastComputerAnchor_nextDeviceAnchor_syncType_version_info_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               ID param_8)

{
  undefined *puVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  char *pcVar11;
  undefined8 local_40;
  ID local_38;
  
  local_40 = 0;
  local_38 = param_3;
  cVar3 = _DLShouldLog(5);
  if (cVar3 != '\0') {
    uVar5 = _sel_getName(param_2);
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,
            "-[ConcreteSyncClient deviceWillSyncDataClass:lastComputerAnchor:nextDeviceAnchor:syncType:version:info:]"
            ,5,&
               cf__s_dataclass___lastcomputeranchor___lastdeviceanchor___nextdeviceanchor___synctype___deviceversion__
            ,uVar5,local_38,param_4,*(undefined8 *)(param_1 + _lastDeviceAnchor),param_5,param_6,
            param_7);
  }
  if (*(char *)(param_1 + _clear) == '\0') {
    cVar3 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + _dataClassHandler),"canSyncWithVersion:",param_7);
    if (cVar3 == '\0') {
      cVar3 = _DLShouldLog(3);
      if (cVar3 != '\0') {
        uVar5 = (*(code *)PTR__objc_msgSend_100020210)
                          (*(undefined8 *)(param_1 + _dataClassHandler),"getVersion");
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                ,
                "-[ConcreteSyncClient deviceWillSyncDataClass:lastComputerAnchor:nextDeviceAnchor:syncType:version:info:]"
                ,3,&cf_Versionsdonotmatch_Ourversion____deviceversion___,uVar5,param_7);
      }
      _postNotification_message_(param_1,"_postNotification:message:",0x100021118,local_38);
      _cancelAndContinueToNextDataClassWithReason_errorCode_
                (param_1,"_cancelAndContinueToNextDataClassWithReason:errorCode:",0x100021138,
                 0xfffffffd);
      return;
    }
    cVar3 = _DLShouldLog(6);
    if (cVar3 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
              ,
              "-[ConcreteSyncClient deviceWillSyncDataClass:lastComputerAnchor:nextDeviceAnchor:syncType:version:info:]"
              ,6,&cf_Comparingclientinfolastcomputeranchor__tolastcomputeranchorfromdevice__,
              *(undefined8 *)(param_1 + _lastComputerAnchor),param_4);
    }
    lVar2 = _lastComputerAnchor;
    if (((param_4 == 0) || (*(long *)(param_1 + _lastComputerAnchor) == 0)) ||
       (cVar3 = (*(code *)PTR__objc_msgSend_100020210)
                          (param_4,"isEqualToString:",&cf____DATACLASS_CLEARED___), cVar3 != '\0'))
    {
      cVar3 = _DLShouldLog(4);
      pcVar9 = &cf_SDSyncTypeReset;
      if (cVar3 != '\0') {
        pcVar10 = &
                  cf_Forcingrefreshsyncsincedevicereturnednilforlastcomputeranchororsavedlastcomputeranchorisnil
        ;
        uVar5 = 4;
LAB_100004e26:
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                ,
                "-[ConcreteSyncClient deviceWillSyncDataClass:lastComputerAnchor:nextDeviceAnchor:syncType:version:info:]"
                ,uVar5,pcVar10);
      }
    }
    else {
      cVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_6,"isEqualToString:",&cf_SDSyncTypeFast);
      pcVar9 = (cfstringStruct *)param_6;
      if ((cVar3 != '\0') &&
         (cVar3 = (*(code *)PTR__objc_msgSend_100020210)
                            (*(undefined8 *)(param_1 + lVar2),"isEqualToString:",param_4),
         cVar3 != '\x01')) {
        cVar3 = _DLShouldLog(5);
        pcVar9 = &cf_SDSyncTypeSlow;
        if (cVar3 != '\0') {
          pcVar10 = &cf_Computersyncanchormismatchwhendeviceindicatedfastsync_settingtoslow;
          uVar5 = 5;
          goto LAB_100004e26;
        }
      }
    }
    lVar2 = _dataClassHandler;
    puVar1 = PTR__objc_msgSend_100020210;
    uVar5 = *(undefined8 *)(param_1 + _dataClassHandler);
    IVar6 = _clientInfoVersionForDataClass_(param_1,"_clientInfoVersionForDataClass:",local_38);
    IVar6 = (*(code *)puVar1)(uVar5,"syncType:previousVersion:",pcVar9,IVar6);
    uVar5 = (*(code *)PTR__objc_retain_100020220)(param_5);
    *(undefined8 *)(param_1 + _nextDeviceAnchor) = uVar5;
    IVar7 = (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar2),"entityNamesToSync");
    IVar8 = (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar2),"entityNamesToIgnorePullTruth");
    iVar4 = _determineSyncTypeForEntityNames_deviceType_entityNamesToIgnoreForPullTruth_
                      (param_1,
                       "_determineSyncTypeForEntityNames:deviceType:entityNamesToIgnoreForPullTruth:"
                       ,IVar7,IVar6,IVar8);
    lVar2 = _syncType;
    *(int *)(param_1 + _syncType) = iVar4;
    switch(iVar4) {
    case 1:
      cVar3 = _DLShouldLog(5);
      if (cVar3 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                ,
                "-[ConcreteSyncClient deviceWillSyncDataClass:lastComputerAnchor:nextDeviceAnchor:syncType:version:info:]"
                ,5,&cf_Fastenyourseatbeltsforafastsync);
      }
      (*(code *)puVar1)(*(undefined8 *)(param_1 + _dataClassHandler),
                        "clientWillStartPushingRecords:",*(undefined4 *)(param_1 + lVar2));
      uVar5 = *(undefined8 *)(param_1 + _talker);
      pcVar11 = "getChangesForDataClass:error:";
      break;
    case 2:
      cVar3 = _DLShouldLog(5);
      if (cVar3 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                ,
                "-[ConcreteSyncClient deviceWillSyncDataClass:lastComputerAnchor:nextDeviceAnchor:syncType:version:info:]"
                ,5,&cf_Enjoythesceneryasweslowsync);
      }
      (*(code *)puVar1)(*(undefined8 *)(param_1 + _dataClassHandler),
                        "clientWillStartPushingRecords:",*(undefined4 *)(param_1 + lVar2));
      uVar5 = *(undefined8 *)(param_1 + _talker);
      pcVar11 = "getAllRecordsForDataClass:error:";
      break;
    case 3:
      cVar3 = _DLShouldLog(5);
      if (cVar3 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                ,
                "-[ConcreteSyncClient deviceWillSyncDataClass:lastComputerAnchor:nextDeviceAnchor:syncType:version:info:]"
                ,5,&cf_Sitbackandrelaxaswepullonly);
      }
      _sendChangesToDevice_(param_1,"_sendChangesToDevice:",local_38);
      return;
    case 4:
      cVar3 = _DLShouldLog(5);
      if (cVar3 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                ,
                "-[ConcreteSyncClient deviceWillSyncDataClass:lastComputerAnchor:nextDeviceAnchor:syncType:version:info:]"
                ,5,&cf_Duringthissyncwewillpullthewholetruthandnothingbutthetruth);
      }
      goto LAB_100004cfa;
    default:
      _cancelAndContinueToNextDataClassWithReason_errorCode_
                (param_1,"_cancelAndContinueToNextDataClassWithReason:errorCode:",0x100021278,
                 0xfffffffc);
      return;
    }
    cVar3 = (*(code *)puVar1)(uVar5,pcVar11,local_38,&local_40);
    if (cVar3 == '\x01') {
      return;
    }
    cVar3 = _DLShouldLog(3);
    if (cVar3 == '\0') {
      return;
    }
    pcVar9 = &cf_getAllRecordsForDataClassfailed___;
  }
  else {
LAB_100004cfa:
    cVar3 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + _talker),
                       "clearAllRecordsForDataClass:resetAnchor:error:",local_38,0,&local_40);
    if (cVar3 == '\x01') {
      return;
    }
    cVar3 = _DLShouldLog(3);
    if (cVar3 == '\0') {
      return;
    }
    pcVar9 = &cf_clearAllRecordsForDataClassfailed___;
  }
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
          ,
          "-[ConcreteSyncClient deviceWillSyncDataClass:lastComputerAnchor:nextDeviceAnchor:syncType:version:info:]"
          ,3,pcVar9,local_40);
  return;
}

