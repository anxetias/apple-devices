// rea decompile_all
// name: ConcreteSyncClient::processChangesFromDevice:dataClass:moreComing:info:
// address: 0x1000060a1
// body: available
// range: 0x1000060a1-0x100006243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000061da to 0x1000148ab _objc_autorelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x2c bytes */

void ConcreteSyncClient::processChangesFromDevice_dataClass_moreComing_info_
               (ID param_1,SEL param_2,ID param_3,ID param_4,char param_5,ID param_6)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  undefined8 local_38;
  
  local_38 = 0;
  cVar2 = _DLShouldLog(6);
  if (cVar2 != '\0') {
    uVar3 = _sel_getName(param_2);
    pcVar6 = &cf_YES;
    if (param_5 == '\0') {
      pcVar6 = &cf_NO;
    }
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient processChangesFromDevice:dataClass:moreComing:info:]",6,
            &cf__s_dataclass___morecoming____changes__info___,uVar3,param_4,pcVar6,param_3,param_6);
  }
  IVar4 = _processChangesFromDevice_dataClass_moreComing_
                    (param_1,"_processChangesFromDevice:dataClass:moreComing:",param_3,param_4,
                     param_5);
  if (IVar4 != 0) {
    cVar2 = _DLShouldLog(3);
    puVar1 = PTR__objc_msgSend_100020210;
    if (cVar2 != '\0') {
      uVar3 = (*(code *)PTR__objc_msgSend_100020210)(IVar4,"name");
      uVar5 = (*(code *)puVar1)(IVar4,"reason");
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
              ,"-[ConcreteSyncClient processChangesFromDevice:dataClass:moreComing:info:]",3,
              &cf_Cancelingsession_exception__pushingchanges___,uVar3,uVar5);
    }
    _cancelAndContinueToNextDataClassWithReason_errorCode_
              (param_1,"_cancelAndContinueToNextDataClassWithReason:errorCode:",0x100021638,
               0xfffffff9);
    _objc_autorelease(IVar4);
    return;
  }
  cVar2 = (*(code *)PTR__objc_msgSend_100020210)
                    (*(undefined8 *)(param_1 + _talker),"acknowledgeChangesForDataClass:error:",
                     param_4,&local_38);
  if (cVar2 != '\x01') {
    cVar2 = _DLShouldLog(3);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
              ,"-[ConcreteSyncClient processChangesFromDevice:dataClass:moreComing:info:]",3,
              &cf_acknowledgeChangesForDataClassfailed___,local_38);
    }
  }
  return;
}

