// rea decompile_all
// name: _getMainExecutableUUID
// address: 0xb2cd4
// body: available
// range: 0xb2cd4-0xb2d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _getMainExecutableUUID(uchar *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)__NSGetMachExecuteHeader();
  if ((*piVar1 == -0x1120531) && (iVar2 = piVar1[4], iVar2 != 0)) {
    piVar1 = piVar1 + 8;
    do {
      if (*piVar1 == 0x1b) {
        _uuid_copy(param_1,(uchar *)(piVar1 + 2));
        return 1;
      }
      piVar1 = (int *)((long)piVar1 + (ulong)(uint)piVar1[1]);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

