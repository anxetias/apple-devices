// rea decompile_all
// name: _AMAuthInstallVinylCheckVinylFwLdrVerLegacy
// address: 0x2a1045
// body: available
// range: 0x2a1045-0x2a1085 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _AMAuthInstallVinylCheckVinylFwLdrVerLegacy(long param_1)

{
  undefined8 in_RAX;
  bool bVar1;
  undefined2 local_12;
  
  local_12 = (undefined2)((ulong)in_RAX >> 0x30);
  if (param_1 == 0) {
    bVar1 = true;
  }
  else {
    _CFDataGetBytes(param_1,0,2,&local_12);
    bVar1 = (((byte)local_12 & 0x7f) << 8 | (uint)local_12._1_1_) < 0x301;
  }
  return bVar1;
}

