// rea decompile_all
// name: _AMSProcessLinkRunChild
// address: 0xc32b7
// body: available
// range: 0xc32b7-0xc338a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc3386 to 0x2aa35c _fprintf (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMSProcessLinkRunChild(undefined4 param_1,undefined4 param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  __childInputFileDescriptor = param_1;
  __childOutputFileDescriptor = param_2;
  _signal(0xd);
  while ((_sRunning != 0 &&
         (lVar2 = __readDictionary(__childInputFileDescriptor,"Child"), lVar2 != 0))) {
    lVar3 = (*param_3)(lVar2,param_4);
    _CFRelease(lVar2);
    if (lVar3 != 0) {
      iVar1 = __writeDictionary(__childOutputFileDescriptor,lVar3,"Child");
      _CFRelease(lVar3);
      if (iVar1 != 0) {
        _fprintf(*(FILE **)PTR____stderrp_004412c0,"%s: Couldn\'t write response, exiting...\n",
                 "Child");
        return;
      }
    }
  }
  return;
}

