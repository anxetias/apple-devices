// rea decompile_all
// name: _ComputeDistanceCost
// address: 0x6d1de
// body: available
// range: 0x6d1de-0x6d3d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_ComputeDistanceCost(long param_1,long param_2,uint *param_3,uint *param_4,double *param_5)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ushort *puVar11;
  bool bVar12;
  double dVar13;
  int local_8d8 [544];
  long local_58;
  undefined8 local_50;
  ulong local_48;
  double *local_40;
  double local_38;
  
  local_40 = param_5;
  ___bzero(local_8d8);
  local_50 = 0x7ff0000000000000;
  uVar3 = *param_3;
  uVar4 = *param_4;
  bVar12 = true;
  if (uVar3 == uVar4) {
    bVar12 = param_3[1] != param_4[1];
  }
  lVar9 = 0;
  if (param_2 == 0) {
    dVar13 = 0.0;
  }
  else {
    local_38 = (double)CONCAT44(local_38._4_4_,~(-1 << ((byte)uVar3 & 0x1f)));
    bVar5 = (byte)uVar4;
    local_48 = (ulong)(uint)~(-1 << (bVar5 & 0x1f));
    puVar11 = (ushort *)(param_1 + 0xe);
    dVar13 = 0.0;
    do {
      if (((*(uint *)(puVar11 + -5) & 0x1ffffff) != 0) && (0x7f < puVar11[-1])) {
        uVar2 = *puVar11;
        uVar10 = (ulong)uVar2;
        if (bVar12) {
          uVar8 = uVar2 & 0x3ff;
          uVar6 = param_3[1] + 0x10;
          if (uVar6 <= uVar8) {
            uVar8 = (uVar8 - param_3[1]) - 0x10;
            uVar8 = uVar6 + (uVar8 & local_38._0_4_) +
                    (*(int *)(puVar11 + -3) +
                     (((uVar8 >> (uVar3 & 0x1f) & 1) != 0) + 2 << ((byte)(uVar2 >> 10) & 0x1f)) + -4
                    << ((byte)uVar3 & 0x1f));
          }
          uVar10 = (ulong)uVar8;
          if (*(ulong *)(param_4 + 4) < uVar10) {
            return 0;
          }
          uVar1 = (ulong)param_4[1] + 0x10;
          if (uVar1 <= uVar10) {
            uVar10 = (uVar10 + (4L << (bVar5 & 0x3f)) + -0x10) - (ulong)param_4[1];
            uVar6 = 0x1f;
            uVar8 = (uint)uVar10;
            if (uVar8 != 0) {
              for (; uVar8 >> uVar6 == 0; uVar6 = uVar6 - 1) {
              }
            }
            uVar6 = (uVar6 ^ 0xffffffe0) + 0x1f;
            iVar7 = uVar6 - uVar4;
            uVar10 = (ulong)(((uint)((uVar10 >> ((ulong)uVar6 & 0x3f) & 1) != 0) + iVar7 * 2 +
                              0xfffe << (bVar5 & 0x3f)) + (int)uVar1 + (uVar8 & (uint)local_48) |
                            iVar7 * 0x400);
          }
        }
        local_8d8[(uint)uVar10 & 0x3ff] = local_8d8[(uint)uVar10 & 0x3ff] + 1;
        lVar9 = lVar9 + 1;
        dVar13 = dVar13 + (double)(int)((uVar10 & 0xffff) >> 10);
      }
      puVar11 = puVar11 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  local_58 = lVar9;
  local_38 = dVar13;
  dVar13 = (double)_BrotliPopulationCostDistance();
  *local_40 = dVar13 + local_38;
  return 1;
}

