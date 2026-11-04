// rea decompile_all
// name: PersonalizedImage::digestFile:digestLength:error:
// address: 0x123bd9
// body: available
// range: 0x123bd9-0x123c55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x123c04 to 0x60aa00 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x24 bytes */

ID PersonalizedImage::digestFile_digestLength_error_
             (ID param_1,SEL param_2,ID param_3,unsigned_int param_4,ID *param_5)

{
  ID IVar1;
  char *pcVar2;
  
  if (param_4 == 0x30) {
    pcVar2 = "digestFileSha384:error:";
  }
  else {
    if (param_4 != 0x14) {
      if (_md_log_onceToken != -1) {
        _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
      }
      __os_log_internal(0,_md_log_log,0x10,"Unsupported digest length: %d",param_4);
      return 0;
    }
    pcVar2 = "digestFileSha1:error:";
  }
  IVar1 = (*(code *)PTR__objc_msgSend_00441098)(param_1,pcVar2,param_3,param_5);
  return IVar1;
}

