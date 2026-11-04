// rea decompile_all
// name: _lz4raw_decode_buffer
// address: 0x1d6768
// body: available
// range: 0x1d6768-0x1d67f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _lz4raw_decode_buffer(long param_1,ulong param_2,long param_3,ulong param_4)

{
  int iVar1;
  long local_38;
  long local_30;
  
  local_38 = param_3;
  local_30 = param_1;
  if (((param_4 < 0x81 || param_2 < 0x81) ||
      (iVar1 = _lz4_decode_asm(&local_30,param_1,param_1 + param_2 + -0x80,&local_38,
                               param_3 + -0x80 + param_4), iVar1 == 0)) &&
     (iVar1 = _lz4_decode(&local_30,param_1,param_2 + param_1,&local_38,param_3 + param_4),
     iVar1 == 0)) {
    return local_30 - param_1;
  }
  return 0;
}

