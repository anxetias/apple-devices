// rea decompile_all
// name: _SafeDecodeSymbol
// address: 0x89d3f
// body: available
// range: 0x89d3f-0x89dd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _SafeDecodeSymbol(byte *param_1,ulong *param_2,uint *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = (int)param_2[1];
  if (iVar3 == 0x40) {
    if (*param_1 != 0) {
      return 0;
    }
  }
  else {
    uVar4 = *param_2 >> ((byte)iVar3 & 0x3f);
    param_1 = param_1 + (uVar4 & 0xff) * 4;
    bVar2 = *param_1;
    if (bVar2 < 9) {
      if (0x40U - iVar3 < (uint)bVar2) {
        return 0;
      }
      iVar3 = iVar3 + (uint)bVar2;
    }
    else {
      if (0x40U - iVar3 < 9) {
        return 0;
      }
      uVar4 = (ulong)((uint)*(ushort *)(param_1 + 2) +
                     (((uint)uVar4 & *(uint *)(&_kBrotliBitMask + (ulong)(uint)bVar2 * 4)) >> 8));
      pbVar1 = param_1 + uVar4 * 4;
      if (0x38U - iVar3 < (uint)*pbVar1) {
        return 0;
      }
      param_1 = param_1 + uVar4 * 4;
      iVar3 = iVar3 + (uint)*pbVar1 + 8;
    }
    *(int *)(param_2 + 1) = iVar3;
  }
  *param_3 = (uint)*(ushort *)(param_1 + 2);
  return 1;
}

