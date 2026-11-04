// rea decompile_all
// name: _lzx_huffman_tree_compute_lookup_from_code_len
// address: 0x1d0eb3
// body: available
// range: 0x1d0eb3-0x1d133e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d133a to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _lzx_huffman_tree_compute_lookup_from_code_len(long param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  byte bVar13;
  int iVar14;
  ushort uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  int iVar22;
  undefined1 auVar21 [16];
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar39;
  int iVar41;
  undefined1 auVar40 [16];
  undefined1 in_XMM11 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 in_XMM12 [16];
  undefined1 auVar44 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined4 local_468;
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined4 local_418;
  ushort local_408 [500];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar12 = *(undefined8 *)(param_1 + 0x201f0);
  ___bzero(local_408);
  local_428 = (undefined1  [16])0x0;
  local_438 = (undefined1  [16])0x0;
  local_448 = (undefined1  [16])0x0;
  local_458 = (undefined1  [16])0x0;
  local_418 = 0;
  uVar19 = (uint)uVar12;
  if ((int)uVar19 < 1) {
LAB_001d1301:
    _memset_pattern16((void *)(param_1 + 0x1f0),&DAT_0033c990,0x20000);
  }
  else {
    uVar20 = (ulong)(uVar19 & 0x7fffffff);
    uVar10 = 0;
    bVar13 = 0;
    do {
      bVar1 = *(byte *)(param_1 + uVar10);
      *(int *)(local_458 + (ulong)bVar1 * 4) = *(int *)(local_458 + (ulong)bVar1 * 4) + 1;
      if (bVar1 < bVar13) {
        bVar1 = bVar13;
      }
      bVar13 = bVar1;
      uVar10 = uVar10 + 1;
    } while (uVar20 != uVar10);
    if (bVar13 == 0) goto LAB_001d1301;
    local_478 = (undefined1  [16])0x0;
    local_488 = (undefined1  [16])0x0;
    local_498 = (undefined1  [16])0x0;
    local_4a8 = (undefined1  [16])0x0;
    local_468 = 0;
    iVar14 = 0;
    lVar11 = 1;
    do {
      *(int *)(local_4a8 + lVar11 * 4) = iVar14 * 2;
      iVar14 = iVar14 * 2 + *(int *)(local_458 + lVar11 * 4);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x11);
    uVar12 = 0xffffffff;
    if (iVar14 != 0x10000) goto LAB_001d131e;
    uVar10 = 0;
    do {
      bVar13 = *(byte *)(param_1 + uVar10);
      if (bVar13 != 0) {
        uVar19 = *(uint *)(local_4a8 + (ulong)bVar13 * 4);
        *(uint *)(local_4a8 + (ulong)bVar13 * 4) = uVar19 + 1;
        if (uVar19 >> (bVar13 & 0x1f) != 0) goto LAB_001d131e;
        local_408[uVar10] = (ushort)(uVar19 << (0x10 - bVar13 & 0x1f));
      }
      uVar10 = uVar10 + 1;
    } while (uVar20 != uVar10);
    ___bzero(param_1 + 0x1f0,0x20000);
    auVar9 = _DAT_0032b310;
    auVar8 = _DAT_0032b300;
    auVar7 = _DAT_0032b2f0;
    auVar6 = _DAT_0032b0a0;
    auVar5 = _DAT_0032b090;
    uVar10 = 0;
    do {
      bVar13 = *(byte *)(param_1 + uVar10);
      if (bVar13 != 0) {
        uVar15 = (ushort)((int)uVar10 << 5) | (ushort)bVar13;
        uVar16 = (ulong)local_408[uVar10];
        uVar17 = (ulong)((1 << (0x10 - bVar13 & 0x1f)) + (uint)local_408[uVar10]);
        uVar18 = uVar16 + 1;
        if (uVar16 + 1 < uVar17) {
          uVar18 = uVar17;
        }
        lVar11 = (uVar18 - uVar16) + -1;
        auVar21._8_4_ = (int)lVar11;
        auVar21._0_8_ = lVar11;
        auVar21._12_4_ = (int)((ulong)lVar11 >> 0x20);
        lVar11 = param_1 + 0x1fe + uVar16 * 2;
        auVar21 = auVar21 ^ auVar9;
        uVar17 = 0;
        do {
          auVar33._8_4_ = (int)uVar17;
          auVar33._0_8_ = uVar17;
          auVar33._12_4_ = (int)(uVar17 >> 0x20);
          auVar25 = (auVar33 | auVar8) ^ auVar9;
          iVar14 = auVar21._0_4_;
          iVar39 = -(uint)(iVar14 < auVar25._0_4_);
          iVar22 = auVar21._4_4_;
          auVar26._4_4_ = -(uint)(iVar22 < auVar25._4_4_);
          iVar38 = auVar21._8_4_;
          iVar41 = -(uint)(iVar38 < auVar25._8_4_);
          iVar23 = auVar21._12_4_;
          auVar26._12_4_ = -(uint)(iVar23 < auVar25._12_4_);
          auVar35._4_4_ = iVar39;
          auVar35._0_4_ = iVar39;
          auVar35._8_4_ = iVar41;
          auVar35._12_4_ = iVar41;
          auVar42 = pshuflw(in_XMM11,auVar35,0xe8);
          auVar28._4_4_ = -(uint)(auVar25._4_4_ == iVar22);
          auVar28._12_4_ = -(uint)(auVar25._12_4_ == iVar23);
          auVar28._0_4_ = auVar28._4_4_;
          auVar28._8_4_ = auVar28._12_4_;
          auVar44 = pshuflw(in_XMM12,auVar28,0xe8);
          auVar26._0_4_ = auVar26._4_4_;
          auVar26._8_4_ = auVar26._12_4_;
          auVar43 = pshuflw(auVar42,auVar26,0xe8);
          auVar25._8_4_ = 0xffffffff;
          auVar25._0_8_ = 0xffffffffffffffff;
          auVar25._12_4_ = 0xffffffff;
          auVar25 = (auVar43 | auVar44 & auVar42) ^ auVar25;
          auVar25 = packssdw(auVar25,auVar25);
          if ((auVar25._0_4_ & 1) != 0) {
            *(ushort *)(lVar11 + -0xe + uVar17 * 2) = uVar15;
          }
          auVar26 = auVar28 & auVar35 | auVar26;
          auVar25 = packssdw(auVar26,auVar26);
          auVar43._8_4_ = 0xffffffff;
          auVar43._0_8_ = 0xffffffffffffffff;
          auVar43._12_4_ = 0xffffffff;
          auVar25 = packssdw(auVar25 ^ auVar43,auVar25 ^ auVar43);
          if ((auVar25._0_4_ >> 0x10 & 1) != 0) {
            *(ushort *)(lVar11 + -0xc + uVar17 * 2) = uVar15;
          }
          auVar25 = (auVar33 | auVar7) ^ auVar9;
          iVar39 = -(uint)(iVar14 < auVar25._0_4_);
          auVar40._4_4_ = -(uint)(iVar22 < auVar25._4_4_);
          iVar41 = -(uint)(iVar38 < auVar25._8_4_);
          auVar40._12_4_ = -(uint)(iVar23 < auVar25._12_4_);
          auVar27._4_4_ = iVar39;
          auVar27._0_4_ = iVar39;
          auVar27._8_4_ = iVar41;
          auVar27._12_4_ = iVar41;
          auVar34._4_4_ = -(uint)(auVar25._4_4_ == iVar22);
          auVar34._12_4_ = -(uint)(auVar25._12_4_ == iVar23);
          auVar34._0_4_ = auVar34._4_4_;
          auVar34._8_4_ = auVar34._12_4_;
          auVar40._0_4_ = auVar40._4_4_;
          auVar40._8_4_ = auVar40._12_4_;
          auVar25 = auVar34 & auVar27 | auVar40;
          auVar25 = packssdw(auVar25,auVar25);
          auVar2._8_4_ = 0xffffffff;
          auVar2._0_8_ = 0xffffffffffffffff;
          auVar2._12_4_ = 0xffffffff;
          auVar25 = packssdw(auVar25 ^ auVar2,auVar25 ^ auVar2);
          if ((auVar25._4_2_ & 1) != 0) {
            *(ushort *)(lVar11 + -10 + uVar17 * 2) = uVar15;
          }
          auVar28 = pshufhw(auVar27,auVar27,0x84);
          auVar35 = pshufhw(auVar34,auVar34,0x84);
          auVar26 = pshufhw(auVar28,auVar40,0x84);
          auVar29._8_4_ = 0xffffffff;
          auVar29._0_8_ = 0xffffffffffffffff;
          auVar29._12_4_ = 0xffffffff;
          auVar29 = (auVar26 | auVar35 & auVar28) ^ auVar29;
          auVar28 = packssdw(auVar29,auVar29);
          if ((auVar28._6_2_ & 1) != 0) {
            *(ushort *)(lVar11 + -8 + uVar17 * 2) = uVar15;
          }
          auVar28 = (auVar33 | auVar6) ^ auVar9;
          iVar39 = -(uint)(iVar14 < auVar28._0_4_);
          auVar31._4_4_ = -(uint)(iVar22 < auVar28._4_4_);
          iVar41 = -(uint)(iVar38 < auVar28._8_4_);
          auVar31._12_4_ = -(uint)(iVar23 < auVar28._12_4_);
          auVar36._4_4_ = iVar39;
          auVar36._0_4_ = iVar39;
          auVar36._8_4_ = iVar41;
          auVar36._12_4_ = iVar41;
          auVar25 = pshuflw(auVar25,auVar36,0xe8);
          auVar30._4_4_ = -(uint)(auVar28._4_4_ == iVar22);
          auVar30._12_4_ = -(uint)(auVar28._12_4_ == iVar23);
          auVar30._0_4_ = auVar30._4_4_;
          auVar30._8_4_ = auVar30._12_4_;
          in_XMM12 = pshuflw(auVar44 & auVar42,auVar30,0xe8);
          in_XMM12 = in_XMM12 & auVar25;
          auVar31._0_4_ = auVar31._4_4_;
          auVar31._8_4_ = auVar31._12_4_;
          auVar25 = pshuflw(auVar25,auVar31,0xe8);
          auVar42._8_4_ = 0xffffffff;
          auVar42._0_8_ = 0xffffffffffffffff;
          auVar42._12_4_ = 0xffffffff;
          auVar42 = (auVar25 | in_XMM12) ^ auVar42;
          in_XMM11 = packssdw(auVar42,auVar42);
          if ((in_XMM11._8_2_ & 1) != 0) {
            *(ushort *)(lVar11 + -6 + uVar17 * 2) = uVar15;
          }
          auVar31 = auVar30 & auVar36 | auVar31;
          auVar25 = packssdw(auVar31,auVar31);
          auVar44._8_4_ = 0xffffffff;
          auVar44._0_8_ = 0xffffffffffffffff;
          auVar44._12_4_ = 0xffffffff;
          auVar25 = packssdw(auVar25 ^ auVar44,auVar25 ^ auVar44);
          if ((auVar25._10_2_ & 1) != 0) {
            *(ushort *)(lVar11 + -4 + uVar17 * 2) = uVar15;
          }
          auVar25 = (auVar33 | auVar5) ^ auVar9;
          iVar14 = -(uint)(iVar14 < auVar25._0_4_);
          auVar37._4_4_ = -(uint)(iVar22 < auVar25._4_4_);
          iVar38 = -(uint)(iVar38 < auVar25._8_4_);
          auVar37._12_4_ = -(uint)(iVar23 < auVar25._12_4_);
          auVar32._4_4_ = iVar14;
          auVar32._0_4_ = iVar14;
          auVar32._8_4_ = iVar38;
          auVar32._12_4_ = iVar38;
          auVar24._4_4_ = -(uint)(auVar25._4_4_ == iVar22);
          auVar24._12_4_ = -(uint)(auVar25._12_4_ == iVar23);
          auVar24._0_4_ = auVar24._4_4_;
          auVar24._8_4_ = auVar24._12_4_;
          auVar37._0_4_ = auVar37._4_4_;
          auVar37._8_4_ = auVar37._12_4_;
          auVar25 = auVar24 & auVar32 | auVar37;
          auVar25 = packssdw(auVar25,auVar25);
          auVar3._8_4_ = 0xffffffff;
          auVar3._0_8_ = 0xffffffffffffffff;
          auVar3._12_4_ = 0xffffffff;
          auVar25 = packssdw(auVar25 ^ auVar3,auVar25 ^ auVar3);
          if ((auVar25._12_2_ & 1) != 0) {
            *(ushort *)(lVar11 + -2 + uVar17 * 2) = uVar15;
          }
          auVar33 = pshufhw(auVar32,auVar32,0x84);
          auVar25 = pshufhw(auVar24,auVar24,0x84);
          auVar28 = pshufhw(auVar33,auVar37,0x84);
          auVar4._8_4_ = 0xffffffff;
          auVar4._0_8_ = 0xffffffffffffffff;
          auVar4._12_4_ = 0xffffffff;
          auVar25 = packssdw(auVar25 & auVar33,(auVar28 | auVar25 & auVar33) ^ auVar4);
          if ((auVar25._14_2_ & 1) != 0) {
            *(ushort *)(lVar11 + uVar17 * 2) = uVar15;
          }
          uVar17 = uVar17 + 8;
        } while (((uVar18 - uVar16) + 7 & 0xfffffffffffffff8) != uVar17);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar20);
  }
  uVar12 = 0;
LAB_001d131e:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar12;
}

