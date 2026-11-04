// rea decompile_all
// name: __AMROpenLogWriteStreamsApplier
// address: 0x168a80
// body: available
// range: 0x168a80-0x168b30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x168b05 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x168b23 to 0x16f561 _AMRSafeLogAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __AMROpenLogWriteStreamsApplier(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  
  lVar2 = _CFDictionaryGetValue(param_2,&cf_LogURL);
  if (lVar2 == 0) {
    pcVar3 = &cf_LoginfoismissingalogURL;
  }
  else {
    lVar2 = _CFWriteStreamCreateWithFile(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar2);
    if (lVar2 != 0) {
      _CFWriteStreamSetProperty
                (lVar2,*(undefined8 *)PTR__kCFStreamPropertyAppendToFile_00441198,
                 *(undefined8 *)PTR__kCFBooleanTrue_00441110);
      cVar1 = _CFWriteStreamOpen(lVar2);
      if (cVar1 == '\0') {
        pcVar3 = &cf_FailedtoopenwritestreamtologURL;
      }
      else {
        _CFDictionarySetValue(param_2,&cf_WriteStream,lVar2);
        pcVar3 = (cfstringStruct *)0x0;
      }
      _AMRSafeLogAndRelease(3,pcVar3);
      _CFRelease(lVar2);
      return;
    }
    pcVar3 = &cf_FailedtocreatewritestreamtologURL;
  }
  _AMRSafeLogAndRelease(3,pcVar3);
  return;
}

