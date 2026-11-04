// rea decompile_all
// name: FUN_100011c75
// address: 0x100011c75
// body: available
// range: 0x100011c75-0x100011d43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100011d42 to 0x10003aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false), 0x1000102f1 DataClassHandler::registerDataClassHandlerClass:forDataClassName: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100011c75(void)

{
  undefined *puVar1;
  CLASS CVar2;
  
  puVar1 = PTR__objc_msgSend_100020210;
  CVar2 = (*(code *)PTR__objc_msgSend_100020210)(&objc::class_t::BookmarksDataClassHandler,"class");
  DataClassHandler::registerDataClassHandlerClass_forDataClassName_
            ((ID)&objc::class_t::DataClassHandler,"registerDataClassHandlerClass:forDataClassName:",
             CVar2,*(ID *)PTR__ISyncDataClass_Bookmarks_100020090);
  CVar2 = (*(code *)puVar1)(&objc::class_t::CalendarsDataClassHandler,"class");
  DataClassHandler::registerDataClassHandlerClass_forDataClassName_
            ((ID)&objc::class_t::DataClassHandler,"registerDataClassHandlerClass:forDataClassName:",
             CVar2,*(ID *)PTR__ISyncDataClass_Calendars_100020098);
  CVar2 = (*(code *)puVar1)(&objc::class_t::ContactsDataClassHandler,"class");
  DataClassHandler::registerDataClassHandlerClass_forDataClassName_
            ((ID)&objc::class_t::DataClassHandler,"registerDataClassHandlerClass:forDataClassName:",
             CVar2,*(ID *)PTR__ISyncDataClass_Contacts_1000200a0);
  CVar2 = (*(code *)puVar1)(&objc::class_t::MailAccountsDataClassHandler,"class");
  DataClassHandler::registerDataClassHandlerClass_forDataClassName_
            ((ID)&objc::class_t::DataClassHandler,"registerDataClassHandlerClass:forDataClassName:",
             CVar2,0x100020658);
  return;
}

