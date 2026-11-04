// rea decompile_all
// name: __tr_flush_block
// address: 0x82619
// body: available
// range: 0x82619-0x82fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x82f98 to 0x8388c _bi_windup (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __tr_flush_block(long *param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  long lVar5;
  byte bVar6;
  undefined4 uVar7;
  ulong uVar8;
  ushort uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  undefined *puVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar20;
  undefined1 auVar19 [16];
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  
  if (*(int *)((long)param_1 + 0xb4) < 1) {
    uVar8 = param_3 + 5;
    uVar14 = 0;
    uVar12 = uVar8;
  }
  else {
    if (*(int *)(*param_1 + 0x58) == 2) {
      uVar8 = 0xf3ffc07f;
      lVar11 = 0;
      do {
        if (((uVar8 & 1) != 0) && (*(short *)((long)param_1 + lVar11 * 4 + 0xc4) != 0)) {
          uVar7 = 0;
          goto LAB_000826a1;
        }
        lVar11 = lVar11 + 1;
        uVar8 = uVar8 >> 1;
      } while (lVar11 != 0x20);
      if ((((short)param_1[0x1d] == 0) && (*(short *)((long)param_1 + 0xec) == 0)) &&
         ((short)param_1[0x1f] == 0)) {
        lVar11 = 0;
        uVar7 = 0;
        do {
          if (*(short *)((long)param_1 + lVar11 * 4 + 0x144) != 0) goto LAB_0008268a;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0xe0);
      }
      else {
LAB_0008268a:
        uVar7 = 1;
      }
LAB_000826a1:
      *(undefined4 *)(*param_1 + 0x58) = uVar7;
    }
    _build_tree(param_1,param_1 + 0x169);
    _build_tree(param_1,param_1 + 0x16c);
    _scan_tree(param_1,(long)param_1 + 0xc4,(int)param_1[0x16a]);
    _scan_tree(param_1,param_1 + 0x137,(int)param_1[0x16d]);
    _build_tree(param_1,param_1 + 0x16f);
    uVar8 = 0x12;
    do {
      uVar14 = (uint)uVar8;
      if (*(short *)((long)param_1 + (ulong)(byte)(&_bl_order)[uVar8] * 4 + 0xaae) != 0)
      goto LAB_00082727;
      uVar8 = (ulong)(uVar14 - 1);
    } while (3 < uVar14);
    uVar14 = 2;
LAB_00082727:
    lVar5 = (long)(int)(uVar14 * 3 + 0x11);
    lVar11 = param_1[0x2e1];
    param_1[0x2e1] = lVar11 + lVar5;
    uVar12 = lVar11 + lVar5 + 10U >> 3;
    uVar8 = param_1[0x2e2] + 10U >> 3;
    if (uVar8 < uVar12) {
      uVar12 = uVar8;
    }
  }
  if ((param_2 == 0) || (uVar12 < param_3 + 4U)) {
    iVar4 = *(int *)((long)param_1 + 0x1724);
    bVar6 = (byte)iVar4;
    if ((uVar8 == uVar12) || ((int)param_1[0x17] == 4)) {
      uVar14 = param_4 + 2;
      if (iVar4 < 0xe) {
        *(ushort *)(param_1 + 0x2e4) =
             *(ushort *)(param_1 + 0x2e4) | (ushort)(uVar14 << (bVar6 & 0x1f));
        iVar4 = iVar4 + 3;
      }
      else {
        uVar9 = (ushort)(uVar14 << (bVar6 & 0x1f)) | *(ushort *)(param_1 + 0x2e4);
        *(ushort *)(param_1 + 0x2e4) = uVar9;
        uVar10 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar10 + 1;
        *(char *)(param_1[2] + (ulong)uVar10) = (char)uVar9;
        uVar10 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar10 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar10) = *(undefined1 *)((long)param_1 + 0x1721);
        *(short *)(param_1 + 0x2e4) =
             (short)((uVar14 & 0xffff) >> (0x10U - (char)*(int *)((long)param_1 + 0x1724) & 0x1f));
        iVar4 = *(int *)((long)param_1 + 0x1724) + -0xd;
      }
      *(int *)((long)param_1 + 0x1724) = iVar4;
      puVar15 = &_static_ltree;
      plVar13 = (long *)&_static_dtree;
    }
    else {
      uVar10 = param_4 + 4;
      if (iVar4 < 0xe) {
        uVar10 = (uint)(ushort)((ushort)(uVar10 << (bVar6 & 0x1f)) | *(ushort *)(param_1 + 0x2e4));
        iVar4 = iVar4 + 3;
      }
      else {
        uVar9 = (ushort)(uVar10 << (bVar6 & 0x1f)) | *(ushort *)(param_1 + 0x2e4);
        *(ushort *)(param_1 + 0x2e4) = uVar9;
        uVar1 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar1 + 1;
        *(char *)(param_1[2] + (ulong)uVar1) = (char)uVar9;
        uVar1 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar1 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar1) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar10 = (uVar10 & 0xffff) >> (0x10U - (char)*(int *)((long)param_1 + 0x1724) & 0x1f);
        iVar4 = *(int *)((long)param_1 + 0x1724) + -0xd;
      }
      *(int *)((long)param_1 + 0x1724) = iVar4;
      uVar1 = *(uint *)(param_1 + 0x16d);
      uVar16 = (int)param_1[0x16a] + 0xff00;
      if (iVar4 < 0xc) {
        uVar10 = uVar10 | uVar16 << ((byte)iVar4 & 0x1f);
        iVar4 = iVar4 + 5;
      }
      else {
        uVar10 = uVar10 | uVar16 << ((byte)iVar4 & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar10;
        uVar2 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar2 + 1;
        *(char *)(param_1[2] + (ulong)uVar2) = (char)uVar10;
        uVar10 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar10 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar10) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar10 = (uVar16 & 0xffff) >> (0x10U - (char)*(int *)((long)param_1 + 0x1724) & 0x1f);
        iVar4 = *(int *)((long)param_1 + 0x1724) + -0xb;
      }
      *(int *)((long)param_1 + 0x1724) = iVar4;
      if (iVar4 < 0xc) {
        uVar10 = uVar10 | uVar1 << ((byte)iVar4 & 0x1f);
        iVar4 = iVar4 + 5;
      }
      else {
        uVar10 = uVar10 | uVar1 << ((byte)iVar4 & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar10;
        uVar16 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar16 + 1;
        *(char *)(param_1[2] + (ulong)uVar16) = (char)uVar10;
        uVar10 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar10 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar10) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar10 = (uVar1 & 0xffff) >> (0x10U - (char)*(int *)((long)param_1 + 0x1724) & 0x1f);
        iVar4 = *(int *)((long)param_1 + 0x1724) + -0xb;
      }
      *(int *)((long)param_1 + 0x1724) = iVar4;
      uVar16 = uVar14 + 0xfffd;
      if (iVar4 < 0xd) {
        uVar10 = uVar10 | uVar16 << ((byte)iVar4 & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar10;
        iVar4 = iVar4 + 4;
      }
      else {
        uVar10 = uVar10 | uVar16 << ((byte)iVar4 & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar10;
        uVar2 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar2 + 1;
        *(char *)(param_1[2] + (ulong)uVar2) = (char)uVar10;
        uVar10 = *(uint *)(param_1 + 5);
        *(uint *)(param_1 + 5) = uVar10 + 1;
        *(undefined1 *)(param_1[2] + (ulong)uVar10) = *(undefined1 *)((long)param_1 + 0x1721);
        uVar10 = (uVar16 & 0xffff) >> (0x10U - (char)*(int *)((long)param_1 + 0x1724) & 0x1f);
        *(short *)(param_1 + 0x2e4) = (short)uVar10;
        iVar4 = *(int *)((long)param_1 + 0x1724) + -0xc;
      }
      *(int *)((long)param_1 + 0x1724) = iVar4;
      if (-1 < (int)uVar14) {
        uVar8 = 0;
        do {
          uVar9 = *(ushort *)((long)param_1 + (ulong)(byte)(&_bl_order)[uVar8] * 4 + 0xaae);
          uVar10 = uVar10 | (uint)uVar9 << ((byte)iVar4 & 0x1f);
          *(short *)(param_1 + 0x2e4) = (short)uVar10;
          if (iVar4 < 0xe) {
            iVar4 = iVar4 + 3;
          }
          else {
            uVar16 = *(uint *)(param_1 + 5);
            *(uint *)(param_1 + 5) = uVar16 + 1;
            *(char *)(param_1[2] + (ulong)uVar16) = (char)uVar10;
            uVar10 = *(uint *)(param_1 + 5);
            *(uint *)(param_1 + 5) = uVar10 + 1;
            *(undefined1 *)(param_1[2] + (ulong)uVar10) = *(undefined1 *)((long)param_1 + 0x1721);
            uVar9 = uVar9 >> (0x10U - (char)*(int *)((long)param_1 + 0x1724) & 0x1f);
            *(ushort *)(param_1 + 0x2e4) = uVar9;
            iVar4 = *(int *)((long)param_1 + 0x1724) + -0xd;
            uVar10 = (uint)uVar9;
          }
          *(int *)((long)param_1 + 0x1724) = iVar4;
          uVar8 = uVar8 + 1;
        } while (uVar14 + 1 != uVar8);
      }
      puVar15 = (undefined *)((long)param_1 + 0xc4);
      _send_tree(param_1,puVar15);
      plVar13 = param_1 + 0x137;
      _send_tree(param_1,plVar13,uVar1);
    }
    _compress_block(param_1,puVar15,plVar13);
  }
  else {
    __tr_stored_block(param_1,param_2,param_3,param_4);
  }
  auVar3 = _DAT_0032b310;
  lVar11 = 0x38;
  auVar37 = _DAT_0032b090;
  auVar26 = _DAT_0032b0a0;
  auVar22 = _DAT_0032b2f0;
  auVar24 = _DAT_0032b300;
  do {
    auVar27 = auVar24 ^ auVar3;
    iVar4 = auVar27._0_4_;
    iVar20 = auVar27._8_4_;
    auVar33._4_4_ = iVar4;
    auVar33._0_4_ = iVar4;
    auVar33._8_4_ = iVar20;
    auVar33._12_4_ = iVar20;
    auVar42._0_4_ = -(uint)(iVar4 < -0x7ffffee2);
    auVar42._4_4_ = -(uint)(iVar4 < -0x7ffffee2);
    auVar42._8_4_ = -(uint)(iVar20 < -0x7ffffee2);
    auVar42._12_4_ = -(uint)(iVar20 < -0x7ffffee2);
    auVar28._0_4_ = -(uint)(auVar27._4_4_ == -0x80000000);
    auVar28._4_4_ = -(uint)(auVar27._4_4_ == -0x80000000);
    auVar28._8_4_ = -(uint)(auVar27._12_4_ == -0x80000000);
    auVar28._12_4_ = -(uint)(auVar27._12_4_ == -0x80000000);
    auVar28 = auVar28 & auVar42;
    auVar27 = pshuflw(auVar33,auVar28,0xe8);
    auVar27 = packssdw(auVar27,auVar27);
    if ((auVar27._0_4_ & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -0x1c) = 0;
    }
    auVar27 = packssdw(auVar28,auVar28);
    auVar27 = packssdw(auVar27,auVar27);
    if ((auVar27._0_4_ >> 0x10 & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -0x18) = 0;
    }
    auVar27 = auVar22 ^ auVar3;
    iVar4 = auVar27._0_4_;
    iVar20 = auVar27._8_4_;
    auVar34._4_4_ = iVar4;
    auVar34._0_4_ = iVar4;
    auVar34._8_4_ = iVar20;
    auVar34._12_4_ = iVar20;
    auVar43._0_4_ = -(uint)(iVar4 < -0x7ffffee2);
    auVar43._4_4_ = -(uint)(iVar4 < -0x7ffffee2);
    auVar43._8_4_ = -(uint)(iVar20 < -0x7ffffee2);
    auVar43._12_4_ = -(uint)(iVar20 < -0x7ffffee2);
    auVar29._0_4_ = -(uint)(auVar27._4_4_ == -0x80000000);
    auVar29._4_4_ = -(uint)(auVar27._4_4_ == -0x80000000);
    auVar29._8_4_ = -(uint)(auVar27._12_4_ == -0x80000000);
    auVar29._12_4_ = -(uint)(auVar27._12_4_ == -0x80000000);
    auVar29 = auVar29 & auVar43;
    auVar27 = packssdw(auVar34,auVar29);
    auVar27 = packssdw(auVar27,auVar27);
    if ((auVar27._4_2_ & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -0x14) = 0;
    }
    auVar27 = pshufhw(auVar29,auVar29,0x84);
    auVar27 = packssdw(auVar27,auVar27);
    if ((auVar27._6_2_ & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -0x10) = 0;
    }
    auVar27 = auVar26 ^ auVar3;
    iVar4 = auVar27._0_4_;
    iVar20 = auVar27._8_4_;
    auVar35._4_4_ = iVar4;
    auVar35._0_4_ = iVar4;
    auVar35._8_4_ = iVar20;
    auVar35._12_4_ = iVar20;
    auVar44._0_4_ = -(uint)(iVar4 < -0x7ffffee2);
    auVar44._4_4_ = -(uint)(iVar4 < -0x7ffffee2);
    auVar44._8_4_ = -(uint)(iVar20 < -0x7ffffee2);
    auVar44._12_4_ = -(uint)(iVar20 < -0x7ffffee2);
    auVar30._0_4_ = -(uint)(auVar27._4_4_ == -0x80000000);
    auVar30._4_4_ = -(uint)(auVar27._4_4_ == -0x80000000);
    auVar30._8_4_ = -(uint)(auVar27._12_4_ == -0x80000000);
    auVar30._12_4_ = -(uint)(auVar27._12_4_ == -0x80000000);
    auVar30 = auVar30 & auVar44;
    auVar27 = pshuflw(auVar35,auVar30,0xe8);
    auVar27 = packssdw(auVar27,auVar27);
    if ((auVar27._8_2_ & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -0xc) = 0;
    }
    auVar27 = packssdw(auVar30,auVar30);
    auVar27 = packssdw(auVar27,auVar27);
    if ((auVar27._10_2_ & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -8) = 0;
    }
    auVar27 = auVar37 ^ auVar3;
    iVar4 = auVar27._0_4_;
    iVar20 = auVar27._8_4_;
    auVar36._4_4_ = iVar4;
    auVar36._0_4_ = iVar4;
    auVar36._8_4_ = iVar20;
    auVar36._12_4_ = iVar20;
    auVar45._0_4_ = -(uint)(iVar4 < -0x7ffffee2);
    auVar45._4_4_ = -(uint)(iVar4 < -0x7ffffee2);
    auVar45._8_4_ = -(uint)(iVar20 < -0x7ffffee2);
    auVar45._12_4_ = -(uint)(iVar20 < -0x7ffffee2);
    auVar31._0_4_ = -(uint)(auVar27._4_4_ == -0x80000000);
    auVar31._4_4_ = -(uint)(auVar27._4_4_ == -0x80000000);
    auVar31._8_4_ = -(uint)(auVar27._12_4_ == -0x80000000);
    auVar31._12_4_ = -(uint)(auVar27._12_4_ == -0x80000000);
    auVar31 = auVar31 & auVar45;
    auVar27 = packssdw(auVar36,auVar31);
    auVar27 = packssdw(auVar27,auVar27);
    if ((auVar27._12_2_ & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -4) = 0;
    }
    auVar27 = pshufhw(auVar31,auVar31,0x84);
    auVar27 = packssdw(auVar27,auVar27);
    if ((auVar27._14_2_ & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4) = 0;
    }
    lVar5 = auVar24._8_8_;
    auVar24._0_8_ = auVar24._0_8_ + 8;
    auVar24._8_8_ = lVar5 + 8;
    lVar5 = auVar22._8_8_;
    auVar22._0_8_ = auVar22._0_8_ + 8;
    auVar22._8_8_ = lVar5 + 8;
    lVar5 = auVar26._8_8_;
    auVar26._0_8_ = auVar26._0_8_ + 8;
    auVar26._8_8_ = lVar5 + 8;
    lVar5 = auVar37._8_8_;
    auVar37._0_8_ = auVar37._0_8_ + 8;
    auVar37._8_8_ = lVar5 + 8;
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x158);
  lVar11 = 0x275;
  auVar27 = _DAT_0032b090;
  auVar19 = _DAT_0032b0a0;
  auVar23 = _DAT_0032b2f0;
  auVar25 = _DAT_0032b300;
  do {
    auVar37 = auVar25 ^ auVar3;
    auVar46._0_4_ = -(uint)(auVar37._0_4_ < -0x7fffffe2);
    auVar46._4_4_ = -(uint)(auVar37._0_4_ < -0x7fffffe2);
    auVar46._8_4_ = -(uint)(auVar37._8_4_ < -0x7fffffe2);
    auVar46._12_4_ = -(uint)(auVar37._8_4_ < -0x7fffffe2);
    auVar38._0_4_ = -(uint)(auVar37._4_4_ == -0x80000000);
    auVar38._4_4_ = -(uint)(auVar37._4_4_ == -0x80000000);
    auVar38._8_4_ = -(uint)(auVar37._12_4_ == -0x80000000);
    auVar38._12_4_ = -(uint)(auVar37._12_4_ == -0x80000000);
    auVar38 = auVar38 & auVar46;
    auVar37 = pshuflw(auVar46,auVar38,0xe8);
    auVar37 = packssdw(auVar37,auVar37);
    if ((auVar37._0_4_ & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -0x1c) = 0;
    }
    auVar37 = packssdw(auVar38,auVar38);
    auVar37 = packssdw(auVar37,auVar37);
    if ((auVar37._0_4_ >> 0x10 & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -0x18) = 0;
    }
    auVar37 = auVar23 ^ auVar3;
    iVar4 = auVar37._0_4_;
    iVar20 = auVar37._8_4_;
    auVar47._4_4_ = iVar4;
    auVar47._0_4_ = iVar4;
    auVar47._8_4_ = iVar20;
    auVar47._12_4_ = iVar20;
    auVar49._0_4_ = -(uint)(iVar4 < -0x7fffffe2);
    auVar49._4_4_ = -(uint)(iVar4 < -0x7fffffe2);
    auVar49._8_4_ = -(uint)(iVar20 < -0x7fffffe2);
    auVar49._12_4_ = -(uint)(iVar20 < -0x7fffffe2);
    auVar39._0_4_ = -(uint)(auVar37._4_4_ == -0x80000000);
    auVar39._4_4_ = -(uint)(auVar37._4_4_ == -0x80000000);
    auVar39._8_4_ = -(uint)(auVar37._12_4_ == -0x80000000);
    auVar39._12_4_ = -(uint)(auVar37._12_4_ == -0x80000000);
    auVar39 = auVar39 & auVar49;
    auVar37 = packssdw(auVar47,auVar39);
    auVar37 = packssdw(auVar37,auVar37);
    if ((auVar37._4_2_ & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -0x14) = 0;
    }
    auVar37 = pshufhw(auVar39,auVar39,0x84);
    auVar37 = packssdw(auVar37,auVar37);
    if ((auVar37._6_2_ & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -0x10) = 0;
    }
    auVar37 = auVar19 ^ auVar3;
    iVar4 = auVar37._0_4_;
    iVar20 = auVar37._8_4_;
    auVar48._4_4_ = iVar4;
    auVar48._0_4_ = iVar4;
    auVar48._8_4_ = iVar20;
    auVar48._12_4_ = iVar20;
    auVar50._0_4_ = -(uint)(iVar4 < -0x7fffffe2);
    auVar50._4_4_ = -(uint)(iVar4 < -0x7fffffe2);
    auVar50._8_4_ = -(uint)(iVar20 < -0x7fffffe2);
    auVar50._12_4_ = -(uint)(iVar20 < -0x7fffffe2);
    auVar40._0_4_ = -(uint)(auVar37._4_4_ == -0x80000000);
    auVar40._4_4_ = -(uint)(auVar37._4_4_ == -0x80000000);
    auVar40._8_4_ = -(uint)(auVar37._12_4_ == -0x80000000);
    auVar40._12_4_ = -(uint)(auVar37._12_4_ == -0x80000000);
    auVar40 = auVar40 & auVar50;
    auVar37 = pshuflw(auVar48,auVar40,0xe8);
    auVar37 = packssdw(auVar37,auVar37);
    if ((auVar37._8_2_ & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -0xc) = 0;
    }
    auVar37 = packssdw(auVar40,auVar40);
    auVar37 = packssdw(auVar37,auVar37);
    if ((auVar37._10_2_ & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -8) = 0;
    }
    auVar37 = auVar27 ^ auVar3;
    auVar41._4_4_ = auVar37._4_4_;
    auVar41._12_4_ = auVar37._12_4_;
    auVar51._0_4_ = -(uint)(auVar37._0_4_ < -0x7fffffe2);
    auVar51._4_4_ = -(uint)(auVar37._0_4_ < -0x7fffffe2);
    auVar51._8_4_ = -(uint)(auVar37._8_4_ < -0x7fffffe2);
    auVar51._12_4_ = -(uint)(auVar37._8_4_ < -0x7fffffe2);
    auVar41._0_4_ = auVar41._4_4_;
    auVar41._8_4_ = auVar41._12_4_;
    auVar32._0_4_ = -(uint)(auVar41._4_4_ == -0x80000000);
    auVar32._4_4_ = -(uint)(auVar41._4_4_ == -0x80000000);
    auVar32._8_4_ = -(uint)(auVar41._12_4_ == -0x80000000);
    auVar32._12_4_ = -(uint)(auVar41._12_4_ == -0x80000000);
    auVar32 = auVar32 & auVar51;
    auVar37 = packssdw(auVar41,auVar32);
    auVar37 = packssdw(auVar37,auVar37);
    if ((auVar37._12_2_ & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -4) = 0;
    }
    auVar37 = pshufhw(auVar32,auVar32,0x84);
    auVar37 = packssdw(auVar37,auVar37);
    if ((auVar37._14_2_ & 1) != 0) {
      *(undefined2 *)((long)param_1 + lVar11 * 4) = 0;
    }
    auVar37 = _DAT_0032b270;
    lVar5 = auVar25._8_8_;
    auVar25._0_8_ = auVar25._0_8_ + 8;
    auVar25._8_8_ = lVar5 + 8;
    lVar5 = auVar23._8_8_;
    auVar23._0_8_ = auVar23._0_8_ + 8;
    auVar23._8_8_ = lVar5 + 8;
    lVar5 = auVar19._8_8_;
    auVar19._0_8_ = auVar19._0_8_ + 8;
    auVar19._8_8_ = lVar5 + 8;
    lVar5 = auVar27._8_8_;
    auVar27._0_8_ = auVar27._0_8_ + 8;
    auVar27._8_8_ = lVar5 + 8;
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x295);
  lVar11 = 0x2ae;
  iVar4 = (int)DAT_0032b270;
  iVar20 = DAT_0032b270._4_4_;
  iVar21 = DAT_0032b270._12_4_;
  auVar17 = _DAT_0032b2f0;
  auVar18 = _DAT_0032b300;
  do {
    auVar26 = auVar18 ^ auVar3;
    if (auVar26._4_4_ == iVar20 && auVar26._0_4_ < iVar4) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -0xc) = 0;
    }
    if (auVar26._12_4_ == iVar21 && auVar26._8_4_ < auVar37._8_4_) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -8) = 0;
    }
    if (SUB164(auVar17 ^ auVar3,4) == iVar20 && SUB164(auVar17 ^ auVar3,0) < iVar4) {
      *(undefined2 *)((long)param_1 + lVar11 * 4 + -4) = 0;
      *(undefined2 *)((long)param_1 + lVar11 * 4) = 0;
    }
    lVar5 = auVar18._8_8_;
    auVar18._0_8_ = auVar18._0_8_ + 4;
    auVar18._8_8_ = lVar5 + 4;
    lVar5 = auVar17._8_8_;
    auVar17._0_8_ = auVar17._0_8_ + 4;
    auVar17._8_8_ = lVar5 + 4;
    lVar11 = lVar11 + 4;
  } while (lVar11 != 0x2c2);
  *(undefined2 *)((long)param_1 + 0x4c4) = 1;
  *(undefined4 *)((long)param_1 + 0x16fc) = 0;
  *(undefined1 (*) [16])(param_1 + 0x2e1) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x2e3) = 0;
  if (param_4 != 0) {
    _bi_windup(param_1);
    return;
  }
  return;
}

