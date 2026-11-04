// rea decompile_all
// name: _uarpAssetQueueSolicitation
// address: 0x1832bc
// body: available
// range: 0x1832bc-0x183336 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 _uarpAssetQueueSolicitation(undefined8 param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(long *)(param_2 + 0x50) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
    if (*(short *)(param_2 + 0x1c) != 0) {
      lVar4 = 0;
      uVar3 = 0;
      do {
        cVar1 = _uarpAssetTagIsValid(*(long *)(param_2 + 0x50) + lVar4);
        if (cVar1 != '\x01') {
          *(undefined4 *)(*(long *)(param_2 + 0x50) + uVar3 * 4) = *param_3;
          return uVar3 == 0;
        }
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 4;
      } while (uVar3 < *(ushort *)(param_2 + 0x1c));
    }
  }
  return uVar2;
}

