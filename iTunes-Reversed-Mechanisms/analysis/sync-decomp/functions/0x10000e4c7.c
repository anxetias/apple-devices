// rea decompile_all
// name: MailAccountsDataClassHandler::dealloc
// address: 0x10000e4c7
// body: available
// range: 0x10000e4c7-0x10000e53a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

void MailAccountsDataClassHandler::dealloc(ID param_1,SEL param_2)

{
  char cVar1;
  ID local_20;
  class_t *local_18;
  
  cVar1 = _DLShouldLog(6);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/MailAccountsDataClassHandler.m"
            ,"-[MailAccountsDataClassHandler dealloc]",6,
            &cf_MailAccountsDataClassHandler0x_08xdeleted,param_1);
  }
  (*(code *)PTR__objc_release_100020218)(*(undefined8 *)(param_1 + _mailAccountIdentityStrings));
  local_18 = &objc::class_t::MailAccountsDataClassHandler;
  local_20 = param_1;
  ConcreteDataClassHandler::dealloc((ID)&local_20,"dealloc");
  return;
}

