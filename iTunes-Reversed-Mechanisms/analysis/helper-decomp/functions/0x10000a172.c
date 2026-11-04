// rea decompile_all
// name: FUN_10000a172
// address: 0x10000a172
// body: available
// range: 0x10000a172-0x10000a1df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000a172(uint param_1)

{
  uint local_1c;
  
  local_1c = 0;
  if (0 < (int)param_1) {
    _waitpid(param_1,(int *)&local_1c,0);
    if ((local_1c & 0x7f) == 0) {
      if ((local_1c >> 8 & 0xff) == 0) {
        _fprintf(*(FILE **)PTR____stderrp_100012128,"Child with pid %d exited normally\n",
                 (ulong)param_1);
      }
      else {
        _fprintf(*(FILE **)PTR____stderrp_100012128,
                 "Exec of child with pid %d failed with error %d\n",(ulong)param_1);
      }
    }
  }
  return;
}

