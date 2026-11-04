// rea decompile_all
// name: _ccec_cp_256
// address: 0x102ba
// body: available
// range: 0x102ba-0x102e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x102dd to 0x1f905 _ccec_cp_256_asm (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * _ccec_cp_256(void)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  
  iVar1 = __get_cpu_capabilities();
  if (iVar1 < 0) {
    uVar2 = __get_cpu_capabilities();
    if ((uVar2 >> 0x22 & 1) != 0) {
      puVar3 = (undefined *)_ccec_cp_256_asm();
      return puVar3;
    }
  }
  return &_ccec_cp256_c;
}

