// rea decompile_all
// name: _CopyFileNameFromLocalFileRecord
// address: 0x9c4a3
// body: available
// range: 0x9c4a3-0x9c4ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * _CopyFileNameFromLocalFileRecord(long param_1,ulong *param_2)

{
  void *pvVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x1a);
  pvVar1 = _calloc(uVar2 + 1,1);
  _memcpy(pvVar1,(void *)(param_1 + 0x1e),uVar2);
  if (param_2 != (ulong *)0x0) {
    *param_2 = uVar2;
  }
  return pvVar1;
}

