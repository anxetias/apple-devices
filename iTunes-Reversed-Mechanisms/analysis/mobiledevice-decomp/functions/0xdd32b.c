// rea decompile_all
// name: _fatal_copier_file_error
// address: 0xdd32b
// body: available
// range: 0xdd32b-0xdd376 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xdd372 to 0x2a97b0 _CFRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _fatal_copier_file_error(_BOMCopier*, char const*, int) */

void _fatal_copier_file_error(_BOMCopier *param_1,char *param_2,int param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  
  uVar1 = _CFStringCreateWithCString
                    (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_2,0x8000100);
  pcVar2 = _strerror(param_3);
  _AMRLogWithFilePath(3,uVar1,&cf_Fatalfileerrorcopyingdirectoryroot__s,pcVar2);
  _CFRelease(uVar1);
  return;
}

