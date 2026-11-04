// rea decompile_all
// name: _unzGoToNextFile
// address: 0x172554
// body: available
// range: 0x172554-0x1725f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _unzGoToNextFile(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 in_R9;
  
  if ((*(long *)(param_1 + 0x90) != 0) &&
     (lVar2 = *(long *)(param_1 + 0x80) + 1,
     *(long *)(param_1 + 0x68) == 0xffff || lVar2 != *(long *)(param_1 + 0x68))) {
    *(long *)(param_1 + 0x88) =
         *(long *)(param_1 + 0x88) +
         *(long *)(param_1 + 0xf0) + *(long *)(param_1 + 0xf8) + *(long *)(param_1 + 0x100) + 0x2e;
    *(long *)(param_1 + 0x80) = lVar2;
    iVar1 = _unz64local_GetCurrentFileInfoInternal
                      (param_1,param_1 + 0xb0,param_1 + 0x138,0,0,in_R9,0xffffff9c);
    *(ulong *)(param_1 + 0x90) = (ulong)(iVar1 == 0);
  }
  return;
}

