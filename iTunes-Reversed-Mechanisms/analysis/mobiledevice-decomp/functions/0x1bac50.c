// rea decompile_all
// name: _tss_lookup_error
// address: 0x1bac50
// body: available
// range: 0x1bac50-0x1baca0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1bac93 to 0x2a98c4 _CFStringCreateWithCString (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


cfstringStruct * _tss_lookup_error(int param_1)

{
  long *plVar1;
  long *plVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  
  if (DAT_004a1948 == 0) {
    return &cf_Unknown;
  }
  lVar4 = DAT_004a1948;
  if (_tss_err_map != param_1) {
    plVar2 = &DAT_004a1958;
    do {
      lVar4 = *plVar2;
      if (lVar4 == 0) {
        return &cf_Unknown;
      }
      plVar1 = plVar2 + -1;
      plVar2 = plVar2 + 2;
    } while ((int)*plVar1 != param_1);
  }
  pcVar3 = (cfstringStruct *)
           _CFStringCreateWithCString
                     (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar4,0x8000100);
  return pcVar3;
}

