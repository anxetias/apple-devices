// rea decompile_all
// name: _lzfseEncodeInitState
// address: 0x200ece
// body: available
// range: 0x200ece-0x200f99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzfseEncodeInitState(long param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  sbyte sVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  
  iVar10 = 10000;
  if (param_2 == 0x891) {
    iVar10 = 0xea6;
  }
  uVar11 = 40000;
  if (param_2 == 0x891) {
    uVar11 = 15000;
  }
  bVar12 = param_2 != 0x802;
  iVar7 = (uint)bVar12 * 4 + 10;
  iVar3 = 2000;
  if (bVar12) {
    iVar3 = iVar10;
  }
  *(int *)(param_1 + 0x40) = iVar7;
  uVar8 = 8000;
  if (bVar12) {
    uVar8 = uVar11;
  }
  *(int *)(param_1 + 0x44) = iVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar8;
  *(long *)(param_1 + 0x70) = param_3;
  sVar6 = (sbyte)iVar7;
  lVar9 = (0x20L << sVar6) + param_3;
  *(long *)(param_1 + 0x78) = lVar9;
  uVar5 = (ulong)(uint)(iVar3 << 2);
  lVar9 = lVar9 + uVar5;
  *(long *)(param_1 + 0x80) = lVar9;
  lVar9 = lVar9 + uVar5;
  *(long *)(param_1 + 0x88) = lVar9;
  *(ulong *)(param_1 + 0x90) = lVar9 + uVar5;
  uVar4 = 1;
  do {
    lVar9 = (ulong)(uVar4 - 1) * 0x20;
    puVar1 = (undefined8 *)(param_3 + 0x10 + lVar9);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_3 + lVar9);
    *puVar1 = 0xfff00014fff00014;
    puVar1[1] = 0xfff00014fff00014;
    uVar2 = uVar4 >> sVar6;
    uVar4 = uVar4 + 1;
  } while (uVar2 == 0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return 0;
}

