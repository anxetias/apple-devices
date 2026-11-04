// rea decompile_all
// name: _scan_tree
// address: 0x83a7d
// body: available
// range: 0x83a7d-0x83b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _scan_tree(long param_1,long param_2,int param_3)

{
  short *psVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  uVar2 = *(ushort *)(param_2 + 2);
  *(undefined2 *)(param_2 + 6 + (long)param_3 * 4) = 0xffff;
  if (-1 < param_3) {
    uVar9 = 7;
    if (uVar2 == 0) {
      uVar9 = 0x8a;
    }
    iVar8 = (uVar2 != 0) + 3;
    uVar6 = 0xffffffff;
    uVar5 = 0;
    uVar3 = (uint)uVar2;
    iVar11 = 0;
    do {
      uVar7 = (ulong)uVar3;
      uVar2 = *(ushort *)(param_2 + 6 + uVar5 * 4);
      uVar4 = (uint)uVar2;
      iVar10 = iVar11 + 1;
      if (((int)uVar9 <= iVar10) || (uVar3 != uVar4)) {
        if (iVar10 < iVar8) {
          psVar1 = (short *)(param_1 + 0xaac + uVar7 * 4);
          *psVar1 = *psVar1 + (short)iVar10;
        }
        else if (uVar3 == 0) {
          if (iVar11 < 10) {
            *(short *)(param_1 + 0xaf0) = *(short *)(param_1 + 0xaf0) + 1;
          }
          else {
            *(short *)(param_1 + 0xaf4) = *(short *)(param_1 + 0xaf4) + 1;
          }
        }
        else {
          if (uVar3 != (uint)uVar6) {
            psVar1 = (short *)(param_1 + 0xaac + uVar7 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_1 + 0xaec) = *(short *)(param_1 + 0xaec) + 1;
        }
        iVar10 = 0;
        uVar6 = uVar7;
        if (uVar2 == 0) {
          iVar8 = 3;
          uVar9 = 0x8a;
        }
        else {
          iVar8 = 4 - (uint)(uVar3 == uVar4);
          uVar9 = uVar3 == uVar4 ^ 7;
        }
      }
      uVar5 = uVar5 + 1;
      uVar3 = uVar4;
      iVar11 = iVar10;
    } while (param_3 + 1 != uVar5);
  }
  return;
}

