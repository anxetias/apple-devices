// rea decompile_all
// name: ConcreteSyncClient::_saveAnchorForDataClassName:anchor:forKey:
// address: 0x100005299
// body: available
// range: 0x100005299-0x1000053cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000053c8 to 0x10003ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

void ConcreteSyncClient::_saveAnchorForDataClassName_anchor_forKey_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  ID IVar4;
  long lVar5;
  
  lVar5 = _client;
  lVar3 = (*(code *)PTR__objc_msgSend_100020210)
                    (*(undefined8 *)(param_1 + _client),"objectForKey:",param_5);
  cVar2 = _DLShouldLog(6);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient _saveAnchorForDataClassName:anchor:forKey:]",6,
            &cf_Gotcurrentanchorsforanchorkey__toupdateforsave___,param_5,lVar3);
  }
  puVar1 = PTR__objc_msgSend_100020210;
  if (lVar3 == 0) {
    IVar4 = _objc_alloc(&_OBJC_CLASS___NSMutableDictionary);
    IVar4 = NSMutableDictionary::initWithObjectsAndKeys_
                      (IVar4,"initWithObjectsAndKeys:",param_4,param_3,0);
  }
  else {
    IVar4 = (*(code *)PTR__objc_msgSend_100020210)(lVar3,"mutableCopy");
    (*(code *)puVar1)(IVar4,"setObject:forKey:",param_4,param_3);
    lVar5 = _client;
  }
  cVar2 = _DLShouldLog(6);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClient.m"
            ,"-[ConcreteSyncClient _saveAnchorForDataClassName:anchor:forKey:]",6,
            &cf_Settingnewanchorsforkey_____,param_5,IVar4);
  }
  (*(code *)PTR__objc_msgSend_100020210)
            (*(undefined8 *)(param_1 + lVar5),"setObject:forKey:",IVar4,param_5);
  (*(code *)PTR__objc_release_100020218)(IVar4);
  return;
}

