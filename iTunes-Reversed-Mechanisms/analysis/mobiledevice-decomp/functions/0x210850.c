// rea decompile_all
// name: _BrotliBuildCodeLengthsHuffmanTable
// address: 0x210850
// body: available
// range: 0x210850-0x210be6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x210be2 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _BrotliBuildCodeLengthsHuffmanTable(long param_1,long param_2,long param_3)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long lVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  int iVar19;
  undefined1 auVar18 [16];
  int iVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  ulong local_b8;
  int local_a8 [4];
  int local_98;
  int local_94;
  int local_88 [20];
  long local_38;
  
  auVar7 = _DAT_0032b310;
  auVar6 = _DAT_0032b300;
  auVar5 = _DAT_0032b2f0;
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_a8[1] = *(ushort *)(param_3 + 2) - 1;
  local_a8[2] = (uint)*(ushort *)(param_3 + 2) + (uint)*(ushort *)(param_3 + 4) + -1;
  local_a8[3] = (uint)*(ushort *)(param_3 + 6) + local_a8[2];
  local_98 = (uint)*(ushort *)(param_3 + 8) + local_a8[3];
  local_94 = (uint)*(ushort *)(param_3 + 10) + local_98;
  local_a8[0] = 0x11;
  lVar8 = 0;
  do {
    bVar2 = *(byte *)(param_2 + 0x11 + lVar8);
    iVar10 = local_a8[bVar2];
    local_a8[bVar2] = iVar10 + -1;
    iVar4 = (int)lVar8;
    local_88[iVar10] = iVar4 + 0x11;
    bVar2 = *(byte *)(param_2 + 0x10 + lVar8);
    iVar10 = local_a8[bVar2];
    local_a8[bVar2] = iVar10 + -1;
    local_88[iVar10] = iVar4 + 0x10;
    bVar2 = *(byte *)(param_2 + 0xf + lVar8);
    iVar10 = local_a8[bVar2];
    local_a8[bVar2] = iVar10 + -1;
    local_88[iVar10] = iVar4 + 0xf;
    bVar2 = *(byte *)(param_2 + 0xe + lVar8);
    iVar10 = local_a8[bVar2];
    local_a8[bVar2] = iVar10 + -1;
    local_88[iVar10] = iVar4 + 0xe;
    bVar2 = *(byte *)(param_2 + 0xd + lVar8);
    iVar10 = local_a8[bVar2];
    local_a8[bVar2] = iVar10 + -1;
    local_88[iVar10] = iVar4 + 0xd;
    bVar2 = *(byte *)(param_2 + 0xc + lVar8);
    iVar10 = local_a8[bVar2];
    local_a8[bVar2] = iVar10 + -1;
    local_88[iVar10] = iVar4 + 0xc;
    lVar8 = lVar8 + -6;
  } while (lVar8 != -0x12);
  if (local_a8[0] == 0) {
    lVar8 = 0;
    do {
      piVar1 = (int *)(param_1 + lVar8 * 4);
      *piVar1 = local_88[0] << 0x10;
      piVar1[1] = local_88[0] << 0x10;
      piVar1[2] = local_88[0] << 0x10;
      piVar1[3] = local_88[0] << 0x10;
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0x20);
  }
  else {
    lVar8 = 0;
    iVar10 = 2;
    lVar13 = 1;
    local_b8 = 0x80;
    lVar16 = 0;
    do {
      uVar3 = *(ushort *)(param_3 + lVar13 * 2);
      uVar17 = (uint)uVar3;
      if (uVar3 != 0) {
        lVar12 = (long)-iVar10;
        lVar16 = (long)(int)lVar16;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = (long)iVar10;
        auVar22 = (ZEXT816(0) << 0x40 | ZEXT816(0x1f)) / auVar22;
        iVar4 = auVar22._0_4_;
        auVar18._0_8_ = auVar22._0_8_;
        auVar18._8_4_ = iVar4;
        auVar18._12_4_ = 0;
        auVar18 = auVar18 ^ auVar7;
        do {
          uVar11 = local_88[lVar16] << 0x10 | (uint)lVar13;
          bVar2 = (&_kReverseBits)[lVar8];
          lVar14 = (ulong)bVar2 * 4;
          uVar15 = 0;
          lVar9 = param_1 + (long)iVar10 * -4;
          do {
            auVar21._8_4_ = (int)uVar15;
            auVar21._0_8_ = uVar15;
            auVar21._12_4_ = (int)(uVar15 >> 0x20);
            auVar22 = (auVar21 | auVar6) ^ auVar7;
            iVar19 = auVar18._4_4_;
            iVar20 = auVar18._12_4_;
            if ((bool)(~(iVar19 < auVar22._4_4_ ||
                        auVar18._0_4_ < auVar22._0_4_ && auVar22._4_4_ == iVar19) & 1)) {
              *(uint *)(lVar9 + 0x80 + lVar14) = uVar11;
            }
            if (auVar22._12_4_ <= iVar20 &&
                (auVar22._8_4_ <= auVar18._8_4_ || auVar22._12_4_ != iVar20)) {
              *(uint *)(lVar9 + 0x80 + (lVar12 + (ulong)bVar2) * 4) = uVar11;
            }
            auVar22 = (auVar21 | auVar5) ^ auVar7;
            if ((auVar22._4_4_ != iVar19 || auVar22._0_4_ <= auVar18._0_4_) &&
                auVar22._4_4_ <= iVar19) {
              *(uint *)(lVar9 + lVar12 * 8 + 0x80 + lVar14) = uVar11;
            }
            if (auVar22._12_4_ <= iVar20 &&
                (auVar22._8_4_ <= auVar18._8_4_ || auVar22._12_4_ != iVar20)) {
              *(uint *)(lVar9 + lVar12 * 0xc + 0x80 + lVar14) = uVar11;
            }
            uVar15 = uVar15 + 4;
            lVar9 = lVar9 + lVar12 * 0x10;
          } while ((iVar4 + 4U & 0x3c) != uVar15);
          lVar16 = lVar16 + 1;
          lVar8 = lVar8 + local_b8;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      iVar10 = iVar10 * 2;
      local_b8 = local_b8 >> 1;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 6);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

