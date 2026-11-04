// rea decompile_all
// name: _init_wrapper_aesni
// address: 0x1356e
// body: available
// range: 0x1356e-0x135c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x135b7 to 0xeb10 _aes_encrypt_key_hw (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_init_wrapper_aesni(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((long)param_3 < 0x80) {
    if ((param_3 < 0x21) && ((0x101010000U >> (param_3 & 0x3f) & 1) != 0)) {
LAB_000135ae:
      uVar1 = _aes_encrypt_key_hw(param_4,param_3 & 0xffffffff,param_2);
      return uVar1;
    }
  }
  else if (((param_3 == 0x80) || (param_3 == 0x100)) || (param_3 == 0xc0)) goto LAB_000135ae;
  return 0xfffffff9;
}

