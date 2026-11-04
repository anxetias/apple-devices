// rea decompile_all
// name: _smb_encode_scratch_size
// address: 0x1eb08c
// body: available
// range: 0x1eb08c-0x1eb0c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _smb_encode_scratch_size(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0xc00) {
    uVar1 = 0x8000;
  }
  else if (param_1 == 0xc10) {
    uVar1 = 0x10000;
  }
  else if (param_1 == 0xc20) {
    uVar1 = 0x2a168;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

