// rea decompile_all
// name: FUN_100011b57
// address: 0x100011b57
// body: available
// range: 0x100011b57-0x100011c5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100011c47 to 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100011b57(undefined8 param_1,undefined8 param_2,char param_3,char param_4)

{
  char cVar1;
  ID IVar2;
  
  IVar2 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",0x1a0a);
  IVar2 = NSMutableDictionary::dictionaryWithObjectsAndKeys_
                    ((ID)&_OBJC_CLASS___NSMutableDictionary,"dictionaryWithObjectsAndKeys:",
                     &cf_DLInfoStreamTypeTCP,&cf_DLInfoStreamTypeKey,param_1,&cf_DLInfoHostnameKey,
                     IVar2,&cf_DLInfoPortKey,0);
  cVar1 = _DLShouldLog(5);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/iPodSync.m"
            ,"StartListeningForSync",5,&cf_Listeningforsyncconnectionswithinfo__,IVar2);
  }
  FUN_100010f13(param_2,DAT_100028e98 ^ 1,(int)param_3,(int)param_4);
  if (DAT_100028ea0 != 0) {
    (*(code *)PTR__objc_msgSend_100020210)
              (DAT_100028ea0,"waitForConnectionsFromClientWithTargetIdentifier:info:",param_1,IVar2)
    ;
    return;
  }
  return;
}

