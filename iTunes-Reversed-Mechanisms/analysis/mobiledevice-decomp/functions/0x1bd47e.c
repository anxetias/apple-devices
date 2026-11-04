// rea decompile_all
// name: _amai_unzGoToNextFile
// address: 0x1bd47e
// body: available
// range: 0x1bd47e-0x1bd531 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _amai_unzGoToNextFile(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = 0xffffff9c;
    if ((*(long *)(param_1 + 0x70) != 0) &&
       (lVar2 = *(long *)(param_1 + 0x60) + 1,
       *(long *)(param_1 + 0x48) == 0xffff || lVar2 != *(long *)(param_1 + 0x48))) {
      *(long *)(param_1 + 0x68) =
           *(long *)(param_1 + 0x68) +
           *(long *)(param_1 + 0xd0) + *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0) + 0x2e;
      *(long *)(param_1 + 0x60) = lVar2;
      uVar1 = _unzlocal_GetCurrentFileInfoInternal
                        (param_1,param_1 + 0x90,param_1 + 0x118,0,0,0,0,0,0);
      *(ulong *)(param_1 + 0x70) = (ulong)((int)uVar1 == 0);
    }
    return uVar1;
  }
  return 0xffffff9a;
}

