// rea decompile_all
// name: FUN_100010f13
// address: 0x100010f13
// body: available
// range: 0x100010f13-0x100011041 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100010f5f to 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100010fd7 to 0x100013da8 SyncWireTalker::setDelegate: (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100011034 to 0x100014863 __DLLog (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100010f13(ID param_1,char param_2,char param_3,char param_4)

{
  undefined *puVar1;
  char cVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  
  puVar1 = PTR__objc_msgSend_100020210;
  if (DAT_100028ea0 != 0) {
    (*(code *)PTR__objc_msgSend_100020210)(DAT_100028ea0,"setDataClassNames:",param_1);
    (*(code *)puVar1)(DAT_100028ea0,"setClearDataClasses:",(int)param_4);
    return;
  }
  IVar3 = SyncWireTalker::createStreamSyncWireTalker_
                    ((ID)&objc::class_t::SyncWireTalker,"createStreamSyncWireTalker:",param_2);
  if (IVar3 == 0) {
    cVar2 = _DLShouldLog(3);
    if (cVar2 == '\0') {
      return;
    }
    pcVar4 = &cf_Can_tcreateSyncWireTalker_bailing___;
  }
  else {
    DAT_100028ea0 =
         SyncClient::
         createSyncClientWithSyncWireTalker_dataClassNames_suppressNotifications_clearDataClasses_
                   ((ID)&objc::class_t::SyncClient,
                    "createSyncClientWithSyncWireTalker:dataClassNames:suppressNotifications:clearDataClasses:"
                    ,IVar3,param_1,param_3,param_4);
    (*(code *)PTR__objc_release_100020218)(IVar3);
    if (DAT_100028ea0 != 0) {
      SyncWireTalker::setDelegate_(IVar3,"setDelegate:",DAT_100028ea0);
      return;
    }
    cVar2 = _DLShouldLog(3);
    if (cVar2 == '\0') {
      return;
    }
    pcVar4 = &cf_Can_tcreateclient_bailing___;
  }
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/iPodSync.m"
          ,"SetupClient",3,pcVar4);
  return;
}

