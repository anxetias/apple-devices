// rea decompile_all
// name: BookmarksDataClassHandler::mutateRecordFromTargetForSyncServices:recordIdentifier:
// address: 0x100006ca8
// body: available
// range: 0x100006ca8-0x100006e13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100006dcb to 0x1000148ab _objc_autorelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

ID BookmarksDataClassHandler::mutateRecordFromTargetForSyncServices_recordIdentifier_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  ID IVar4;
  undefined8 uVar5;
  
  lVar3 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"objectForKey:",&cf_url);
  if (lVar3 == 0) {
    return param_3;
  }
  IVar4 = NSURL::_web_URLWithUserTypedString_
                    ((ID)&_OBJC_CLASS___NSURL,"_web_URLWithUserTypedString:",lVar3);
  if (IVar4 == 0) {
    uVar5 = (*(code *)PTR__objc_msgSend_100020210)
                      (lVar3,"stringByAddingPercentEscapesUsingEncoding:",0x8000100);
    cVar2 = _DLShouldLog(6);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/BookmarksDataClassHandler.m"
              ,
              "-[BookmarksDataClassHandler mutateRecordFromTargetForSyncServices:recordIdentifier:]"
              ,6,&cf_Escapedbadurl____into____,0,uVar5);
    }
    IVar4 = NSURL::_web_URLWithUserTypedString_
                      ((ID)&_OBJC_CLASS___NSURL,"_web_URLWithUserTypedString:",uVar5);
    if (IVar4 == 0) {
      cVar2 = _DLShouldLog(3);
      if (cVar2 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/BookmarksDataClassHandler.m"
                ,
                "-[BookmarksDataClassHandler mutateRecordFromTargetForSyncServices:recordIdentifier:]"
                ,3,&cf_Can_tconvert__toavalidURL_skippingrecordfromdevice,lVar3);
        return 0;
      }
      return 0;
    }
  }
  puVar1 = PTR__objc_msgSend_100020210;
  uVar5 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"mutableCopy");
  (*(code *)puVar1)(uVar5,"setObject:forKey:",IVar4,&cf_url);
  cVar2 = _DLShouldLog(7);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/BookmarksDataClassHandler.m"
            ,"-[BookmarksDataClassHandler mutateRecordFromTargetForSyncServices:recordIdentifier:]",
            7,&cf_Createdrecordforsyncservices___,uVar5);
  }
  IVar4 = _objc_autorelease(uVar5);
  return IVar4;
}

