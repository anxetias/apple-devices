// rea decompile_all
// name: _AMAuthInstallApFinalize
// address: 0x19ff0e
// body: available
// range: 0x19ff0e-0x1a001f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _AMAuthInstallApFinalize(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18));
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20));
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38));
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58));
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68));
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78));
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x80));
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x88));
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa0));
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa8));
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb0));
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xb8));
    _SafeRelease(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xc0));
    _SafeFree(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  _SafeRelease(*(undefined8 *)(param_1 + 0x18));
  _SafeRelease(*(undefined8 *)(param_1 + 0x210));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

