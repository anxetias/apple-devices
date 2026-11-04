// rea decompile_all
// name: ConcreteSyncClient::_reallySyncNextDataClassOrExit
// address: 0x100003a46
// body: available
// range: 0x100003a46-0x10000425d inclusive
// range: 0x1000042f8-0x1000043c6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100003a85 to 0x10000371e ConcreteSyncClient::_clearNextDataClassOrExit (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void ConcreteSyncClient::_reallySyncNextDataClassOrExit(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  char cVar4;
  ID IVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 local_f0;
  long local_e8;
  char *local_e0;
  long local_d8;
  char *local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  char *local_b0;
  long local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  long local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  undefined8 local_60;
  char *local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  if (*(char *)(param_1 + _clear) != '\0') {
    _clearNextDataClassOrExit(param_1,"_clearNextDataClassOrExit");
    return;
  }
  if (*(long *)(param_1 + _session) != 0) {
    _finishSyncing(param_1,"_finishSyncing");
  }
  lVar10 = _dataClassHandler;
  if (*(long *)(param_1 + _dataClassHandler) != 0) {
    DataClassFilter::setDataClassHandler_
              ((ID)&objc::class_t::DataClassFilter,"setDataClassHandler:",0);
    (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + lVar10));
    *(undefined8 *)(param_1 + lVar10) = 0;
  }
  if (*(long *)(param_1 + _syncSessionUUID) != 0) {
    cVar4 = _DLShouldLog(5);
    if (cVar4 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
              ,"-[ConcreteSyncClient _reallySyncNextDataClassOrExit]",5,&cf_Finishedsyncsession__,
              *(undefined8 *)(param_1 + _syncSessionUUID));
    }
    lVar8 = _syncSessionUUID;
    (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + _syncSessionUUID));
    *(undefined8 *)(param_1 + lVar8) = 0;
  }
  DataClassFilter::setDataClassHandler_
            ((ID)&objc::class_t::DataClassFilter,"setDataClassHandler:",0);
  lVar8 = _targetIdentifier;
  if (*(long *)(param_1 + _client) != 0) goto LAB_100003cf6;
  IVar5 = *(ID *)(param_1 + _targetIdentifier);
  if (IVar5 == 0) {
    local_60 = 0;
    cVar4 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + _talker),"peerInfo:error:",&local_60,&local_f0);
    if (cVar4 == '\0') {
      cVar4 = _DLShouldLog(3);
      if (cVar4 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                ,"-[ConcreteSyncClient _reallySyncNextDataClassOrExit]",3,
                &cf_Failedtogetpeeridentifierfromconnection_Error___,local_f0);
      }
      *(undefined1 *)(param_1 + _failed) = 1;
    }
    else {
      IVar5 = (*(code *)PTR__objc_msgSend_100020210)
                        (local_60,"objectForKey:",&cf_SDDeviceInfoPeerIdentifier);
      if (IVar5 != 0) goto LAB_100003c51;
    }
    cVar4 = _DLShouldLog(3);
    if (cVar4 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
              ,"-[ConcreteSyncClient _reallySyncNextDataClassOrExit]",3,
              &
              cf_Nopeeridentifieravailablefromconnection_andtargetidentifiernotpreviouslyset_Connectionpeerinfo___
              ,local_60);
    }
    *(undefined1 *)(param_1 + _failed) = 1;
    IVar5 = 0;
  }
LAB_100003c51:
  lVar2 = _failed;
  cVar4 = *(char *)(param_1 + _failed);
  if (cVar4 == '\0') {
    _setupClientForTargetIdentifier_(param_1,"_setupClientForTargetIdentifier:",IVar5);
    cVar4 = *(char *)(param_1 + lVar2);
  }
  if (cVar4 == '\x01') {
    if (*(ID *)(param_1 + lVar8) == 0) {
      _postNotification_message_errorCode_
                (param_1,"_postNotification:message:errorCode:",0x100020a58,0x100020a78,0xfffffffe);
    }
    else {
      SyncClient::postNotificationForTargetId_dataClassName_notificationName_message_errorCode_
                ((ID)&objc::class_t::SyncClient,
                 "postNotificationForTargetId:dataClassName:notificationName:message:errorCode:",
                 *(ID *)(param_1 + lVar8),0x100020398,0x100020a58,0x100020a78,0xfffffffe);
    }
    lVar8 = _dataClassNames;
    (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + _dataClassNames));
    *(undefined8 *)(param_1 + lVar8) = 0;
  }
LAB_100003cf6:
  uVar6 = (*(code *)PTR__objc_msgSend_100020210)(*(undefined8 *)(param_1 + _dataClassNames),"count")
  ;
  if (*(ulong *)(param_1 + _dataClassIndex) < uVar6) {
    local_e8 = _running;
    local_e0 = "objectAtIndex:";
    local_d8 = _supportedDataClassNamesForDevice;
    local_c8 = "containsObject:";
    local_80 = _targetIdentifier;
    local_d0 = "createHandlerForDataClassName:client:";
    local_b8 = "_postNotification:message:";
    local_b0 = "entityNamesToSync";
    local_a8 = _nextDeviceAnchor;
    local_50 = _nextComputerAnchor;
    local_38 = _lastDeviceAnchor;
    local_40 = _lastComputerAnchor;
    local_a0 = "date";
    local_98 = "description";
    local_58 = "objectForKey:";
    local_90 = "_syncClient:canBeginSession:";
    local_88 = "beginSessionInBackgroundWithClient:entityNames:target:selector:";
    local_70 = "name";
    local_68 = "reason";
    local_78 = "_cancelSyncing:errorCode:";
    do {
      *(undefined1 *)(param_1 + _pulling) = 0;
      *(undefined1 *)(param_1 + _syncClientStateWaitingForSession) = 0;
      lVar8 = _entityNameArrayOfEntityNamesToPull;
      (*(code *)PTR__objc_release_100020218)
                (*(undefined8 *)(param_1 + _entityNameArrayOfEntityNamesToPull));
      *(undefined8 *)(param_1 + lVar8) = 0;
      if (*(char *)(param_1 + local_e8) == '\0') {
        cVar4 = _DLShouldLog(5);
        if (cVar4 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                  ,"-[ConcreteSyncClient _reallySyncNextDataClassOrExit]",5,
                  &cf_Nolongerrunning_exiting);
        }
        break;
      }
      uVar7 = *(undefined8 *)(param_1 + _dataClassNames);
      *(long *)(param_1 + _dataClassIndex) = *(long *)(param_1 + _dataClassIndex) + 1;
      pcVar12 = (code *)PTR__objc_msgSend_100020210;
      uVar7 = (*(code *)PTR__objc_msgSend_100020210)(uVar7,local_e0);
      if ((*(long *)(param_1 + local_d8) == 0) ||
         (cVar4 = (*pcVar12)(*(long *)(param_1 + local_d8),local_c8,uVar7), cVar4 != '\0')) {
        lVar8 = (*pcVar12)(&objc::class_t::DataClassHandler,local_d0,uVar7,
                           *(undefined8 *)(param_1 + _client));
        *(long *)(param_1 + lVar10) = lVar8;
        if (lVar8 == 0) {
          cVar4 = _DLShouldLog(3);
          if (cVar4 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                    ,"-[ConcreteSyncClient _reallySyncNextDataClassOrExit]",3,
                    &cf_Nodataclasshandlerfordataclass___skipping,uVar7);
          }
        }
        else {
          uVar9 = FUN_100006a69();
          *(undefined8 *)(param_1 + _syncSessionUUID) = uVar9;
          (*pcVar12)(param_1,local_b8,&cf_com_apple_MobileDeviceSync_progress,&cf_PendingSync);
          cVar4 = _DLShouldLog(5);
          if (cVar4 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                    ,"-[ConcreteSyncClient _reallySyncNextDataClassOrExit]",5,
                    &cf_Attemptingtostartsyncsession__fordataclass__,
                    *(undefined8 *)(param_1 + _syncSessionUUID),uVar7);
          }
          local_48 = uVar7;
          local_c0 = (*pcVar12)(*(undefined8 *)(param_1 + lVar10),local_b0);
          lVar10 = local_a8;
          puVar1 = PTR__objc_release_100020218;
          (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + local_a8));
          lVar8 = local_50;
          *(undefined8 *)(param_1 + lVar10) = 0;
          (*(code *)puVar1)(*(undefined8 *)(param_1 + local_50));
          lVar2 = local_38;
          *(undefined8 *)(param_1 + lVar8) = 0;
          (*(code *)puVar1)(*(undefined8 *)(param_1 + local_38));
          lVar10 = local_40;
          *(undefined8 *)(param_1 + lVar2) = 0;
          (*(code *)puVar1)(*(undefined8 *)(param_1 + local_40));
          *(undefined8 *)(param_1 + lVar10) = 0;
          pcVar12 = (code *)PTR__objc_msgSend_100020210;
          uVar7 = (*(code *)PTR__objc_msgSend_100020210)(&_OBJC_CLASS___NSCalendarDate,local_a0);
          uVar7 = (*pcVar12)(uVar7,local_98);
          puVar1 = PTR__objc_retain_100020220;
          uVar7 = (*(code *)PTR__objc_retain_100020220)(uVar7);
          *(undefined8 *)(param_1 + lVar8) = uVar7;
          cVar4 = _DLShouldLog(6);
          if (cVar4 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                    ,"-[ConcreteSyncClient _reallySyncNextDataClassOrExit]",6,
                    &cf_Creatednewcomputeranchortosaveaftersync___,
                    *(undefined8 *)(param_1 + local_50));
          }
          pcVar3 = local_58;
          uVar7 = (*pcVar12)(*(undefined8 *)(param_1 + _client),local_58,
                             &cf_iPodSyncClientDeviceAnchorKey);
          uVar9 = (*pcVar12)(uVar7,pcVar3,local_48);
          lVar10 = (*(code *)puVar1)(uVar9);
          *(long *)(param_1 + local_38) = lVar10;
          if (lVar10 == 0) {
            uVar9 = (*(code *)puVar1)(&cf____);
            *(undefined8 *)(param_1 + local_38) = uVar9;
          }
          cVar4 = _DLShouldLog(6);
          if (cVar4 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                    ,"-[ConcreteSyncClient _reallySyncNextDataClassOrExit]",6,
                    &cf_Gotlastdeviceanchorfordataclass______allanchors___,local_48,
                    *(undefined8 *)(param_1 + local_38),uVar7);
          }
          pcVar3 = local_58;
          uVar9 = (*pcVar12)(*(undefined8 *)(param_1 + _client),local_58,
                             &cf_iPodSyncClientComputerAnchorKey);
          uVar7 = local_48;
          uVar11 = (*pcVar12)(uVar9,pcVar3,local_48);
          uVar11 = (*(code *)puVar1)(uVar11);
          *(undefined8 *)(param_1 + local_40) = uVar11;
          cVar4 = _DLShouldLog(6);
          if (cVar4 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                    ,"-[ConcreteSyncClient _reallySyncNextDataClassOrExit]",6,
                    &cf_Gotlastcomputeranchorfordataclass______allanchors___,uVar7,
                    *(undefined8 *)(param_1 + local_40),uVar9);
          }
          uVar9 = local_c0;
          lVar10 = _dataClassHandler;
          lVar8 = (*pcVar12)(local_c0,"count");
          if (lVar8 != 0) {
            (*pcVar12)(&_OBJC_CLASS___ISyncSession,local_88,*(undefined8 *)(param_1 + _client),uVar9
                       ,param_1,local_90);
            *(undefined1 *)(param_1 + _syncClientStateWaitingForSession) = 1;
            break;
          }
          cVar4 = _DLShouldLog(4);
          if (cVar4 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                    ,"-[ConcreteSyncClient _reallySyncNextDataClassOrExit]",4,
                    &cf_Noentitynamestosyncfordataclass___skippingcreationofsyncsession,uVar7);
          }
          if (*(char *)(param_1 + _syncClientStateWaitingForSession) != '\0') break;
        }
      }
      else {
        cVar4 = _DLShouldLog(4);
        if (cVar4 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                  ,"-[ConcreteSyncClient _reallySyncNextDataClassOrExit]",4,
                  &cf_Device__doesn_tsupportdataclass___skipping,*(undefined8 *)(param_1 + local_80)
                  ,uVar7);
        }
      }
      uVar6 = (*pcVar12)(*(undefined8 *)(param_1 + _dataClassNames),"count");
    } while (*(ulong *)(param_1 + _dataClassIndex) < uVar6);
  }
  if (*(char *)(param_1 + _syncClientStateWaitingForSession) == '\0') {
    _disconnect_(param_1,"_disconnect:",0x100020cd8);
    if (*(char *)(param_1 + _waiting) == '\0') {
      uVar7 = (*(code *)PTR__objc_msgSend_100020210)
                        (0x3ff0000000000000,&_OBJC_CLASS___NSDate,"dateWithTimeIntervalSinceNow:");
      NSThread::sleepUntilDate_((ID)&_OBJC_CLASS___NSThread,"sleepUntilDate:",uVar7);
    }
    else {
      _waitForConnection(param_1,"_waitForConnection");
    }
  }
  return;
}

