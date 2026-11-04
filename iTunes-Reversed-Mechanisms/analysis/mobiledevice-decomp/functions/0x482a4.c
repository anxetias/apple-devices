// rea decompile_all
// name: _BrotliCompressFragmentFastImpl13
// address: 0x482a4
// body: available
// range: 0x482a4-0x4991d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49919 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliCompressFragmentFastImpl13
               (long param_1,long *param_2,ulong param_3,int param_4,long param_5,long param_6,
               long param_7,ulong *param_8,undefined1 *param_9,ulong *param_10,long param_11)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  int *piVar9;
  byte *pbVar10;
  byte bVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  int iVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long *plVar26;
  ulong uVar27;
  int iVar28;
  bool bVar29;
  ulong local_590;
  ulong local_580;
  ulong local_578;
  ulong local_570;
  ulong local_568;
  ushort local_538 [256];
  byte local_338 [256];
  int local_238 [19];
  int aiStack_1ec [11];
  int aiStack_1c0 [9];
  int local_19c;
  int aiStack_198 [21];
  int local_144;
  int local_140 [18];
  int aiStack_f8 [48];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_570 = 0x18000;
  if (param_3 < 0x18000) {
    local_570 = param_3;
  }
  local_578 = *param_10;
  _BrotliStoreMetaBlockHeader(local_570,0,param_10,param_11);
  uVar23 = *param_10;
  uVar12 = uVar23 >> 3;
  *(ulong *)(param_11 + uVar12) = (ulong)*(byte *)(param_11 + uVar12);
  *param_10 = uVar23 + 0xd;
  local_580 = _BuildAndStoreLiteralPrefixCode
                        (param_1,param_2,local_570,local_338,local_538,param_10,param_11);
  if (*(int *)(param_1 + 0x18) != 0) {
LAB_0004836d:
    if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  uVar23 = *param_8;
  uVar12 = *param_10;
  if (7 < uVar23) {
    uVar27 = 0;
    do {
      *(ulong *)(param_11 + (uVar12 >> 3)) =
           (ulong)(byte)param_9[uVar27 >> 3] << ((byte)uVar12 & 7) |
           (ulong)*(byte *)(param_11 + (uVar12 >> 3));
      uVar12 = uVar12 + 8;
      *param_10 = uVar12;
      uVar23 = *param_8;
      uVar13 = uVar27 + 0xf;
      uVar27 = uVar27 + 8;
    } while (uVar13 < uVar23);
  }
  *(ulong *)(param_11 + (uVar12 >> 3)) =
       (ulong)(byte)param_9[uVar23 >> 3] << ((byte)uVar12 & 7) |
       (ulong)*(byte *)(param_11 + (uVar12 >> 3));
  *param_10 = ((uint)uVar23 & 7) + uVar12;
  plVar15 = param_2;
  local_568 = param_3;
LAB_00048470:
  local_590 = local_570;
  plVar16 = plVar15;
  plVar18 = plVar15;
  do {
    _memcpy(local_238,&_kCmdHistoSeed,0x200);
    plVar19 = (long *)((long)plVar16 + local_590);
    if (0xf < local_590) {
      uVar23 = local_568 - 0x10;
      if (local_590 - 5 < local_568 - 0x10) {
        uVar23 = local_590 - 5;
      }
      if (1 < (long)uVar23) {
        plVar26 = (long *)(uVar23 + (long)plVar16);
        plVar8 = (long *)((long)plVar16 + 2);
        iVar20 = -1;
        plVar17 = plVar16;
LAB_00048517:
        lVar21 = *(long *)((long)plVar17 + 1);
        uVar6 = 0x21;
        plVar17 = (long *)((long)plVar17 + 1);
        do {
          plVar7 = plVar8;
          uVar23 = (ulong)(lVar21 * 0x1e35a7bd000000) >> 0x33;
          lVar21 = *plVar7;
          iVar28 = (int)param_2;
          if ((((int)*plVar17 == *(int *)((long)plVar17 + -(long)iVar20)) &&
              (lVar24 = (long)plVar17 + -(long)iVar20,
              *(char *)((long)plVar17 + 4) == *(char *)(lVar24 + 4))) && (0 < iVar20)) {
            *(int *)(param_5 + uVar23 * 4) = (int)plVar17 - iVar28;
LAB_00048566:
            if ((long)plVar17 - lVar24 < 0x3fff1) goto LAB_000485b7;
          }
          else {
            lVar24 = (long)*(int *)(param_5 + uVar23 * 4);
            *(int *)(param_5 + uVar23 * 4) = (int)plVar17 - iVar28;
            if (((int)*plVar17 == *(int *)((long)param_2 + lVar24)) &&
               (lVar24 = lVar24 + (long)param_2,
               *(char *)((long)plVar17 + 4) == *(char *)(lVar24 + 4))) goto LAB_00048566;
          }
          plVar8 = (long *)((ulong)(uVar6 >> 5) + (long)plVar7);
          if (plVar26 < plVar8) break;
          uVar6 = uVar6 + 1;
          plVar17 = plVar7;
        } while( true );
      }
    }
LAB_00049361:
    local_568 = local_568 - local_590;
    local_590 = 0x10000;
    if (local_568 < 0x10000) {
      local_590 = local_568;
    }
    if (((local_568 == 0) || (local_570 = local_570 + local_590, 0x100000 < local_570)) ||
       (iVar20 = _ShouldMergeBlock(plVar19,local_590,local_338), iVar20 == 0)) goto LAB_00049402;
    _UpdateBits((int)local_570 + -1,local_578 + 3,param_11);
    plVar16 = plVar19;
  } while( true );
LAB_000485b7:
  pcVar1 = (char *)((long)plVar17 + 5);
  uVar23 = (long)plVar19 + (-5 - (long)plVar17);
  if (7 < uVar23) {
    uVar12 = uVar23 & 0xfffffffffffffff8;
    pcVar14 = pcVar1 + uVar12;
    lVar21 = 0;
    uVar27 = 0;
LAB_000485f0:
    uVar13 = *(ulong *)(lVar24 + 5 + uVar27 * 8);
    if (*(ulong *)(pcVar1 + uVar27 * 8) == uVar13) goto code_r0x000485fe;
    uVar13 = uVar13 ^ *(ulong *)(pcVar1 + uVar27 * 8);
    uVar23 = 0;
    if (uVar13 != 0) {
      for (; (uVar13 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
      }
    }
    uVar27 = (uVar23 >> 3 & 0x1fffffff) - lVar21;
    goto LAB_0004862e;
  }
  uVar12 = 0;
  pcVar14 = pcVar1;
LAB_0004921a:
  uVar23 = uVar23 & 7;
  uVar27 = uVar12;
  if (uVar23 != 0) {
    uVar13 = uVar12 | uVar23;
    do {
      uVar27 = uVar12;
      if (*(char *)(lVar24 + 5 + uVar12) != *pcVar14) break;
      pcVar14 = pcVar14 + 1;
      uVar12 = uVar12 + 1;
      uVar23 = uVar23 - 1;
      uVar27 = uVar13;
    } while (uVar23 != 0);
  }
LAB_0004862e:
  uVar23 = (long)plVar17 - (long)plVar18;
  if (uVar23 < 0x1842) {
    if (uVar23 < 6) {
      uVar12 = *param_10;
      uVar13 = *(byte *)(param_6 + 0x28 + uVar23) + uVar12;
      *(ulong *)(param_11 + (uVar12 >> 3)) =
           (ulong)*(ushort *)(param_7 + 0x50 + uVar23 * 2) << ((byte)uVar12 & 7) |
           (ulong)*(byte *)(param_11 + (uVar12 >> 3));
      *param_10 = uVar13;
      piVar9 = aiStack_198 + uVar23;
    }
    else if (uVar23 < 0x82) {
      uVar12 = uVar23 - 2;
      uVar6 = 0x1f;
      if ((uint)uVar12 != 0) {
        for (; (uint)uVar12 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      uVar6 = (uVar6 ^ 0xffffffe0) + 0x1f;
      uVar25 = uVar12 >> ((byte)uVar6 & 0x3f);
      lVar21 = uVar25 + (ulong)uVar6 * 2;
      uVar13 = *param_10;
      bVar2 = *(byte *)(param_6 + 0x2a + lVar21);
      *(ulong *)(param_11 + (uVar13 >> 3)) =
           (ulong)*(ushort *)(param_7 + 0x54 + lVar21 * 2) << ((byte)uVar13 & 7) |
           (ulong)*(byte *)(param_11 + (uVar13 >> 3));
      uVar13 = bVar2 + uVar13;
      *param_10 = uVar13;
      *(ulong *)(param_11 + (uVar13 >> 3)) =
           uVar12 - (uVar25 << ((byte)uVar6 & 0x3f)) << ((byte)uVar13 & 7) |
           (ulong)*(byte *)(param_11 + (uVar13 >> 3));
      uVar13 = uVar13 + uVar6;
      *param_10 = uVar13;
      piVar9 = aiStack_198 + lVar21 + 2;
    }
    else if (uVar23 < 0x842) {
      uVar5 = (int)uVar23 - 0x42;
      uVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      lVar21 = 0x51 - (ulong)(uVar6 ^ 0x1f);
      uVar12 = *param_10;
      uVar25 = *(byte *)(param_6 + lVar21) + uVar12;
      *(ulong *)(param_11 + (uVar12 >> 3)) =
           (ulong)*(ushort *)(param_7 + lVar21 * 2) << ((byte)uVar12 & 7) |
           (ulong)*(byte *)(param_11 + (uVar12 >> 3));
      *param_10 = uVar25;
      uVar13 = uVar6 + uVar25;
      *(ulong *)(param_11 + (uVar25 >> 3)) =
           (-1L << ((byte)uVar6 & 0x3f)) + uVar23 + -0x42 << ((byte)uVar25 & 7) |
           (ulong)*(byte *)(param_11 + (uVar25 >> 3));
      *param_10 = uVar13;
      piVar9 = local_238 + lVar21;
    }
    else {
      uVar25 = *param_10;
      uVar12 = uVar25 + *(byte *)(param_6 + 0x3d);
      uVar13 = *(byte *)(param_6 + 0x3d) + uVar25 + 0xc;
      *(ulong *)(param_11 + (uVar25 >> 3)) =
           (ulong)*(ushort *)(param_7 + 0x7a) << ((byte)uVar25 & 7) |
           (ulong)*(byte *)(param_11 + (uVar25 >> 3));
      *param_10 = uVar12;
      *(ulong *)(param_11 + (uVar12 >> 3)) =
           uVar23 - 0x842 << ((byte)uVar12 & 7) | (ulong)*(byte *)(param_11 + (uVar12 >> 3));
      *param_10 = uVar13;
      piVar9 = &local_144;
    }
  }
  else {
    uVar12 = ((long)plVar18 - (long)plVar15) * 0x32;
    if ((uVar12 < uVar23 || uVar12 - uVar23 == 0) && (0x3d4 < local_580)) {
      _EmitUncompressedMetaBlock(plVar15,plVar17,local_578,param_10,param_11);
      local_568 = (long)plVar16 + (local_568 - (long)plVar17);
      plVar19 = plVar17;
      goto LAB_000496a0;
    }
    if (uVar23 < 0x5842) {
      uVar13 = (ulong)*(byte *)(param_6 + 0x3e);
      uVar25 = *param_10;
      uVar12 = uVar25 + uVar13;
      uVar13 = uVar13 + uVar25 + 0xe;
      *(ulong *)(param_11 + (uVar25 >> 3)) =
           (ulong)*(ushort *)(param_7 + 0x7c) << ((byte)uVar25 & 7) |
           (ulong)*(byte *)(param_11 + (uVar25 >> 3));
      *param_10 = uVar12;
      *(ulong *)(param_11 + (uVar12 >> 3)) =
           uVar23 - 0x1842 << ((byte)uVar12 & 7) | (ulong)*(byte *)(param_11 + (uVar12 >> 3));
      *param_10 = uVar13;
      piVar9 = local_140;
    }
    else {
      uVar13 = (ulong)*(byte *)(param_6 + 0x3f);
      uVar25 = *param_10;
      uVar12 = uVar25 + uVar13;
      uVar13 = uVar13 + uVar25 + 0x18;
      *(ulong *)(param_11 + (uVar25 >> 3)) =
           (ulong)*(ushort *)(param_7 + 0x7e) << ((byte)uVar25 & 7) |
           (ulong)*(byte *)(param_11 + (uVar25 >> 3));
      *param_10 = uVar12;
      *(ulong *)(param_11 + (uVar12 >> 3)) =
           uVar23 - 0x5842 << ((byte)uVar12 & 7) | (ulong)*(byte *)(param_11 + (uVar12 >> 3));
      *param_10 = uVar13;
      piVar9 = local_140 + 1;
    }
  }
  *piVar9 = *piVar9 + 1;
  if (plVar17 != plVar18) {
    lVar21 = 0;
    do {
      bVar2 = local_338[*(byte *)((long)plVar18 + lVar21)];
      *(ulong *)(param_11 + (uVar13 >> 3)) =
           (ulong)local_538[*(byte *)((long)plVar18 + lVar21)] << ((byte)uVar13 & 7) |
           (ulong)*(byte *)(param_11 + (uVar13 >> 3));
      uVar13 = uVar13 + bVar2;
      *param_10 = uVar13;
      lVar21 = lVar21 + 1;
    } while (uVar23 + (uVar23 == 0) != lVar21);
  }
  iVar22 = (int)((long)plVar17 - lVar24);
  if (iVar20 == iVar22) {
    bVar2 = *(byte *)(param_6 + 0x40);
    *(ulong *)(param_11 + (uVar13 >> 3)) =
         (ulong)*(ushort *)(param_7 + 0x80) << ((byte)uVar13 & 7) |
         (ulong)*(byte *)(param_11 + (uVar13 >> 3));
    uVar13 = bVar2 + uVar13;
    local_140[2] = local_140[2] + 1;
    iVar22 = iVar20;
  }
  else {
    uVar23 = (long)iVar22 + 3;
    uVar6 = 0x1f;
    if ((uint)uVar23 != 0) {
      for (; (uint)uVar23 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    uVar5 = 0x1e - (uVar6 ^ 0x1f);
    uVar12 = (ulong)((uVar23 >> ((ulong)uVar5 & 0x3f) & 1) != 0);
    uVar25 = ((uVar6 ^ 0x1f) * 2 ^ 0x3e) - 4 | uVar12;
    bVar2 = *(byte *)(param_6 + 0x50 + uVar25);
    *(ulong *)(param_11 + (uVar13 >> 3)) =
         (ulong)*(ushort *)(param_7 + 0xa0 + uVar25 * 2) << ((byte)uVar13 & 7) |
         (ulong)*(byte *)(param_11 + (uVar13 >> 3));
    uVar13 = bVar2 + uVar13;
    *param_10 = uVar13;
    *(ulong *)(param_11 + (uVar13 >> 3)) =
         uVar23 - (uVar12 + 2 << ((byte)uVar5 & 0x3f)) << ((byte)uVar13 & 7) |
         (ulong)*(byte *)(param_11 + (uVar13 >> 3));
    uVar13 = uVar13 + uVar5;
    aiStack_f8[uVar25] = aiStack_f8[uVar25] + 1;
  }
  uVar23 = uVar27 + 5;
  *param_10 = uVar13;
  bVar2 = (byte)uVar13;
  if (uVar23 < 0xc) {
    bVar3 = *(byte *)(param_6 + 1 + uVar27);
    *(ulong *)(param_11 + (uVar13 >> 3)) =
         (ulong)*(ushort *)(param_7 + 2 + uVar27 * 2) << (bVar2 & 7) |
         (ulong)*(byte *)(param_11 + (uVar13 >> 3));
    *param_10 = bVar3 + uVar13;
    piVar9 = local_238 + uVar27 + 1;
  }
  else if (uVar23 < 0x48) {
    uVar23 = uVar27 - 3;
    uVar6 = 0x1f;
    if ((uint)uVar23 != 0) {
      for (; (uint)uVar23 >> uVar6 == 0; uVar6 = uVar6 - 1) {
      }
    }
    uVar6 = (uVar6 ^ 0xffffffe0) + 0x1f;
    uVar12 = uVar23 >> ((byte)uVar6 & 0x3f);
    lVar21 = uVar12 + (ulong)uVar6 * 2;
    bVar3 = *(byte *)(param_6 + 4 + lVar21);
    *(ulong *)(param_11 + (uVar13 >> 3)) =
         (ulong)*(ushort *)(param_7 + 8 + lVar21 * 2) << (bVar2 & 7) |
         (ulong)*(byte *)(param_11 + (uVar13 >> 3));
    uVar13 = bVar3 + uVar13;
    *param_10 = uVar13;
    *(ulong *)(param_11 + (uVar13 >> 3)) =
         uVar23 - (uVar12 << ((byte)uVar6 & 0x3f)) << ((byte)uVar13 & 7) |
         (ulong)*(byte *)(param_11 + (uVar13 >> 3));
    *param_10 = uVar13 + uVar6;
    piVar9 = local_238 + lVar21 + 4;
  }
  else {
    if (uVar23 < 0x88) {
      uVar12 = uVar27 - 3 >> 5;
      uVar25 = (ulong)*(byte *)(param_6 + 0x1e + uVar12);
      *(ulong *)(param_11 + (uVar13 >> 3)) =
           (ulong)*(ushort *)(param_7 + 0x3c + uVar12 * 2) << (bVar2 & 7) |
           (ulong)*(byte *)(param_11 + (uVar13 >> 3));
      uVar23 = uVar13 + uVar25;
      *param_10 = uVar23;
      *(ulong *)(param_11 + (uVar23 >> 3)) =
           (ulong)((uint)(uVar27 - 3) & 0x1f) << ((byte)uVar23 & 7) |
           (ulong)*(byte *)(param_11 + (uVar23 >> 3));
      uVar13 = uVar13 + uVar25 + 5;
      *param_10 = uVar13;
      bVar2 = *(byte *)(param_6 + 0x40);
      *(ulong *)(param_11 + (uVar13 >> 3)) =
           (ulong)*(ushort *)(param_7 + 0x80) << ((byte)uVar13 & 7) |
           (ulong)*(byte *)(param_11 + (uVar13 >> 3));
      *param_10 = bVar2 + uVar23 + 5;
      aiStack_1c0[uVar12] = aiStack_1c0[uVar12] + 1;
    }
    else if (uVar23 < 0x848) {
      uVar5 = (int)uVar27 - 0x43;
      uVar6 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      lVar21 = 0x3b - (ulong)(uVar6 ^ 0x1f);
      bVar3 = *(byte *)(param_6 + lVar21);
      *(ulong *)(param_11 + (uVar13 >> 3)) =
           (ulong)*(ushort *)(param_7 + lVar21 * 2) << (bVar2 & 7) |
           (ulong)*(byte *)(param_11 + (uVar13 >> 3));
      uVar13 = bVar3 + uVar13;
      *param_10 = uVar13;
      uVar23 = uVar6 + uVar13;
      *(ulong *)(param_11 + (uVar13 >> 3)) =
           (-1L << ((byte)uVar6 & 0x3f)) + uVar27 + -0x43 << ((byte)uVar13 & 7) |
           (ulong)*(byte *)(param_11 + (uVar13 >> 3));
      *param_10 = uVar23;
      bVar2 = *(byte *)(param_6 + 0x40);
      *(ulong *)(param_11 + (uVar23 >> 3)) =
           (ulong)*(ushort *)(param_7 + 0x80) << ((byte)uVar23 & 7) |
           (ulong)*(byte *)(param_11 + (uVar23 >> 3));
      *param_10 = bVar2 + uVar23;
      local_238[lVar21] = local_238[lVar21] + 1;
    }
    else {
      bVar3 = *(byte *)(param_6 + 0x27);
      *(ulong *)(param_11 + (uVar13 >> 3)) =
           (ulong)*(ushort *)(param_7 + 0x4e) << (bVar2 & 7) |
           (ulong)*(byte *)(param_11 + (uVar13 >> 3));
      uVar23 = uVar13 + bVar3;
      *param_10 = uVar23;
      bVar11 = (byte)uVar23 & 7;
      *(ulong *)(param_11 + (uVar23 >> 3)) =
           uVar27 - 0x843 << bVar11 | (ulong)*(byte *)(param_11 + (uVar23 >> 3));
      uVar12 = bVar3 + uVar13 + 0x18;
      *param_10 = uVar12;
      bVar2 = *(byte *)(param_6 + 0x40);
      uVar12 = uVar12 >> 3;
      *(ulong *)(param_11 + uVar12) =
           (ulong)*(ushort *)(param_7 + 0x80) << bVar11 | (ulong)*(byte *)(param_11 + uVar12);
      *param_10 = bVar2 + uVar23 + 0x18;
      local_19c = local_19c + 1;
    }
    piVar9 = local_140 + 2;
  }
  plVar18 = (long *)((long)plVar17 + uVar27 + 5);
  *piVar9 = *piVar9 + 1;
  if (plVar26 <= plVar18) goto LAB_00049361;
  uVar23 = *(ulong *)((long)plVar17 + uVar27 + 2);
  uVar12 = (uVar23 >> 0x18) * 0x1e35a7bd000000 >> 0x33;
  iVar20 = (int)plVar18 - iVar28;
  *(int *)(param_5 + (uVar23 * 0x1e35a7bd000000 >> 0x33) * 4) = iVar20 + -3;
  *(int *)(param_5 + ((uVar23 >> 8) * 0x1e35a7bd000000 >> 0x33) * 4) = iVar20 + -2;
  *(int *)(param_5 + ((uVar23 >> 0x10) * 0x1e35a7bd000000 >> 0x33) * 4) = iVar20 + -1;
  lVar21 = (long)*(int *)(param_5 + uVar12 * 4);
  *(int *)(param_5 + uVar12 * 4) = iVar20;
  iVar20 = iVar22;
  if (((int)*plVar18 == *(int *)((long)param_2 + lVar21)) &&
     (lVar21 = lVar21 + (long)param_2, plVar8 = plVar18,
     *(char *)((long)plVar17 + uVar27 + 9) == *(char *)(lVar21 + 4))) {
    do {
      pcVar1 = (char *)((long)plVar8 + 5);
      uVar23 = (long)plVar19 + (-5 - (long)plVar8);
      if (7 < uVar23) {
        uVar12 = uVar23 & 0xfffffffffffffff8;
        pcVar14 = pcVar1 + uVar12;
        lVar24 = 0;
        uVar27 = 0;
LAB_00048e01:
        uVar13 = *(ulong *)(lVar21 + 5 + uVar27 * 8);
        if (*(ulong *)(pcVar1 + uVar27 * 8) == uVar13) goto code_r0x00048e0f;
        uVar13 = uVar13 ^ *(ulong *)(pcVar1 + uVar27 * 8);
        uVar23 = 0;
        if (uVar13 != 0) {
          for (; (uVar13 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
          }
        }
        uVar27 = (uVar23 >> 3 & 0x1fffffff) - lVar24;
        goto LAB_00048e46;
      }
      uVar12 = 0;
      pcVar14 = pcVar1;
LAB_000491c4:
      uVar23 = uVar23 & 7;
      uVar27 = uVar12;
      if (uVar23 != 0) {
        uVar13 = uVar12 | uVar23;
        do {
          uVar27 = uVar12;
          if (*(char *)(lVar21 + 5 + uVar12) != *pcVar14) break;
          pcVar14 = pcVar14 + 1;
          uVar12 = uVar12 + 1;
          uVar23 = uVar23 - 1;
          uVar27 = uVar13;
        } while (uVar23 != 0);
      }
LAB_00048e46:
      plVar18 = plVar8;
      iVar20 = iVar22;
      if (0x3fff0 < (long)plVar8 - lVar21) break;
      uVar23 = uVar27 + 5;
      if (uVar23 < 10) {
        uVar12 = *param_10;
        uVar23 = *(byte *)(param_6 + 0x13 + uVar27) + uVar12;
        *(ulong *)(param_11 + (uVar12 >> 3)) =
             (ulong)*(ushort *)(param_7 + 0x26 + uVar27 * 2) << ((byte)uVar12 & 7) |
             (ulong)*(byte *)(param_11 + (uVar12 >> 3));
        *param_10 = uVar23;
        piVar9 = aiStack_1ec + uVar27;
      }
      else if (uVar23 < 0x86) {
        uVar12 = uVar27 - 1;
        uVar6 = 0x1f;
        if ((uint)uVar12 != 0) {
          for (; (uint)uVar12 >> uVar6 == 0; uVar6 = uVar6 - 1) {
          }
        }
        uVar6 = (uVar6 ^ 0xffffffe0) + 0x1f;
        uVar13 = uVar12 >> ((byte)uVar6 & 0x3f);
        lVar24 = uVar13 + (ulong)uVar6 * 2;
        uVar23 = *param_10;
        bVar2 = *(byte *)(param_6 + 0x14 + lVar24);
        *(ulong *)(param_11 + (uVar23 >> 3)) =
             (ulong)*(ushort *)(param_7 + 0x28 + lVar24 * 2) << ((byte)uVar23 & 7) |
             (ulong)*(byte *)(param_11 + (uVar23 >> 3));
        uVar23 = bVar2 + uVar23;
        *param_10 = uVar23;
        *(ulong *)(param_11 + (uVar23 >> 3)) =
             uVar12 - (uVar13 << ((byte)uVar6 & 0x3f)) << ((byte)uVar23 & 7) |
             (ulong)*(byte *)(param_11 + (uVar23 >> 3));
        uVar23 = uVar23 + uVar6;
        *param_10 = uVar23;
        piVar9 = aiStack_1ec + lVar24 + 1;
      }
      else if (uVar23 < 0x846) {
        uVar5 = (int)uVar27 - 0x41;
        uVar6 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
          }
        }
        lVar24 = 0x3b - (ulong)(uVar6 ^ 0x1f);
        uVar23 = *param_10;
        uVar12 = *(byte *)(param_6 + lVar24) + uVar23;
        *(ulong *)(param_11 + (uVar23 >> 3)) =
             (ulong)*(ushort *)(param_7 + lVar24 * 2) << ((byte)uVar23 & 7) |
             (ulong)*(byte *)(param_11 + (uVar23 >> 3));
        *param_10 = uVar12;
        uVar23 = uVar6 + uVar12;
        *(ulong *)(param_11 + (uVar12 >> 3)) =
             (-1L << ((byte)uVar6 & 0x3f)) + uVar27 + -0x41 << ((byte)uVar12 & 7) |
             (ulong)*(byte *)(param_11 + (uVar12 >> 3));
        *param_10 = uVar23;
        piVar9 = local_238 + lVar24;
      }
      else {
        uVar13 = *param_10;
        uVar12 = uVar13 + *(byte *)(param_6 + 0x27);
        uVar23 = *(byte *)(param_6 + 0x27) + uVar13 + 0x18;
        *(ulong *)(param_11 + (uVar13 >> 3)) =
             (ulong)*(ushort *)(param_7 + 0x4e) << ((byte)uVar13 & 7) |
             (ulong)*(byte *)(param_11 + (uVar13 >> 3));
        *param_10 = uVar12;
        *(ulong *)(param_11 + (uVar12 >> 3)) =
             uVar27 - 0x841 << ((byte)uVar12 & 7) | (ulong)*(byte *)(param_11 + (uVar12 >> 3));
        *param_10 = uVar23;
        piVar9 = &local_19c;
      }
      *piVar9 = *piVar9 + 1;
      iVar22 = (int)((long)plVar8 - lVar21);
      uVar12 = (long)iVar22 + 3;
      uVar6 = 0x1f;
      if ((uint)uVar12 != 0) {
        for (; (uint)uVar12 >> uVar6 == 0; uVar6 = uVar6 - 1) {
        }
      }
      uVar5 = 0x1e - (uVar6 ^ 0x1f);
      uVar13 = (ulong)((uVar12 >> ((ulong)uVar5 & 0x3f) & 1) != 0);
      uVar25 = ((uVar6 ^ 0x1f) * 2 ^ 0x3e) - 4 | uVar13;
      bVar2 = *(byte *)(param_6 + 0x50 + uVar25);
      *(ulong *)(param_11 + (uVar23 >> 3)) =
           (ulong)*(ushort *)(param_7 + 0xa0 + uVar25 * 2) << ((byte)uVar23 & 7) |
           (ulong)*(byte *)(param_11 + (uVar23 >> 3));
      uVar23 = bVar2 + uVar23;
      *param_10 = uVar23;
      *(ulong *)(param_11 + (uVar23 >> 3)) =
           uVar12 - (uVar13 + 2 << ((byte)uVar5 & 0x3f)) << ((byte)uVar23 & 7) |
           (ulong)*(byte *)(param_11 + (uVar23 >> 3));
      plVar18 = (long *)((long)plVar8 + uVar27 + 5);
      *param_10 = uVar23 + uVar5;
      aiStack_f8[uVar25] = aiStack_f8[uVar25] + 1;
      if (plVar26 <= plVar18) goto LAB_00049361;
      uVar23 = *(ulong *)((long)plVar8 + uVar27 + 2);
      uVar12 = (uVar23 >> 0x18) * 0x1e35a7bd000000 >> 0x33;
      iVar20 = (int)plVar18 - iVar28;
      *(int *)(param_5 + (uVar23 * 0x1e35a7bd000000 >> 0x33) * 4) = iVar20 + -3;
      *(int *)(param_5 + ((uVar23 >> 8) * 0x1e35a7bd000000 >> 0x33) * 4) = iVar20 + -2;
      *(int *)(param_5 + ((uVar23 >> 0x10) * 0x1e35a7bd000000 >> 0x33) * 4) = iVar20 + -1;
      lVar21 = (long)*(int *)(param_5 + uVar12 * 4);
      *(int *)(param_5 + uVar12 * 4) = iVar20;
      iVar20 = iVar22;
      if (((int)*plVar18 != *(int *)((long)param_2 + lVar21)) ||
         (lVar21 = lVar21 + (long)param_2, pcVar1 = (char *)((long)plVar8 + uVar27 + 9),
         plVar8 = plVar18, *pcVar1 != *(char *)(lVar21 + 4))) break;
    } while( true );
  }
  plVar8 = (long *)((long)plVar18 + 2);
  plVar17 = plVar18;
  if (plVar26 < plVar8) goto LAB_00049361;
  goto LAB_00048517;
code_r0x000485fe:
  uVar27 = uVar27 + 1;
  lVar21 = lVar21 + -8;
  if (uVar23 >> 3 == uVar27) goto LAB_0004921a;
  goto LAB_000485f0;
code_r0x00048e0f:
  uVar27 = uVar27 + 1;
  lVar24 = lVar24 + -8;
  if (uVar23 >> 3 == uVar27) goto LAB_000491c4;
  goto LAB_00048e01;
LAB_00049402:
  if (plVar18 < plVar19) {
    uVar23 = (long)plVar19 - (long)plVar18;
    if (uVar23 < 0x1842) {
      if (uVar23 < 6) {
        uVar27 = *param_10;
        uVar12 = *(byte *)(param_6 + 0x28 + uVar23) + uVar27;
        *(ulong *)(param_11 + (uVar27 >> 3)) =
             (ulong)*(ushort *)(param_7 + 0x50 + uVar23 * 2) << ((byte)uVar27 & 7) |
             (ulong)*(byte *)(param_11 + (uVar27 >> 3));
        *param_10 = uVar12;
        piVar9 = aiStack_198 + uVar23;
      }
      else if (uVar23 < 0x82) {
        uVar27 = uVar23 - 2;
        uVar6 = 0x1f;
        if ((uint)uVar27 != 0) {
          for (; (uint)uVar27 >> uVar6 == 0; uVar6 = uVar6 - 1) {
          }
        }
        uVar6 = (uVar6 ^ 0xffffffe0) + 0x1f;
        uVar13 = uVar27 >> ((byte)uVar6 & 0x3f);
        lVar21 = uVar13 + (ulong)uVar6 * 2;
        uVar12 = *param_10;
        bVar2 = *(byte *)(param_6 + 0x2a + lVar21);
        *(ulong *)(param_11 + (uVar12 >> 3)) =
             (ulong)*(ushort *)(param_7 + 0x54 + lVar21 * 2) << ((byte)uVar12 & 7) |
             (ulong)*(byte *)(param_11 + (uVar12 >> 3));
        uVar12 = bVar2 + uVar12;
        *param_10 = uVar12;
        *(ulong *)(param_11 + (uVar12 >> 3)) =
             uVar27 - (uVar13 << ((byte)uVar6 & 0x3f)) << ((byte)uVar12 & 7) |
             (ulong)*(byte *)(param_11 + (uVar12 >> 3));
        uVar12 = uVar12 + uVar6;
        *param_10 = uVar12;
        piVar9 = aiStack_198 + lVar21 + 2;
      }
      else if (uVar23 < 0x842) {
        uVar5 = (int)uVar23 - 0x42;
        uVar6 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> uVar6 == 0; uVar6 = uVar6 - 1) {
          }
        }
        lVar21 = 0x51 - (ulong)(uVar6 ^ 0x1f);
        uVar12 = *param_10;
        uVar27 = *(byte *)(param_6 + lVar21) + uVar12;
        *(ulong *)(param_11 + (uVar12 >> 3)) =
             (ulong)*(ushort *)(param_7 + lVar21 * 2) << ((byte)uVar12 & 7) |
             (ulong)*(byte *)(param_11 + (uVar12 >> 3));
        *param_10 = uVar27;
        uVar12 = uVar6 + uVar27;
        *(ulong *)(param_11 + (uVar27 >> 3)) =
             (-1L << ((byte)uVar6 & 0x3f)) + uVar23 + -0x42 << ((byte)uVar27 & 7) |
             (ulong)*(byte *)(param_11 + (uVar27 >> 3));
        *param_10 = uVar12;
        piVar9 = local_238 + lVar21;
      }
      else {
        uVar13 = *param_10;
        uVar27 = uVar13 + *(byte *)(param_6 + 0x3d);
        uVar12 = *(byte *)(param_6 + 0x3d) + uVar13 + 0xc;
        *(ulong *)(param_11 + (uVar13 >> 3)) =
             (ulong)*(ushort *)(param_7 + 0x7a) << ((byte)uVar13 & 7) |
             (ulong)*(byte *)(param_11 + (uVar13 >> 3));
        *param_10 = uVar27;
        *(ulong *)(param_11 + (uVar27 >> 3)) =
             uVar23 - 0x842 << ((byte)uVar27 & 7) | (ulong)*(byte *)(param_11 + (uVar27 >> 3));
        *param_10 = uVar12;
        piVar9 = &local_144;
      }
      *piVar9 = *piVar9 + 1;
      lVar21 = 0;
      do {
        bVar2 = local_338[*(byte *)((long)plVar18 + lVar21)];
        *(ulong *)(param_11 + (uVar12 >> 3)) =
             (ulong)local_538[*(byte *)((long)plVar18 + lVar21)] << ((byte)uVar12 & 7) |
             (ulong)*(byte *)(param_11 + (uVar12 >> 3));
        uVar12 = uVar12 + bVar2;
        *param_10 = uVar12;
        lVar21 = lVar21 + 1;
      } while (uVar23 + (uVar23 == 0) != lVar21);
    }
    else {
      uVar12 = ((long)plVar18 - (long)plVar15) * 0x32;
      if ((uVar12 < uVar23 || uVar12 - uVar23 == 0) && (0x3d4 < local_580)) {
        _EmitUncompressedMetaBlock(plVar15,plVar19,local_578,param_10,param_11);
      }
      else {
        bVar29 = uVar23 < 0x5842;
        pbVar10 = (byte *)(param_6 + 0x3f);
        puVar4 = (ushort *)(param_7 + 0x7e);
        if (bVar29) {
          pbVar10 = (byte *)(param_6 + 0x3e);
          puVar4 = (ushort *)(param_7 + 0x7c);
        }
        bVar2 = *pbVar10;
        uVar12 = *param_10;
        lVar21 = uVar12 + 0x18;
        if (bVar29) {
          lVar21 = uVar12 + 0xe;
        }
        uVar27 = lVar21 + (ulong)bVar2;
        *(ulong *)(param_11 + (uVar12 >> 3)) =
             (ulong)*puVar4 << ((byte)uVar12 & 7) | (ulong)*(byte *)(param_11 + (uVar12 >> 3));
        uVar12 = uVar12 + bVar2;
        *param_10 = uVar12;
        *(ulong *)(param_11 + (uVar12 >> 3)) =
             ((ulong)bVar29 << 0xe | 0xffffffffffffa7be) + uVar23 << ((byte)uVar12 & 7) |
             (ulong)*(byte *)(param_11 + (uVar12 >> 3));
        local_140[!bVar29] = local_140[!bVar29] + 1;
        *param_10 = uVar27;
        uVar12 = 0;
        do {
          bVar2 = local_338[*(byte *)((long)plVar18 + uVar12)];
          *(ulong *)(param_11 + (uVar27 >> 3)) =
               (ulong)local_538[*(byte *)((long)plVar18 + uVar12)] << ((byte)uVar27 & 7) |
               (ulong)*(byte *)(param_11 + (uVar27 >> 3));
          uVar27 = uVar27 + bVar2;
          *param_10 = uVar27;
          uVar12 = uVar12 + 1;
        } while (uVar23 != uVar12);
      }
    }
  }
LAB_000496a0:
  if (local_568 == 0) {
    if (param_4 == 0) {
      *param_9 = 0;
      *param_8 = 0;
      _BuildAndStoreCommandPrefixCode(local_238,param_6,param_7);
    }
    goto LAB_0004836d;
  }
  local_570 = 0x18000;
  if (local_568 < 0x18000) {
    local_570 = local_568;
  }
  local_578 = *param_10;
  _BrotliStoreMetaBlockHeader(local_570,0,param_10,param_11);
  uVar23 = *param_10;
  uVar12 = uVar23 >> 3;
  *(ulong *)(param_11 + uVar12) = (ulong)*(byte *)(param_11 + uVar12);
  *param_10 = uVar23 + 0xd;
  local_580 = _BuildAndStoreLiteralPrefixCode
                        (param_1,plVar19,local_570,local_338,local_538,param_10,param_11);
  if (*(int *)(param_1 + 0x18) != 0) goto LAB_0004836d;
  _BuildAndStoreCommandPrefixCode(local_238,param_6,param_7,param_10,param_11);
  plVar15 = plVar19;
  goto LAB_00048470;
}

