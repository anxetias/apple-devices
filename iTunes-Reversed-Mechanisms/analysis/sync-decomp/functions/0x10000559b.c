// rea decompile_all
// name: ConcreteSyncClient::_sendChangesToDevice:
// address: 0x10000559b
// body: available
// range: 0x10000559b-0x100005b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void ConcreteSyncClient::_sendChangesToDevice_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  cfstringStruct *pcVar14;
  code *pcVar15;
  long lVar16;
  undefined8 local_80;
  long local_78;
  char *local_70;
  char *local_68;
  ID local_60;
  ID local_58;
  char *local_50;
  long local_48;
  ID local_40;
  char local_31;
  
  local_80 = 0;
  IVar5 = _objc_alloc(&_OBJC_CLASS___NSAutoreleasePool);
  IVar5 = NSAutoreleasePool::init(IVar5,"init");
  if (*(char *)(param_1 + _pulling) == '\0') {
    if (1 < *(int *)(param_1 + _syncType) - 3U) {
      _postNotification_message_(param_1,"_postNotification:message:",0x100020a58,0x1000213b8);
    }
    uVar6 = *(undefined8 *)(param_1 + _session);
    uVar7 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + _dataClassHandler),"entityNamesToSync");
    (*(code *)PTR__objc_msgSend_100020210)
              (uVar6,"prepareToPullChangesInBackgroundForEntityNames:target:selector:",uVar7,param_1
               ,"_changesArePreparedToBePulledForClient:session:");
  }
  else {
    local_31 = '\0';
    uVar6 = (*(code *)PTR__objc_msgSend_100020210)
                      (*(undefined8 *)(param_1 + _dataClassHandler),"entityNamesOfRecordsToMutate");
    lVar16 = _pullingEntityNames;
    if (*(long *)(param_1 + _pullEnumerator) == 0) {
      uVar7 = *(undefined8 *)(param_1 + _entityNameArrayOfEntityNamesToPull);
      *(long *)(param_1 + _entityNameEnumeratorIndex) =
           *(long *)(param_1 + _entityNameEnumeratorIndex) + 1;
      puVar1 = PTR__objc_msgSend_100020210;
      uVar7 = (*(code *)PTR__objc_msgSend_100020210)(uVar7,"objectAtIndex:");
      puVar2 = PTR__objc_retain_100020220;
      uVar7 = (*(code *)PTR__objc_retain_100020220)(uVar7);
      lVar16 = _pullingEntityNames;
      *(undefined8 *)(param_1 + _pullingEntityNames) = uVar7;
      uVar7 = (*(code *)puVar1)(*(undefined8 *)(param_1 + _session),
                                "changeEnumeratorForEntityNames:",uVar7);
      lVar9 = _pullEnumerator;
      uVar7 = (*(code *)puVar2)(uVar7);
      *(undefined8 *)(param_1 + lVar9) = uVar7;
    }
    IVar8 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
    pcVar15 = (code *)PTR__objc_msgSend_100020210;
    local_40 = NSMutableDictionary::init(IVar8,"init");
    local_58 = NSMutableDictionary::dictionaryWithObjectsAndKeys_
                         ((ID)&_OBJC_CLASS___NSMutableDictionary,"dictionaryWithObjectsAndKeys:",
                          *(undefined8 *)(param_1 + lVar16),&cf_SyncDeviceLinkEntityNamesKey,0);
    local_78 = _pendingChanges;
    local_48 = _session;
    local_68 = "clientRefusedChangesForRecordWithIdentifier:";
    uVar7 = *(undefined8 *)PTR__ISyncRecordEntityNameKey_100020150;
    local_50 = "setObject:forKey:";
    local_70 = "clientAcceptedChangesForRecordWithIdentifier:formattedRecord:newRecordIdentifier:";
    local_60 = param_1;
    do {
      lVar9 = (*pcVar15)(*(undefined8 *)(param_1 + _pullEnumerator),"nextObject");
      if (lVar9 == 0) {
        IVar8 = NSNumber::numberWithBool_((ID)&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
        (*pcVar15)(local_58,local_50,IVar8,&cf_SyncDeviceLinkAllRecordsOfPulledEntityTypeSentKey);
        lVar9 = _pullEnumerator;
        puVar1 = PTR__objc_release_100020218;
        (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + _pullEnumerator));
        *(undefined8 *)(param_1 + lVar9) = 0;
        (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar16));
        *(undefined8 *)(param_1 + lVar16) = 0;
        pcVar15 = (code *)PTR__objc_msgSend_100020210;
        *(undefined1 *)(param_1 + local_78) = 0;
        break;
      }
      *(undefined1 *)(param_1 + local_78) = 1;
      lVar10 = (*pcVar15)(lVar9,"record");
      lVar11 = (*pcVar15)(lVar9,"recordIdentifier");
      iVar4 = (*pcVar15)(lVar9,"type");
      pcVar15 = (code *)PTR__objc_msgSend_100020210;
      if (iVar4 == 3) {
        if (lVar11 == 0) {
          cVar3 = _DLShouldLog(4);
          pcVar15 = (code *)PTR__objc_msgSend_100020210;
          if (cVar3 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                    ,"-[ConcreteSyncClient _sendChangesToDevice:]",4,
                    &cf_BogusdeletefromenumeratormissingrecordIdentifier___,lVar9);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_100020210)(local_40,local_50,lVar11,lVar11);
          uVar12 = (*pcVar15)(*(undefined8 *)(param_1 + _dataClassHandler),
                              "noteDeletedRecordFromSyncServices:",lVar11);
          uVar13 = *(undefined8 *)(param_1 + local_48);
LAB_100005a59:
          (*pcVar15)(uVar13,local_70,lVar11,0,uVar12);
        }
      }
      else {
        if (lVar11 == 0 || lVar10 == 0) {
          cVar3 = _DLShouldLog(4);
          if (cVar3 != '\0') {
            pcVar14 = &cf_BoguschangefromenumeratormissingrecordorrecordIdentifier___;
LAB_1000059d0:
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                    ,"-[ConcreteSyncClient _sendChangesToDevice:]",4,pcVar14,lVar9);
          }
        }
        else {
          uVar13 = (*(code *)PTR__objc_msgSend_100020210)(lVar10,"objectForKey:",uVar7);
          (*pcVar15)(*(undefined8 *)(param_1 + _dataClassHandler),
                     "noteTargetPulledRecord:recordIdentifier:entityName:",lVar10,lVar11,uVar13);
          cVar3 = (*pcVar15)(uVar6,"containsObject:",uVar13);
          param_1 = local_60;
          if ((cVar3 == '\0') ||
             (lVar10 = (*pcVar15)(*(undefined8 *)(local_60 + _dataClassHandler),
                                  "mutateRecordFromSyncServicesForTarget:change:recordIdentifier:sendNow:"
                                  ,lVar10,lVar9,lVar11,&local_31), lVar10 != 0)) {
            (*pcVar15)(local_40,local_50,lVar10,lVar11);
            uVar13 = *(undefined8 *)(param_1 + local_48);
            uVar12 = 0;
            goto LAB_100005a59;
          }
          cVar3 = _DLShouldLog(4);
          if (cVar3 != '\0') {
            pcVar14 = &cf_DataHandlercouldn_tmutaterecordinchange_refusing___;
            goto LAB_1000059d0;
          }
        }
        pcVar15 = (code *)PTR__objc_msgSend_100020210;
        (*(code *)PTR__objc_msgSend_100020210)(*(undefined8 *)(param_1 + local_48),local_68,lVar11);
      }
    } while (local_31 == '\0');
    uVar6 = *(undefined8 *)(param_1 + _talker);
    cVar3 = (*pcVar15)(param_1,"_moreChangesComing");
    cVar3 = (*pcVar15)(uVar6,"processChanges:dataClass:moreComing:info:error:",local_40,param_3,
                       (int)cVar3,local_58,&local_80);
    if ((cVar3 != '\x01') && (cVar3 = _DLShouldLog(3), cVar3 != '\0')) {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
              ,"-[ConcreteSyncClient _sendChangesToDevice:]",3,&cf_ErrorcallingprocessChanges___,
              local_80);
    }
    (*(code *)PTR__objc_release_100020218)(local_40);
  }
  NSAutoreleasePool::drain(IVar5,"drain");
  return;
}

