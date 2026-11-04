// rea decompile_all
// name: FUN_10000a353
// address: 0x10000a353
// body: available
// range: 0x10000a353-0x10000a3e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10000a353(long param_1)

{
  long lVar1;
  
  if (param_1 == 0) {
    _fwrite("AMSProcessLinkReadMessageFromChild called without valid ProcessLink object\n",0x4b,1,
            *(FILE **)PTR____stderrp_100012128);
  }
  else {
    if (*(int *)(param_1 + 8) == -1) {
      _fprintf(*(FILE **)PTR____stderrp_100012128,"%s: Can\'t read message, child isn\'t running\n",
               "Parent");
      return 0;
    }
    lVar1 = FUN_1000099c7(*(int *)(param_1 + 8),"Parent");
    if (lVar1 != 0) {
      return lVar1;
    }
    FUN_10000a1e0(param_1);
    FUN_10000a172(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return 0;
}

