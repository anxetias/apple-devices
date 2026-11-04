// rea decompile_all
// name: _deflateTune
// address: 0x8f477
// body: available
// range: 0x8f477-0x8f4aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _deflateTune(z_streamp strm,int good_length,int max_lazy,int nice_length,int max_chain)

{
  internal_state *piVar1;
  int iVar2;
  
  iVar2 = -2;
  if ((strm != (z_streamp)0x0) && (piVar1 = strm->state, piVar1 != (internal_state *)0x0)) {
    piVar1[0x2f].dummy = good_length;
    piVar1[0x2c].dummy = max_lazy;
    piVar1[0x30].dummy = nice_length;
    piVar1[0x2b].dummy = max_chain;
    iVar2 = 0;
  }
  return iVar2;
}

