// rea decompile_all
// name: _ccec_get_cp
// address: 0x117ad
// body: available
// range: 0x117ad-0x11808 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x117d6 to 0x107f0 _ccec_cp_521 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x117ee to 0x10014 _ccec_cp_224 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x117f4 to 0x102ba _ccec_cp_256 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x117fa to 0x10526 _ccec_cp_384 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x11800 to 0xfd5e _ccec_cp_192 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ccec_get_cp(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x100) {
    if (param_1 == 0xc0) {
      uVar1 = _ccec_cp_192();
      return uVar1;
    }
    if (param_1 == 0xe0) {
      uVar1 = _ccec_cp_224();
      return uVar1;
    }
  }
  else {
    if (param_1 == 0x100) {
      uVar1 = _ccec_cp_256();
      return uVar1;
    }
    if (param_1 == 0x180) {
      uVar1 = _ccec_cp_384();
      return uVar1;
    }
    if (param_1 == 0x209) {
      uVar1 = _ccec_cp_521();
      return uVar1;
    }
  }
  return 0;
}

