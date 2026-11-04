// rea decompile_all
// name: _uarpTransmitQueuePendingEntryComplete
// address: 0x180298
// body: available
// range: 0x180298-0x180340 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _uarpTransmitQueuePendingEntryComplete(undefined8 param_1,long param_2,long param_3)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(ushort *)(param_2 + 0x70);
  if ((ulong)uVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    lVar2 = *(long *)(*(long *)(param_2 + 0x78) + uVar3 * 8);
    if (lVar2 == param_3 && lVar2 != 0) {
      *(undefined8 *)(*(long *)(param_2 + 0x78) + uVar3 * 8) = 0;
      *(undefined2 *)(lVar2 + 0x20) = 0;
      *(undefined4 *)(lVar2 + 0x1c) = 0;
      if ((ulong)*(ushort *)(param_2 + 0x60) != 0) {
        uVar3 = 0;
        goto LAB_001802f6;
      }
      break;
    }
    uVar3 = uVar3 + 1;
  } while (uVar1 != uVar3);
  goto LAB_0018030b;
  while (uVar3 = uVar3 + 1, *(ushort *)(param_2 + 0x60) != uVar3) {
LAB_001802f6:
    if (*(long *)(*(long *)(param_2 + 0x68) + uVar3 * 8) == 0) {
      *(long *)(*(long *)(param_2 + 0x68) + uVar3 * 8) = lVar2;
      break;
    }
  }
LAB_0018030b:
  if (uVar1 != 1) {
    uVar3 = 0;
    do {
      lVar2 = *(long *)(param_2 + 0x78);
      if (*(long *)(lVar2 + uVar3 * 8) == 0) {
        *(undefined8 *)(lVar2 + uVar3 * 8) = *(undefined8 *)(lVar2 + 8 + uVar3 * 8);
        *(undefined8 *)(*(long *)(param_2 + 0x78) + 8 + uVar3 * 8) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 - 1 != uVar3);
  }
  return 0;
}

