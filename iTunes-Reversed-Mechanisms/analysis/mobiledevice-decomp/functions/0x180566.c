// rea decompile_all
// name: _uarpPlatformEndpointIsMessageTypePending
// address: 0x180566
// body: available
// range: 0x180566-0x1805cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 _uarpPlatformEndpointIsMessageTypePending(undefined8 param_1,long param_2,short param_3)

{
  long lVar1;
  short sVar2;
  ulong uVar3;
  
  if (*(short *)(param_2 + 0x70) != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(long *)(*(long *)(param_2 + 0x78) + uVar3 * 8);
      if (((lVar1 != 0) && (sVar2 = _uarpNtohs(**(undefined2 **)(lVar1 + 0x10)), sVar2 == param_3))
         && (*(char *)(*(long *)(*(long *)(param_2 + 0x78) + uVar3 * 8) + 0x21) != '\x01')) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_2 + 0x70));
  }
  return 0;
}

