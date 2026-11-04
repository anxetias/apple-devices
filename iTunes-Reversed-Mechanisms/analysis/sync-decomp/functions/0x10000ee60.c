// rea decompile_all
// name: MailAccountsDataClassHandler::_setUniqueIDInMailAccountRecord:forRecordIdentifier:
// address: 0x10000ee60
// body: available
// range: 0x10000ee60-0x10000eecd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000eec8 to 0x10003ab00 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x20 bytes */

void MailAccountsDataClassHandler::_setUniqueIDInMailAccountRecord_forRecordIdentifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_100001993(param_4);
  cVar1 = _DLShouldLog(5);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
            ,"-[MailAccountsDataClassHandler _setUniqueIDInMailAccountRecord:forRecordIdentifier:]",
            5,&cf_Transformed_ornot_uuidis__,uVar2);
  }
  (*(code *)PTR__objc_msgSend_100020210)(param_3,"setObject:forKey:",uVar2,&cf_uniqueId);
  (*(code *)PTR__objc_release_100020218)(uVar2);
  return;
}

