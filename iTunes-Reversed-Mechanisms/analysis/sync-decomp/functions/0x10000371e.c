// rea decompile_all
// name: ConcreteSyncClient::_clearNextDataClassOrExit
// address: 0x10000371e
// body: available
// range: 0x10000371e-0x100003a45 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void ConcreteSyncClient::_clearNextDataClassOrExit(ID param_1,SEL param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  long local_68;
  long local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  long local_40;
  long local_38;
  
  *(undefined1 *)(param_1 + _syncClientStateWaitingForSession) = 0;
  if (*(long *)(param_1 + _syncSessionUUID) != 0) {
    cVar5 = _DLShouldLog(5);
    if (cVar5 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
              ,"-[ConcreteSyncClient _clearNextDataClassOrExit]",5,&cf_Finishedsyncsession__,
              *(undefined8 *)(param_1 + _syncSessionUUID));
    }
    lVar3 = _syncSessionUUID;
    (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + _syncSessionUUID));
    *(undefined8 *)(param_1 + lVar3) = 0;
  }
  lVar3 = _dataClassIndex;
  uVar1 = *(ulong *)(param_1 + _dataClassIndex);
  uVar6 = (*(code *)PTR__objc_msgSend_100020210)(*(undefined8 *)(param_1 + _dataClassNames),"count")
  ;
  puVar2 = PTR__objc_msgSend_100020210;
  if (uVar1 < uVar6) {
    local_38 = _running;
    local_70 = "objectAtIndex:";
    local_68 = _supportedDataClassNamesForDevice;
    local_48 = "containsObject:";
    local_40 = _targetIdentifier;
    local_60 = _talker;
    local_58 = "numberWithInt:";
    local_50 = "syncDataClass:lastDeviceAnchor:nextComputerAnchor:version:info:error:";
    do {
      *(undefined1 *)(param_1 + _pulling) = 0;
      *(undefined1 *)(param_1 + _syncClientStateWaitingForSession) = 0;
      lVar4 = _entityNameArrayOfEntityNamesToPull;
      (*(code *)PTR__objc_release_100020218)
                (*(undefined8 *)(param_1 + _entityNameArrayOfEntityNamesToPull));
      *(undefined8 *)(param_1 + lVar4) = 0;
      if (*(char *)(param_1 + local_38) == '\0') {
        cVar5 = _DLShouldLog(5);
        if (cVar5 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                  ,"-[ConcreteSyncClient _clearNextDataClassOrExit]",5,&cf_Nolongerrunning_exiting);
        }
        break;
      }
      uVar7 = *(undefined8 *)(param_1 + _dataClassNames);
      *(long *)(param_1 + lVar3) = *(long *)(param_1 + lVar3) + 1;
      uVar7 = (*(code *)puVar2)(uVar7,local_70);
      if ((*(long *)(param_1 + local_68) == 0) ||
         (cVar5 = (*(code *)puVar2)(*(long *)(param_1 + local_68),local_48,uVar7), cVar5 != '\0')) {
        local_78 = uVar7;
        uVar7 = FUN_100006a69();
        *(undefined8 *)(param_1 + _syncSessionUUID) = uVar7;
        uVar7 = *(undefined8 *)(param_1 + local_60);
        uVar8 = (*(code *)puVar2)(&_OBJC_CLASS___NSNumber,local_58,0xffffffff);
        cVar5 = (*(code *)puVar2)(uVar7,local_50,local_78,0,&cf____DATACLASS_CLEARED___,uVar8,0,
                                  &local_80);
        if (cVar5 == '\x01') {
          return;
        }
        cVar5 = _DLShouldLog(3);
        if (cVar5 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                  ,"-[ConcreteSyncClient _clearNextDataClassOrExit]",3,&cf_syncDataClassfailed___,
                  local_80);
        }
        *(undefined1 *)(param_1 + local_38) = 0;
      }
      else {
        cVar5 = _DLShouldLog(4);
        if (cVar5 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                  ,"-[ConcreteSyncClient _clearNextDataClassOrExit]",4,
                  &cf_Device__doesn_tsupportdataclass___skipping,*(undefined8 *)(param_1 + local_40)
                  ,uVar7);
        }
      }
      uVar1 = *(ulong *)(param_1 + lVar3);
      uVar6 = (*(code *)puVar2)(*(undefined8 *)(param_1 + _dataClassNames),"count");
    } while (uVar1 < uVar6);
  }
  puVar2 = PTR__objc_msgSend_100020210;
  _disconnect_(param_1,"_disconnect:",0x100020cd8);
  uVar7 = (*(code *)puVar2)(0x3ff0000000000000,&_OBJC_CLASS___NSDate,"dateWithTimeIntervalSinceNow:"
                           );
  NSThread::sleepUntilDate_((ID)&_OBJC_CLASS___NSThread,"sleepUntilDate:",uVar7);
  return;
}

