// rea decompile_all
// name: ConcreteSyncClient::_determineSyncTypeForEntityNames:deviceType:entityNamesToIgnoreForPullTruth:
// address: 0x10000490d
// body: available
// range: 0x10000490d-0x100004bd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

int ConcreteSyncClient::_determineSyncTypeForEntityNames_deviceType_entityNamesToIgnoreForPullTruth_
              (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  
  lVar5 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"count");
  if (lVar5 == 0 || *(long *)(param_1 + _session) == 0) {
    return 0;
  }
  cVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_4,"isEqualToString:",&cf_SDSyncTypeFast);
  iVar8 = 1;
  bVar1 = true;
  if (cVar3 == '\0') {
    cVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_4,"isEqualToString:",&cf_SDSyncTypeReset);
    iVar8 = 2;
    if (cVar3 != '\0') {
      cVar3 = _DLShouldLog(5);
      if (cVar3 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                ,
                "-[ConcreteSyncClient _determineSyncTypeForEntityNames:deviceType:entityNamesToIgnoreForPullTruth:]"
                ,5,&cf_Sync_Therefreshmaker);
      }
      (*(code *)PTR__objc_msgSend_100020210)
                (*(undefined8 *)(param_1 + _session),"clientDidResetEntityNames:",param_3);
      bVar1 = false;
    }
  }
  puVar2 = PTR__objc_msgSend_100020210;
  if (0 < lVar5) {
    iVar4 = 0;
    lVar9 = 0;
    do {
      uVar6 = (*(code *)puVar2)(param_3,"objectAtIndex:",lVar9);
      cVar3 = (*(code *)puVar2)(param_5,"containsObject:",uVar6);
      if ((cVar3 == '\0') &&
         (cVar3 = (*(code *)puVar2)(*(undefined8 *)(param_1 + _session),
                                    "shouldReplaceAllRecordsOnClientForEntityName:",uVar6),
         cVar3 != '\0')) {
        (*(code *)PTR__objc_msgSend_100020210)
                  (*(undefined8 *)(param_1 + _session),"clientDidResetEntityNames:",param_3);
        return 4;
      }
      cVar3 = (*(code *)puVar2)(*(undefined8 *)(param_1 + _session),
                                "shouldPushChangesForEntityName:",uVar6);
      if (cVar3 == '\0') {
        iVar4 = iVar4 + 1;
      }
      else if (iVar8 == 2) {
        iVar8 = 2;
      }
      else {
        cVar3 = (*(code *)puVar2)(*(undefined8 *)(param_1 + _session),
                                  "shouldPushAllRecordsForEntityName:",uVar6);
        if (cVar3 != '\0') {
          iVar8 = 2;
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
    if (lVar5 == iVar4) {
      return 3;
    }
  }
  if (iVar8 == 2) {
    if ((bVar1) && (cVar3 = _refreshIfSlowSync(param_1,"_refreshIfSlowSync"), cVar3 == '\x01')) {
      cVar3 = _DLShouldLog(5);
      if (cVar3 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                ,
                "-[ConcreteSyncClient _determineSyncTypeForEntityNames:deviceType:entityNamesToIgnoreForPullTruth:]"
                ,5,&cf_Sync_Therefreshmaker);
      }
      uVar6 = *(undefined8 *)(param_1 + _session);
      pcVar7 = "clientDidResetEntityNames:";
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + _session);
      pcVar7 = "clientWantsToPushAllRecordsForEntityNames:";
    }
    (*(code *)PTR__objc_msgSend_100020210)(uVar6,pcVar7,param_3);
    return 2;
  }
  return iVar8;
}

