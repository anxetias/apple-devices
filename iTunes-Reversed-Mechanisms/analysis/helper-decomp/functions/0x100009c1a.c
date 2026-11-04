// rea decompile_all
// name: FUN_100009c1a
// address: 0x100009c1a
// body: available
// range: 0x100009c1a-0x100009ced inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100009ce9 to 0x10000bb8d _fprintf (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100009c1a(undefined4 param_1,undefined4 param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  DAT_10001665c = param_1;
  DAT_100016660 = param_2;
  _signal(0xd);
  while ((DAT_100016658 != 0 && (lVar2 = FUN_1000099c7(DAT_10001665c,"Child"), lVar2 != 0))) {
    lVar3 = (*param_3)(lVar2,param_4);
    _CFRelease(lVar2);
    if (lVar3 != 0) {
      iVar1 = FUN_1000098e2(DAT_100016660,lVar3,"Child");
      _CFRelease(lVar3);
      if (iVar1 != 0) {
        _fprintf(*(FILE **)PTR____stderrp_100012128,"%s: Couldn\'t write response, exiting...\n",
                 "Child");
        return;
      }
    }
  }
  return;
}

