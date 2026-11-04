// rea decompile_all
// name: _getDecoderTable
// address: 0x5cc4b
// body: available
// range: 0x5cc4b-0x5d159 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5d155 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _getDecoderTable(uint param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  byte bVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  short sVar18;
  long lVar19;
  short *psVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  int iVar29;
  undefined1 auVar28 [16];
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  int iVar41;
  int iVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar47;
  int iVar49;
  undefined1 auVar48 [16];
  undefined1 in_XMM11 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 in_XMM12 [16];
  undefined1 auVar52 [16];
  int local_2fc;
  ushort auStack_2f8 [288];
  uint local_b8 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  uVar27 = (ulong)param_1;
  if ((int)param_1 < 1) {
    if (param_3 < 2) goto LAB_0005ccfe;
    local_48 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_78._4_12_ = SUB1612((undefined1  [16])0x0,4);
    local_2fc = 2;
    uVar21 = 0;
    bVar14 = 1;
  }
  else {
    bVar14 = 1;
    uVar23 = 0;
    uVar21 = 0;
    do {
      bVar2 = *(byte *)(param_2 + uVar23);
      iVar25 = 1 << (0x14 - bVar2 & 0x1f);
      if (bVar2 == 0) {
        iVar25 = 0;
      }
      uVar21 = uVar21 + iVar25;
      if (bVar2 < bVar14) {
        bVar2 = bVar14;
      }
      bVar14 = bVar2;
      uVar23 = uVar23 + 1;
    } while (uVar27 != uVar23);
    local_2fc = 1 << (bVar14 & 0x1f);
    if (param_3 < local_2fc) {
LAB_0005ccfe:
      iVar25 = 0;
      goto LAB_0005d133;
    }
    local_48 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    uVar23 = 0;
    do {
      *(int *)(local_78 + (ulong)*(byte *)(param_2 + uVar23) * 4) =
           *(int *)(local_78 + (ulong)*(byte *)(param_2 + uVar23) * 4) + 1;
      uVar23 = uVar23 + 1;
    } while (uVar27 != uVar23);
  }
  uVar15 = 0;
  auVar9._12_4_ = 0;
  auVar9._0_12_ = local_78._4_12_;
  local_78 = auVar9 << 0x20;
  local_b8[0] = 0;
  lVar19 = 1;
  do {
    uVar15 = (uVar15 + local_b8[lVar19 + 0xf]) * 2;
    local_b8[lVar19] = uVar15;
    lVar19 = lVar19 + 1;
  } while (lVar19 != 0x10);
  if (0 < (int)param_1) {
    uVar23 = 0;
    do {
      bVar2 = *(byte *)(param_2 + uVar23);
      uVar15 = local_b8[bVar2];
      uVar3 = (&_breverse_brev8)[uVar15 >> 8 & 0xff];
      uVar4 = (&_breverse_brev8)[uVar15 & 0xff];
      local_b8[bVar2] = uVar15 + 1;
      auStack_2f8[uVar23] = CONCAT11(uVar4,uVar3) >> (0x10 - bVar2 & 0x1f);
      uVar23 = uVar23 + 1;
    } while (uVar27 != uVar23);
  }
  if (uVar21 != 0x100000) {
    iVar25 = 0;
    if (0x100000 < uVar21) goto LAB_0005d133;
    ___bzero(param_4,2L << (bVar14 & 0x3f));
  }
  auVar13 = _DAT_0032b310;
  auVar12 = _DAT_0032b300;
  auVar11 = _DAT_0032b2f0;
  auVar10 = _DAT_0032b0a0;
  auVar9 = _DAT_0032b090;
  iVar25 = local_2fc;
  if (0 < (int)param_1) {
    lVar19 = (long)local_2fc;
    uVar23 = 0;
    do {
      bVar14 = *(byte *)(param_2 + uVar23);
      if ((bVar14 != 0) && (uVar5 = auStack_2f8[uVar23], (int)(uint)uVar5 < local_2fc)) {
        sVar18 = (ushort)bVar14 + (short)uVar23 * 0x10 + -1;
        uVar24 = (ulong)(1 << (bVar14 & 0x1f));
        lVar1 = uVar24 + uVar5;
        lVar16 = lVar19;
        if (lVar19 < lVar1) {
          lVar16 = lVar1;
        }
        uVar26 = (ulong)(lVar1 < lVar19);
        uVar17 = ((lVar16 - uVar26) - lVar1) / uVar24;
        lVar1 = uVar26 + uVar17;
        auVar28._8_4_ = (int)lVar1;
        auVar28._0_8_ = lVar1;
        auVar28._12_4_ = (int)((ulong)lVar1 >> 0x20);
        psVar20 = (short *)(param_4 + (ulong)uVar5 * 2);
        auVar28 = auVar28 ^ auVar13;
        uVar22 = 0;
        do {
          auVar40._8_4_ = (int)uVar22;
          auVar40._0_8_ = uVar22;
          auVar40._12_4_ = (int)(uVar22 >> 0x20);
          auVar32 = (auVar40 | auVar12) ^ auVar13;
          iVar41 = auVar28._0_4_;
          iVar47 = -(uint)(iVar41 < auVar32._0_4_);
          iVar29 = auVar28._4_4_;
          auVar33._4_4_ = -(uint)(iVar29 < auVar32._4_4_);
          iVar46 = auVar28._8_4_;
          iVar49 = -(uint)(iVar46 < auVar32._8_4_);
          iVar30 = auVar28._12_4_;
          auVar33._12_4_ = -(uint)(iVar30 < auVar32._12_4_);
          auVar43._4_4_ = iVar47;
          auVar43._0_4_ = iVar47;
          auVar43._8_4_ = iVar49;
          auVar43._12_4_ = iVar49;
          auVar50 = pshuflw(in_XMM11,auVar43,0xe8);
          auVar35._4_4_ = -(uint)(auVar32._4_4_ == iVar29);
          auVar35._12_4_ = -(uint)(auVar32._12_4_ == iVar30);
          auVar35._0_4_ = auVar35._4_4_;
          auVar35._8_4_ = auVar35._12_4_;
          auVar52 = pshuflw(in_XMM12,auVar35,0xe8);
          auVar33._0_4_ = auVar33._4_4_;
          auVar33._8_4_ = auVar33._12_4_;
          auVar51 = pshuflw(auVar50,auVar33,0xe8);
          auVar32._8_4_ = 0xffffffff;
          auVar32._0_8_ = 0xffffffffffffffff;
          auVar32._12_4_ = 0xffffffff;
          auVar32 = (auVar51 | auVar52 & auVar50) ^ auVar32;
          auVar32 = packssdw(auVar32,auVar32);
          if ((auVar32._0_4_ & 1) != 0) {
            *psVar20 = sVar18;
          }
          auVar33 = auVar35 & auVar43 | auVar33;
          auVar32 = packssdw(auVar33,auVar33);
          auVar51._8_4_ = 0xffffffff;
          auVar51._0_8_ = 0xffffffffffffffff;
          auVar51._12_4_ = 0xffffffff;
          auVar32 = packssdw(auVar32 ^ auVar51,auVar32 ^ auVar51);
          if ((auVar32._0_4_ >> 0x10 & 1) != 0) {
            psVar20[uVar24] = sVar18;
          }
          auVar32 = (auVar40 | auVar11) ^ auVar13;
          iVar47 = -(uint)(iVar41 < auVar32._0_4_);
          auVar48._4_4_ = -(uint)(iVar29 < auVar32._4_4_);
          iVar49 = -(uint)(iVar46 < auVar32._8_4_);
          auVar48._12_4_ = -(uint)(iVar30 < auVar32._12_4_);
          auVar34._4_4_ = iVar47;
          auVar34._0_4_ = iVar47;
          auVar34._8_4_ = iVar49;
          auVar34._12_4_ = iVar49;
          auVar42._4_4_ = -(uint)(auVar32._4_4_ == iVar29);
          auVar42._12_4_ = -(uint)(auVar32._12_4_ == iVar30);
          auVar42._0_4_ = auVar42._4_4_;
          auVar42._8_4_ = auVar42._12_4_;
          auVar48._0_4_ = auVar48._4_4_;
          auVar48._8_4_ = auVar48._12_4_;
          auVar32 = auVar42 & auVar34 | auVar48;
          auVar32 = packssdw(auVar32,auVar32);
          auVar6._8_4_ = 0xffffffff;
          auVar6._0_8_ = 0xffffffffffffffff;
          auVar6._12_4_ = 0xffffffff;
          auVar32 = packssdw(auVar32 ^ auVar6,auVar32 ^ auVar6);
          if ((auVar32._4_2_ & 1) != 0) {
            psVar20[uVar24 * 2] = sVar18;
          }
          auVar35 = pshufhw(auVar34,auVar34,0x84);
          auVar43 = pshufhw(auVar42,auVar42,0x84);
          auVar33 = pshufhw(auVar35,auVar48,0x84);
          auVar36._8_4_ = 0xffffffff;
          auVar36._0_8_ = 0xffffffffffffffff;
          auVar36._12_4_ = 0xffffffff;
          auVar36 = (auVar33 | auVar43 & auVar35) ^ auVar36;
          auVar35 = packssdw(auVar36,auVar36);
          if ((auVar35._6_2_ & 1) != 0) {
            psVar20[uVar24 * 3] = sVar18;
          }
          auVar35 = (auVar40 | auVar10) ^ auVar13;
          iVar47 = -(uint)(iVar41 < auVar35._0_4_);
          auVar38._4_4_ = -(uint)(iVar29 < auVar35._4_4_);
          iVar49 = -(uint)(iVar46 < auVar35._8_4_);
          auVar38._12_4_ = -(uint)(iVar30 < auVar35._12_4_);
          auVar44._4_4_ = iVar47;
          auVar44._0_4_ = iVar47;
          auVar44._8_4_ = iVar49;
          auVar44._12_4_ = iVar49;
          auVar32 = pshuflw(auVar32,auVar44,0xe8);
          auVar37._4_4_ = -(uint)(auVar35._4_4_ == iVar29);
          auVar37._12_4_ = -(uint)(auVar35._12_4_ == iVar30);
          auVar37._0_4_ = auVar37._4_4_;
          auVar37._8_4_ = auVar37._12_4_;
          auVar35 = pshuflw(auVar52 & auVar50,auVar37,0xe8);
          in_XMM12 = auVar35 & auVar32;
          auVar38._0_4_ = auVar38._4_4_;
          auVar38._8_4_ = auVar38._12_4_;
          auVar32 = pshuflw(auVar32,auVar38,0xe8);
          auVar50._8_4_ = 0xffffffff;
          auVar50._0_8_ = 0xffffffffffffffff;
          auVar50._12_4_ = 0xffffffff;
          auVar50 = (auVar32 | in_XMM12) ^ auVar50;
          in_XMM11 = packssdw(auVar50,auVar50);
          if ((in_XMM11._8_2_ & 1) != 0) {
            psVar20[uVar24 * 4] = sVar18;
          }
          auVar38 = auVar37 & auVar44 | auVar38;
          auVar32 = packssdw(auVar38,auVar38);
          auVar52._8_4_ = 0xffffffff;
          auVar52._0_8_ = 0xffffffffffffffff;
          auVar52._12_4_ = 0xffffffff;
          auVar32 = packssdw(auVar32 ^ auVar52,auVar32 ^ auVar52);
          if ((auVar32._10_2_ & 1) != 0) {
            psVar20[uVar24 * 5] = sVar18;
          }
          auVar32 = (auVar40 | auVar9) ^ auVar13;
          iVar41 = -(uint)(iVar41 < auVar32._0_4_);
          auVar45._4_4_ = -(uint)(iVar29 < auVar32._4_4_);
          iVar46 = -(uint)(iVar46 < auVar32._8_4_);
          auVar45._12_4_ = -(uint)(iVar30 < auVar32._12_4_);
          auVar39._4_4_ = iVar41;
          auVar39._0_4_ = iVar41;
          auVar39._8_4_ = iVar46;
          auVar39._12_4_ = iVar46;
          auVar31._4_4_ = -(uint)(auVar32._4_4_ == iVar29);
          auVar31._12_4_ = -(uint)(auVar32._12_4_ == iVar30);
          auVar31._0_4_ = auVar31._4_4_;
          auVar31._8_4_ = auVar31._12_4_;
          auVar45._0_4_ = auVar45._4_4_;
          auVar45._8_4_ = auVar45._12_4_;
          auVar32 = auVar31 & auVar39 | auVar45;
          auVar32 = packssdw(auVar32,auVar32);
          auVar7._8_4_ = 0xffffffff;
          auVar7._0_8_ = 0xffffffffffffffff;
          auVar7._12_4_ = 0xffffffff;
          auVar32 = packssdw(auVar32 ^ auVar7,auVar32 ^ auVar7);
          if ((auVar32._12_2_ & 1) != 0) {
            psVar20[uVar24 * 6] = sVar18;
          }
          auVar40 = pshufhw(auVar39,auVar39,0x84);
          auVar32 = pshufhw(auVar31,auVar31,0x84);
          auVar35 = pshufhw(auVar40,auVar45,0x84);
          auVar8._8_4_ = 0xffffffff;
          auVar8._0_8_ = 0xffffffffffffffff;
          auVar8._12_4_ = 0xffffffff;
          auVar32 = packssdw(auVar32 & auVar40,(auVar35 | auVar32 & auVar40) ^ auVar8);
          if ((auVar32._14_2_ & 1) != 0) {
            psVar20[uVar24 * 7] = sVar18;
          }
          uVar22 = uVar22 + 8;
          psVar20 = psVar20 + uVar24 * 8;
        } while ((uVar17 + uVar26 + 8 & 0xfffffffffffffff8) != uVar22);
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != uVar27);
  }
LAB_0005d133:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar25;
}

