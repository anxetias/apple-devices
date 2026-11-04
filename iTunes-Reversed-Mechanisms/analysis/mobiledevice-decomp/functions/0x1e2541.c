// rea decompile_all
// name: _smb_lz77h_encode_buffer
// address: 0x1e2541
// body: available
// range: 0x1e2541-0x1e319d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1e3199 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long _smb_lz77h_encode_buffer(long param_1,long param_2,long param_3,ulong param_4,long param_5)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  ushort *puVar5;
  uint *puVar6;
  short *psVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ulong uVar12;
  int iVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  short sVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 (*pauVar23) [16];
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  byte bVar27;
  byte bVar28;
  short sVar29;
  int iVar30;
  int iVar31;
  long lVar32;
  undefined1 (*pauVar33) [16];
  int iVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  long lVar43;
  uint uVar44;
  ulong uVar45;
  ulong uVar46;
  long lVar47;
  uint uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  uint local_a4;
  long local_98;
  long local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined2 local_68;
  ushort uStack_5a;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(param_5);
  lVar1 = param_5 + 0x25560;
  pvVar2 = (void *)(param_5 + 0x28d60);
  pvVar3 = (void *)(param_5 + 0x28560);
  lVar4 = param_5 + 0x29160;
  lVar26 = 0;
  uVar37 = 0;
  do {
    if (param_4 <= uVar37) goto LAB_001e3177;
    uVar25 = uVar37 + 0x10000;
    if (param_4 <= uVar37 + 0x10000) {
      uVar25 = param_4;
    }
    uVar24 = 8;
    if (8 < uVar25) {
      uVar24 = uVar25;
    }
    uVar22 = uVar37 + 1;
    ___bzero(lVar1);
    local_a4 = 1;
    if (uVar22 < uVar25) {
      iVar30 = 0;
      local_a4 = 1;
      uVar36 = uVar22;
      do {
        if (param_4 < uVar36 + 4) {
LAB_001e267b:
          uVar22 = uVar36 + 1;
        }
        else {
          lVar47 = param_5 + (ulong)((*(uint *)(param_3 + uVar36) & 0xffffff) * -0x61c8864f >> 0x11)
                             * 2;
          uVar35 = 2;
          lVar39 = 0;
          uVar22 = 0;
          uVar45 = uVar36 & 0xffffffff;
          do {
            uVar46 = (ulong)*(ushort *)(lVar47 + lVar39 * 2) | (ulong)((uint)uVar36 & 0xffff0000);
            *(short *)(lVar47 + lVar39 * 2) = (short)uVar45;
            if (uVar36 != uVar46) {
              uVar45 = (ulong)((int)uVar46 - 0x10000);
              if (uVar46 < uVar36) {
                uVar45 = uVar46;
              }
              uVar20 = 0;
              if (uVar36 < uVar24 - 8) {
                uVar21 = 0;
LAB_001e26f9:
                uVar12 = *(ulong *)(param_3 + uVar36 + uVar21);
                uVar38 = *(ulong *)(uVar45 + param_3 + uVar21);
                if (uVar12 == uVar38) goto code_r0x001e2706;
                uVar38 = uVar38 ^ uVar12;
                uVar12 = 0;
                if (uVar38 != 0) {
                  for (; (uVar38 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
                  }
                }
                uVar20 = ((uint)(uVar12 >> 3) & 0x1fffffff) + (int)uVar21;
              }
LAB_001e2722:
              uVar41 = (uint)uVar35;
              uVar48 = uVar20;
              if (uVar20 < uVar41) {
                uVar48 = uVar41;
              }
              if (uVar41 < uVar20) {
                uVar22 = uVar45;
              }
              uVar35 = (ulong)uVar48;
            }
            lVar39 = lVar39 + 1;
            uVar45 = uVar46;
          } while (lVar39 != 3);
          if ((uint)uVar35 < 4) {
            if (((uint)uVar35 != 3) || (uVar22 = uVar36 - uVar22, 0xff < uVar22)) goto LAB_001e267b;
          }
          else {
            uVar22 = uVar36 - uVar22;
          }
          puVar6 = (uint *)(param_5 + 0x25560 + (ulong)(local_a4 >> 5) * 4);
          *puVar6 = *puVar6 | 1 << ((byte)local_a4 & 0x1f);
          lVar47 = (long)iVar30;
          iVar30 = iVar30 + 1;
          *(short *)(param_5 + 0x10006 + lVar47 * 4) = (short)uVar22;
          *(short *)(param_5 + 0x10008 + lVar47 * 4) = (short)uVar35;
          uVar35 = uVar35 + uVar36;
          uVar22 = uVar36 + 1;
          uVar45 = uVar22;
          if (uVar22 < uVar35) {
            do {
              uVar46 = uVar45;
              if (uVar36 + 5 <= param_4) {
                lVar47 = param_5 + (ulong)((*(uint *)(param_3 + uVar46) & 0xffffff) * -0x61c8864f >>
                                          0x11) * 2;
                lVar39 = 0;
                uVar22 = uVar46 & 0xffffffff;
                do {
                  uVar8 = *(ushort *)(lVar47 + lVar39 * 2);
                  *(short *)(lVar47 + lVar39 * 2) = (short)uVar22;
                  lVar39 = lVar39 + 1;
                  uVar22 = (ulong)uVar8;
                } while (lVar39 != 3);
              }
              uVar22 = uVar35;
              uVar45 = uVar46 + 1;
              uVar36 = uVar46;
            } while (uVar46 + 1 != uVar35);
          }
        }
        local_a4 = local_a4 + 1;
        uVar36 = uVar22;
      } while (uVar22 < uVar25);
    }
    pauVar23 = (undefined1 (*) [16])(param_1 + lVar26);
    ___bzero(pvVar2,0x400);
    uVar20 = 0;
    lVar47 = 0x880;
    iVar30 = 0;
    iVar34 = 0;
    do {
      if ((*(uint *)(lVar1 + (ulong)(uVar20 >> 5) * 4) >> (uVar20 & 0x1f) & 1) == 0) {
        lVar39 = (long)iVar34;
        iVar34 = iVar34 + 1;
        psVar7 = (short *)((long)pvVar2 + (ulong)*(byte *)(uVar37 + param_3 + lVar39) * 2);
        *psVar7 = *psVar7 + 1;
      }
      else {
        lVar39 = (long)iVar30;
        iVar30 = iVar30 + 1;
        uVar8 = *(ushort *)(param_5 + 0x10006 + lVar39 * 4);
        uVar9 = *(ushort *)(param_5 + 0x10008 + lVar39 * 4);
        uVar48 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> uVar48 == 0; uVar48 = uVar48 - 1) {
          }
        }
        uVar41 = uVar9 - 3;
        if (0xe < uVar41) {
          uVar41 = 0xf;
        }
        iVar34 = iVar34 + (uint)uVar9;
        lVar47 = lVar47 + (ulong)uVar48;
        psVar7 = (short *)(param_5 + 0x28f60 + (ulong)(uVar48 * 0x20 + uVar41 * 2));
        *psVar7 = *psVar7 + 1;
        if (0x11 < uVar9) {
          lVar47 = lVar47 + (ulong)(0x110 < uVar9) * 0x10 + 8;
        }
      }
      uVar20 = uVar20 + 1;
    } while (local_a4 != uVar20);
    if (*(short *)(param_5 + 0x28f60) == 0) {
      *(undefined2 *)(param_5 + 0x28f60) = 1;
    }
    ___bzero(param_5 + 0x29d62,0x404);
    lVar39 = 0;
    uVar20 = 0;
    do {
      uVar8 = *(ushort *)((long)pvVar2 + lVar39 * 2);
      if (uVar8 != 0) {
        psVar7 = (short *)(param_5 + 0x29d64 + (ulong)(byte)uVar8 * 2);
        *psVar7 = *psVar7 + 1;
        psVar7 = (short *)(param_5 + 0x29f66 + (ulong)(uVar8 >> 8) * 2);
        *psVar7 = *psVar7 + 1;
        lVar32 = (long)(int)uVar20;
        uVar20 = uVar20 + 1;
        *(short *)(param_5 + 0x29560 + lVar32 * 2) = (short)lVar39;
      }
      lVar39 = lVar39 + 1;
    } while (lVar39 != 0x200);
    sVar19 = *(short *)(param_5 + 0x29d62);
    sVar29 = *(short *)(param_5 + 0x29f64);
    lVar39 = -0x1fe;
    do {
      sVar19 = sVar19 + *(short *)(param_5 + 0x29f62 + lVar39);
      *(short *)(param_5 + 0x29f62 + lVar39) = sVar19;
      sVar29 = sVar29 + *(short *)(param_5 + 0x2a164 + lVar39);
      *(short *)(param_5 + 0x2a164 + lVar39) = sVar29;
      lVar39 = lVar39 + 2;
    } while (lVar39 != 0);
    uVar25 = (ulong)uVar20;
    if (0 < (int)uVar20) {
      uVar24 = 0;
      do {
        uVar8 = *(ushort *)(param_5 + 0x29560 + uVar24 * 2);
        uVar36 = (ulong)*(byte *)(param_5 + 0x28d60 + (ulong)uVar8 * 2);
        uVar9 = *(ushort *)(param_5 + 0x29d62 + uVar36 * 2);
        *(ushort *)(param_5 + 0x29d62 + uVar36 * 2) = uVar9 + 1;
        *(ushort *)(param_5 + 0x29962 + (ulong)uVar9 * 2) = uVar8;
        uVar24 = uVar24 + 1;
      } while (uVar25 != uVar24);
      uVar24 = 0;
      do {
        uVar8 = *(ushort *)(param_5 + 0x29962 + uVar24 * 2);
        uVar36 = (ulong)*(byte *)(param_5 + 0x28d61 + (ulong)uVar8 * 2);
        uVar9 = *(ushort *)(param_5 + 0x29f64 + uVar36 * 2);
        *(ushort *)(param_5 + 0x29f64 + uVar36 * 2) = uVar9 + 1;
        *(ushort *)(param_5 + 0x29560 + (ulong)uVar9 * 2) = uVar8;
        uVar24 = uVar24 + 1;
      } while (uVar25 != uVar24);
    }
    _memcpy(pvVar3,pvVar2,0x400);
    *(undefined2 *)(param_5 + 0x28960) = 0xffff;
    *(undefined2 *)(param_5 + 0x29560 + (long)(int)uVar20 * 2) = 0x200;
    uVar48 = uVar20 + 0x1ff;
    uVar41 = 0x201;
    if (0x201 < (int)uVar48) {
      uVar41 = uVar48;
    }
    if ((int)uVar20 < 2) {
      ___bzero(lVar4,0x200);
      *(undefined1 *)(lVar4 + (int)uVar48) = 0;
    }
    else {
      uVar44 = 0x201;
      iVar30 = 0;
      uVar24 = 0x201;
      while( true ) {
        do {
          *(undefined2 *)(param_5 + 0x28560 + uVar24 * 2) = 0xffff;
          uVar8 = *(ushort *)(param_5 + 0x29560 + (long)iVar30 * 2);
          uVar9 = *(ushort *)(param_5 + 0x28560 + (ulong)uVar8 * 2);
          uVar10 = *(ushort *)(param_5 + 0x28560 + (long)(int)uVar44 * 2);
          uVar42 = (uint)uVar8;
          if (uVar10 < uVar9) {
            uVar42 = uVar44;
          }
          uVar44 = (uVar10 < uVar9) + uVar44;
          iVar30 = iVar30 + (uint)(uVar9 <= uVar10);
          uVar8 = *(ushort *)(param_5 + 0x29560 + (long)iVar30 * 2);
          uVar9 = *(ushort *)(param_5 + 0x28560 + (ulong)uVar8 * 2);
          uVar10 = *(ushort *)(param_5 + 0x28560 + (long)(int)uVar44 * 2);
          uVar40 = (uint)uVar8;
          if (uVar10 < uVar9) {
            uVar40 = uVar44;
          }
          uVar44 = (uVar10 < uVar9) + uVar44;
          iVar30 = iVar30 + (uint)(uVar9 <= uVar10);
          *(short *)(param_5 + 0x28560 + uVar24 * 2) =
               *(short *)(param_5 + 0x28560 + (long)(int)uVar40 * 2) +
               *(short *)(param_5 + 0x28560 + (long)(int)uVar42 * 2);
          *(short *)(param_5 + 0x2755c + uVar24 * 4) = (short)uVar42;
          *(short *)(param_5 + 0x2755e + uVar24 * 4) = (short)uVar40;
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar41 + 1);
        ___bzero(lVar4,0x200);
        *(undefined1 *)(lVar4 + (int)uVar48) = 0;
        uVar44 = 0;
        uVar24 = (ulong)uVar48;
        iVar30 = uVar20 + 0x200;
        do {
          uVar44 = uVar44 | 2 << (*(byte *)(lVar4 + uVar24) & 0x1f);
          *(byte *)(lVar4 + (ulong)*(ushort *)(param_5 + 0x2755c + uVar24 * 4)) =
               *(byte *)(lVar4 + uVar24) + 1;
          *(char *)(lVar4 + (ulong)*(ushort *)(param_5 + 0x2755e + uVar24 * 4)) =
               *(char *)(lVar4 + uVar24) + '\x01';
          uVar24 = uVar24 - 1;
          iVar30 = iVar30 + -1;
        } while (0x201 < iVar30);
        if (uVar44 < 0x10000) break;
        lVar39 = 0;
        do {
          puVar5 = (ushort *)((long)pvVar3 + lVar39 * 2);
          uVar8 = puVar5[1];
          uVar9 = puVar5[2];
          uVar10 = puVar5[3];
          uVar11 = puVar5[4];
          uVar14 = puVar5[5];
          uVar15 = puVar5[6];
          uVar16 = puVar5[7];
          psVar7 = (short *)((long)pvVar3 + lVar39 * 2);
          *psVar7 = *puVar5 - (*puVar5 >> 1);
          psVar7[1] = uVar8 - (uVar8 >> 1);
          psVar7[2] = uVar9 - (uVar9 >> 1);
          psVar7[3] = uVar10 - (uVar10 >> 1);
          psVar7[4] = uVar11 - (uVar11 >> 1);
          psVar7[5] = uVar14 - (uVar14 >> 1);
          psVar7[6] = uVar15 - (uVar15 >> 1);
          psVar7[7] = uVar16 - (uVar16 >> 1);
          lVar39 = lVar39 + 8;
        } while (lVar39 != 0x200);
        iVar30 = 0;
        uVar24 = 0x201;
        uVar44 = 0x201;
      }
    }
    auVar18 = _DAT_0032b180;
    auVar17 = _DAT_0032b170;
    local_48 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_88 = (undefined1  [16])0x0;
    local_68 = 0;
    lVar39 = -0x200;
    do {
      uVar24 = (ulong)((uint)*(byte *)(param_5 + 0x29360 + lVar39) * 2);
      *(short *)(local_58 + uVar24) = *(short *)(local_58 + uVar24) + *(short *)(lVar4 + lVar39 * 2)
      ;
      *(short *)(local_88 + uVar24 + 2) = *(short *)(local_88 + uVar24 + 2) + 1;
      lVar39 = lVar39 + 1;
    } while (lVar39 != 0);
    local_88._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar49._12_4_ = 0;
    auVar49._0_12_ = local_88._4_12_;
    local_88 = auVar49 << 0x20;
    lVar32 = 2;
    sVar19 = 0;
    lVar39 = 0;
    do {
      sVar19 = sVar19 + *(short *)(local_88 + lVar32 * 2);
      lVar39 = lVar39 + (ulong)(&uStack_5a)[lVar32] * (lVar32 + -1);
      *(short *)(local_88 + lVar32 * 2) = sVar19;
      lVar32 = lVar32 + 1;
    } while (lVar32 != 0x11);
    local_88._0_2_ = local_68;
    lVar32 = 0;
    do {
      uVar24 = (ulong)*(byte *)(param_5 + 0x29160 + lVar32);
      uVar8 = *(ushort *)(local_88 + uVar24 * 2);
      *(ushort *)(local_88 + uVar24 * 2) = uVar8 + 1;
      *(short *)(param_5 + 0x29560 + (ulong)uVar8 * 2) = (short)lVar32;
      lVar32 = lVar32 + 1;
    } while (lVar32 != 0x200);
    if (0 < (int)uVar20) {
      uVar24 = 0;
      uVar20 = 0;
      do {
        uVar36 = (ulong)*(ushort *)(param_5 + 0x29560 + uVar24 * 2);
        bVar28 = *(byte *)(param_5 + 0x29160 + uVar36);
        bVar27 = 0xf - bVar28;
        *(short *)(param_5 + 0x27560 + uVar36 * 4) = (short)((uVar20 & 0xffff) >> (bVar27 & 0x1f));
        *(ushort *)(param_5 + 0x27562 + uVar36 * 4) = (ushort)bVar28;
        uVar20 = (1 << (bVar27 & 0x1f)) + (uVar20 & 0xffff);
        uVar24 = uVar24 + 1;
      } while (uVar25 != uVar24);
    }
    if ((ulong)(param_2 - lVar26) < (ulong)(lVar39 + lVar47) >> 3) break;
    uVar25 = 0xffffffffffffffe0;
    pauVar33 = pauVar23;
    do {
      auVar49 = *(undefined1 (*) [16])(param_5 + 0x29180 + uVar25);
      auVar50 = *(undefined1 (*) [16])(param_5 + 0x29190 + uVar25);
      auVar51 = auVar50 & auVar17;
      auVar52 = auVar49 & auVar17;
      sVar19 = auVar52._0_2_;
      sVar29 = auVar52._2_2_;
      auVar53[1] = (0 < sVar29) * (sVar29 < 0x100) * auVar52[2] - (0xff < sVar29);
      auVar53[0] = (0 < sVar19) * (sVar19 < 0x100) * auVar52[0] - (0xff < sVar19);
      sVar19 = auVar52._4_2_;
      auVar53[2] = (0 < sVar19) * (sVar19 < 0x100) * auVar52[4] - (0xff < sVar19);
      sVar19 = auVar52._6_2_;
      auVar53[3] = (0 < sVar19) * (sVar19 < 0x100) * auVar52[6] - (0xff < sVar19);
      sVar19 = auVar52._8_2_;
      auVar53[4] = (0 < sVar19) * (sVar19 < 0x100) * auVar52[8] - (0xff < sVar19);
      sVar19 = auVar52._10_2_;
      auVar53[5] = (0 < sVar19) * (sVar19 < 0x100) * auVar52[10] - (0xff < sVar19);
      sVar19 = auVar52._12_2_;
      auVar53[6] = (0 < sVar19) * (sVar19 < 0x100) * auVar52[0xc] - (0xff < sVar19);
      sVar19 = auVar52._14_2_;
      auVar53[7] = (0 < sVar19) * (sVar19 < 0x100) * auVar52[0xe] - (0xff < sVar19);
      sVar19 = auVar51._0_2_;
      auVar53[8] = (0 < sVar19) * (sVar19 < 0x100) * auVar51[0] - (0xff < sVar19);
      sVar19 = auVar51._2_2_;
      auVar53[9] = (0 < sVar19) * (sVar19 < 0x100) * auVar51[2] - (0xff < sVar19);
      sVar19 = auVar51._4_2_;
      auVar53[10] = (0 < sVar19) * (sVar19 < 0x100) * auVar51[4] - (0xff < sVar19);
      sVar19 = auVar51._6_2_;
      auVar53[0xb] = (0 < sVar19) * (sVar19 < 0x100) * auVar51[6] - (0xff < sVar19);
      sVar19 = auVar51._8_2_;
      auVar53[0xc] = (0 < sVar19) * (sVar19 < 0x100) * auVar51[8] - (0xff < sVar19);
      sVar19 = auVar51._10_2_;
      auVar53[0xd] = (0 < sVar19) * (sVar19 < 0x100) * auVar51[10] - (0xff < sVar19);
      sVar19 = auVar51._12_2_;
      auVar53[0xe] = (0 < sVar19) * (sVar19 < 0x100) * auVar51[0xc] - (0xff < sVar19);
      sVar19 = auVar51._14_2_;
      auVar53[0xf] = (0 < sVar19) * (sVar19 < 0x100) * auVar51[0xe] - (0xff < sVar19);
      auVar51 = pshufb(auVar50,ZEXT816(0xf0d0b0907050301));
      auVar49 = pshufb(auVar49,ZEXT816(0xf0d0b0907050301));
      auVar50._0_8_ = auVar49._0_8_;
      auVar50._8_8_ = auVar51._0_8_;
      auVar49 = psllw(auVar50,4);
      *pauVar33 = auVar49 & auVar18 | auVar53;
      uVar25 = uVar25 + 0x20;
      pauVar33 = pauVar33 + 1;
    } while (uVar25 < 0x1e0);
    local_90 = 0x100;
    local_98 = 0x102;
    iVar34 = 0x10;
    lVar39 = 0;
    iVar30 = 0;
    uVar48 = 0;
    lVar47 = 0x104;
    uVar20 = 0;
    do {
      bVar28 = (byte)iVar34;
      if ((*(uint *)(lVar1 + (ulong)(uVar48 >> 5) * 4) >> (uVar48 & 0x1f) & 1) == 0) {
        uVar25 = (ulong)*(byte *)(uVar37 + param_3 + lVar39);
        lVar39 = lVar39 + 1;
        uVar8 = *(ushort *)(param_5 + 0x27562 + uVar25 * 4);
        uVar9 = *(ushort *)(param_5 + 0x27560 + uVar25 * 4);
        uVar41 = (uint)uVar9;
        if (iVar34 < (int)(uint)uVar8) {
          *(ushort *)(*pauVar23 + local_90) =
               (short)(uVar20 << (bVar28 & 0x1f)) + (uVar9 >> ((byte)uVar8 - bVar28 & 0x1f));
          local_90 = local_98;
          lVar32 = lVar47 + 2;
          iVar34 = (iVar34 - (uint)uVar8) + 0x10;
          local_98 = lVar47;
        }
        else {
          uVar41 = uVar41 + (uVar20 << ((byte)uVar8 & 0x1f));
          lVar32 = lVar47;
          iVar34 = iVar34 - (uint)uVar8;
        }
      }
      else {
        uVar8 = *(ushort *)(param_5 + 0x10006 + (long)iVar30 * 4);
        uVar9 = *(ushort *)(param_5 + 0x10008 + (long)iVar30 * 4);
        iVar13 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar13 == 0; iVar13 = iVar13 + -1) {
          }
        }
        uVar44 = uVar9 - 3;
        uVar41 = 0xf;
        if (uVar44 < 0xf) {
          uVar41 = uVar44;
        }
        uVar25 = (ulong)(iVar13 * 0x40 + uVar41 * 4);
        uVar10 = *(ushort *)(param_5 + 0x27962 + uVar25);
        uVar41 = (uint)uVar10;
        uVar11 = *(ushort *)(param_5 + 0x27960 + uVar25);
        uVar42 = (uint)uVar11;
        iVar31 = uVar41 - iVar34;
        if (iVar31 == 0 || (int)uVar41 < iVar34) {
          uVar42 = uVar42 + (uVar20 << ((byte)uVar10 & 0x1f));
          lVar43 = lVar47;
        }
        else {
          iVar34 = iVar34 + 0x10;
          *(ushort *)(*pauVar23 + local_90) =
               (short)(uVar20 << (bVar28 & 0x1f)) + (uVar11 >> ((byte)iVar31 & 0x1f));
          local_90 = local_98;
          lVar43 = lVar47 + 2;
          local_98 = lVar47;
        }
        if (0x11 < uVar9) {
          if (uVar9 < 0x111) {
            (*pauVar23)[lVar43] = (char)uVar9 + -0x12;
            lVar43 = lVar43 + 1;
          }
          else {
            *(uint *)(*pauVar23 + lVar43) = uVar44 * 0x100 | 0xff;
            lVar43 = lVar43 + 3;
          }
        }
        iVar30 = iVar30 + 1;
        lVar39 = lVar39 + (ulong)uVar9;
        iVar34 = iVar34 - uVar41;
        bVar28 = (byte)iVar13;
        if (iVar34 < iVar13) {
          uVar41 = (-1 << (bVar28 & 0x1f)) + (uint)uVar8;
          *(short *)(*pauVar23 + local_90) =
               (short)(uVar42 << ((byte)iVar34 & 0x1f)) +
               (short)(uVar41 >> (bVar28 - (byte)iVar34 & 0x1f));
          local_90 = local_98;
          lVar32 = lVar43 + 2;
          iVar34 = (iVar34 - iVar13) + 0x10;
          local_98 = lVar43;
        }
        else {
          uVar41 = (uint)uVar8 + (uVar42 - 1 << (bVar28 & 0x1f));
          lVar32 = lVar43;
          iVar34 = iVar34 - iVar13;
        }
      }
      uVar48 = uVar48 + 1;
      lVar47 = lVar32;
      uVar20 = uVar41;
    } while (local_a4 != uVar48);
    lVar47 = local_98;
    iVar30 = iVar34;
    if (uVar22 == param_4) {
      uVar8 = *(ushort *)(param_5 + 0x27962);
      uVar20 = (uint)*(ushort *)(param_5 + 0x27960);
      iVar30 = iVar34 - (uint)uVar8;
      if (iVar34 < (int)(uint)uVar8) {
        iVar30 = (iVar34 - (uint)uVar8) + 0x10;
        *(ushort *)(*pauVar23 + local_90) =
             (short)(uVar41 << ((byte)iVar34 & 0x1f)) +
             (*(ushort *)(param_5 + 0x27960) >> ((byte)uVar8 - (byte)iVar34 & 0x1f));
        lVar47 = lVar32;
        lVar32 = lVar32 + 2;
        local_90 = local_98;
      }
      else {
        uVar20 = uVar20 + (uVar41 << ((byte)uVar8 & 0x1f));
      }
    }
    *(short *)(*pauVar23 + local_90) = (short)(uVar20 << ((byte)iVar30 & 0x1f));
    *(undefined2 *)(*pauVar23 + lVar47) = 0;
    lVar26 = lVar26 + lVar32;
    uVar37 = uVar22;
  } while (lVar32 != 0);
  lVar26 = 0;
LAB_001e3177:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar26;
code_r0x001e2706:
  uVar20 = (int)uVar21 + 8;
  uVar21 = (ulong)uVar20;
  if (uVar24 - 8 <= uVar36 + uVar21) goto LAB_001e2722;
  goto LAB_001e26f9;
}

