// rea decompile_all
// name: ContactsDataClassHandler::canSyncWithVersion:
// address: 0x10000bfaf
// body: available
// range: 0x10000bfaf-0x10000c06d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

char ContactsDataClassHandler::canSyncWithVersion_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  int iVar2;
  cfstringStruct *pcVar3;
  
  iVar2 = (*(code *)PTR__objc_msgSend_100020210)(param_3,"intValue");
  if (iVar2 < 0x68) {
    return '\0';
  }
  cVar1 = _DLShouldLog(5);
  if (iVar2 == 0x69) {
    if (cVar1 == '\0') {
      return '\x01';
    }
    pcVar3 = &
             cf_Deviceisversion105orhigher_Allowingsyncandenablingbatching_butnotusingtheimagechangedflag
    ;
  }
  else {
    if (iVar2 == 0x68) {
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
                ,"-[ContactsDataClassHandler canSyncWithVersion:]",5,
                &cf_Deviceisversion104forcontacts_we_llallowit_butturnbatchingoff);
      }
      *(undefined1 *)(param_1 + _batching) = 0;
      return '\x01';
    }
    if (cVar1 == '\0') {
      return '\x01';
    }
    pcVar3 = &cf_Deviceisversion106orhigher_Allowingsyncandenablingbatching;
  }
  __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/DataClassHandlers/ContactsDataClassHandler.m"
          ,"-[ContactsDataClassHandler canSyncWithVersion:]",5,pcVar3);
  return '\x01';
}

