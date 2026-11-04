// rea decompile_all
// name: ConcreteSyncClient::deviceRefusedToSyncDataClass:reason:
// address: 0x10000519c
// body: available
// range: 0x10000519c-0x100005298 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100005293 to 0x1000043d7 ConcreteSyncClient::_syncNextDataClassOrExit (external=false, thunk=false, hasNoReturn=false), 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void ConcreteSyncClient::deviceRefusedToSyncDataClass_reason_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  cVar1 = _DLShouldLog(5);
  if (cVar1 != '\0') {
    uVar2 = _sel_getName(param_2);
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient deviceRefusedToSyncDataClass:reason:]",5,&cf__s_dataclass_____,
            uVar2,param_3,param_4);
  }
  cVar1 = (*(code *)PTR__objc_msgSend_100020210)
                    (param_4,"isEqualToString:",
                     &cf_Yourcomputer_ssoftwareisoutofdate_Pleaseupdateandtryagain);
  if (cVar1 == '\0') {
    cVar1 = (*(code *)PTR__objc_msgSend_100020210)
                      (param_4,"isEqualToString:",
                       &cf_Thisdataclassisdisabledfortetheredsyncingonthedevice_);
    iVar3 = 0xffffffde;
    if (cVar1 == '\0') {
      iVar3 = 0xfffffffb;
    }
  }
  else {
    _postNotification_message_(param_1,"_postNotification:message:",0x1000212d8,param_3);
    iVar3 = 0xfffffffb;
  }
  if (*(char *)(param_1 + _clear) == '\0') {
    _cancelSyncing_errorCode_(param_1,"_cancelSyncing:errorCode:",0x100021318,iVar3);
  }
  _syncNextDataClassOrExit(param_1,"_syncNextDataClassOrExit");
  return;
}

