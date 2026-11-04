// rea decompile_all
// name: ConcreteSyncClient::_processChangesFromDevice:dataClass:moreComing:
// address: 0x100005cfd
// body: available
// range: 0x100005cfd-0x100006014 inclusive
// range: 0x10000607e-0x100006090 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x24 bytes */

ID ConcreteSyncClient::_processChangesFromDevice_dataClass_moreComing_
             (ID param_1,SEL param_2,ID param_3,ID param_4,char param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined7 in_register_00000081;
  bool bVar10;
  
  puVar2 = PTR__objc_msgSend_100020210;
  uVar5 = (*(code *)PTR__objc_msgSend_100020210)
                    (*(undefined8 *)(param_1 + _dataClassHandler),"entityNamesOfRecordsToMutate",
                     param_3,param_4,CONCAT71(in_register_00000081,param_5));
  uVar6 = (*(code *)puVar2)(param_3,"keyEnumerator");
  lVar3 = _session;
  uVar1 = *(undefined8 *)PTR__ISyncRecordEntityNameKey_100020150;
  while (lVar7 = (*(code *)puVar2)(uVar6,"nextObject"), lVar7 != 0) {
    lVar8 = (*(code *)puVar2)(param_3,"objectForKey:",lVar7);
    cVar4 = (*(code *)puVar2)(lVar8,"isEqual:",lVar7);
    if (cVar4 == '\0') {
      lVar9 = (*(code *)puVar2)(lVar8,"objectForKey:",uVar1);
      if (lVar9 == 0) {
        cVar4 = _DLShouldLog(4);
        if (cVar4 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                  ,"-[ConcreteSyncClient _processChangesFromDevice:dataClass:moreComing:]",4,
                  &cf_Skippingbogusrecordfromdevice_Thereisnoentitynameintherecord___,lVar8);
        }
      }
      else {
        (*(code *)puVar2)(*(undefined8 *)(param_1 + _dataClassHandler),
                          "noteTargetPushedRecord:recordIdentifier:",lVar8,lVar7);
        cVar4 = (*(code *)puVar2)(uVar5,"containsObject:",lVar9);
        if (((cVar4 != '\0') &&
            (lVar9 = (*(code *)puVar2)(*(undefined8 *)(param_1 + _dataClassHandler),
                                       "mutateRecordFromTargetForSyncServices:recordIdentifier:",
                                       lVar8,lVar7), bVar10 = lVar9 != lVar8, lVar8 = lVar9, bVar10)
            ) && (cVar4 = _DLShouldLog(6), cVar4 != '\0')) {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                  ,"-[ConcreteSyncClient _processChangesFromDevice:dataClass:moreComing:]",6,
                  &cf_Mutatedrecordfromtargetwithidentifier___newrecord___,lVar7,lVar9);
        }
        if (lVar8 == 0) {
          cVar4 = _DLShouldLog(5);
          if (cVar4 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                    ,"-[ConcreteSyncClient _processChangesFromDevice:dataClass:moreComing:]",5,
                    &
                    cf_Skippingrecordfromdevicewithid___mutateRecordFromTargetForSyncServicesreturnednil
                    ,lVar7);
          }
        }
        else {
          (*(code *)puVar2)(*(undefined8 *)(param_1 + lVar3),"pushChangesFromRecord:withIdentifier:"
                            ,lVar8,lVar7);
        }
      }
    }
    else {
      cVar4 = (*(code *)puVar2)(*(undefined8 *)(param_1 + _dataClassHandler),
                                "noteTargetDeletedRecordWithIdentifier:",lVar7);
      if (cVar4 == '\0') {
        cVar4 = _DLShouldLog(5);
        if (cVar4 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
                  ,"-[ConcreteSyncClient _processChangesFromDevice:dataClass:moreComing:]",5,
                  &cf_DataSourcesaysnottodeleterecordfromtargetwithidentifier__,lVar7);
        }
      }
      else {
        (*(code *)puVar2)(*(undefined8 *)(param_1 + lVar3),"deleteRecordWithIdentifier:",lVar7);
      }
    }
  }
  return 0;
}

