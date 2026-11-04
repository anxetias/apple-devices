// rea decompile_all
// name: _BrotliCompressFragmentTwoPassImpl16
// address: 0x635dc
// body: available
// range: 0x635dc-0x63eb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliCompressFragmentTwoPassImpl16
               (long param_1,long *param_2,ulong param_3,uint *param_4,void *param_5,long param_6,
               ulong *param_7,long param_8)

{
  char *pcVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  size_t sVar9;
  int *piVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  int iVar25;
  long *plVar26;
  bool bVar27;
  void *local_58;
  uint *local_38;
  
  plVar2 = param_2;
joined_r0x000635fb:
  plVar26 = plVar2;
  if (param_3 == 0) {
    return;
  }
  do {
    sVar9 = 0x20000;
    if (param_3 < 0x20000) {
      sVar9 = param_3;
    }
    plVar2 = (long *)((long)plVar26 + sVar9);
    local_58 = param_5;
    plVar12 = plVar26;
    local_38 = param_4;
    if (0xf < param_3) {
      uVar20 = param_3 - 0x10;
      if (sVar9 - 6 < param_3 - 0x10) {
        uVar20 = sVar9 - 6;
      }
      plVar24 = (long *)(uVar20 + (long)plVar26);
      iVar6 = -1;
LAB_00063684:
      lVar16 = *(long *)((long)plVar12 + 1);
      uVar8 = 0x20;
      plVar13 = (long *)((long)plVar12 + 1);
      do {
        plVar19 = (long *)((ulong)(uVar8 >> 5) + (long)plVar13);
        if (plVar24 < plVar19) break;
        uVar20 = (ulong)(lVar16 * 0x1e35a7bd0000) >> 0x30;
        lVar16 = *plVar19;
        iVar11 = (int)plVar13;
        iVar25 = (int)param_2;
        if (((((int)*plVar13 == *(int *)((long)plVar13 + -(long)iVar6)) &&
             (lVar21 = (long)plVar13 + -(long)iVar6,
             *(char *)((long)plVar13 + 4) == *(char *)(lVar21 + 4))) &&
            (*(char *)((long)plVar13 + 5) == *(char *)(lVar21 + 5))) && (0 < iVar6)) {
          *(int *)(param_6 + uVar20 * 4) = iVar11 - iVar25;
LAB_000636f4:
          if ((long)plVar13 - lVar21 < 0x3fff1) goto LAB_0006374c;
        }
        else {
          lVar22 = (long)*(int *)(param_6 + uVar20 * 4);
          lVar21 = lVar22 + (long)param_2;
          *(int *)(param_6 + uVar20 * 4) = iVar11 - iVar25;
          bVar27 = false;
          if (((int)*plVar13 == *(int *)((long)param_2 + lVar22)) &&
             (bVar27 = false, *(char *)((long)plVar13 + 4) == *(char *)(lVar21 + 4))) {
            bVar27 = *(char *)((long)plVar13 + 5) == *(char *)(lVar21 + 5);
          }
          if (bVar27) goto LAB_000636f4;
        }
        uVar8 = uVar8 + 1;
        plVar13 = plVar19;
      } while( true );
    }
LAB_00063cbb:
    if (plVar12 < plVar2) {
      uVar8 = (uint)((long)plVar2 - (long)plVar12);
      if (5 < uVar8) {
        if (uVar8 < 0x82) {
          uVar8 = uVar8 - 2;
          uVar3 = 0x1f;
          if (uVar8 != 0) {
            for (; uVar8 >> uVar3 == 0; uVar3 = uVar3 - 1) {
            }
          }
          bVar7 = (char)(uVar3 ^ 0xffffffe0) + 0x1f;
          uVar4 = uVar8 >> (bVar7 & 0x1f);
          uVar8 = (uVar8 - (uVar4 << (bVar7 & 0x1f))) * 0x100 |
                  uVar4 + (uVar3 ^ 0xffffffe0) * 2 + 0x40;
        }
        else if (uVar8 < 0x842) {
          uVar3 = 0x1f;
          if (uVar8 - 0x42 != 0) {
            for (; uVar8 - 0x42 >> uVar3 == 0; uVar3 = uVar3 - 1) {
            }
          }
          uVar8 = (((-1 << ((byte)uVar3 & 0x1f)) + uVar8 + -0x42) * 0x100 - (uVar3 ^ 0x1f)) + 0x29;
        }
        else if (uVar8 < 0x1842) {
          uVar8 = uVar8 * 0x100 - 0x841eb;
        }
        else if (uVar8 < 0x5842) {
          uVar8 = uVar8 * 0x100 - 0x1841ea;
        }
        else {
          uVar8 = uVar8 * 0x100 - 0x5841e9;
        }
      }
      *local_38 = uVar8;
      local_38 = local_38 + 1;
      uVar20 = (long)plVar2 - (long)plVar12 & 0xffffffff;
      _memcpy(local_58,plVar12,uVar20);
      local_58 = (void *)((long)local_58 + uVar20);
    }
    iVar6 = _ShouldCompress(plVar26,sVar9);
    if (iVar6 != 0) goto code_r0x00063db5;
    _BrotliStoreMetaBlockHeader(sVar9,1,param_7);
    uVar8 = (int)*param_7 + 7;
    *param_7 = (ulong)(uVar8 & 0xfffffff8);
    _memcpy((void *)((ulong)(uVar8 >> 3) + param_8),plVar26,sVar9);
    uVar20 = sVar9 * 8 + *param_7;
    *param_7 = uVar20;
    *(undefined1 *)(param_8 + (uVar20 >> 3)) = 0;
    param_3 = param_3 - sVar9;
    plVar26 = plVar2;
    if (param_3 == 0) {
      return;
    }
  } while( true );
LAB_0006374c:
  pcVar1 = (char *)((long)plVar13 + 6);
  uVar20 = (long)plVar2 + (-6 - (long)plVar13);
  if (7 < uVar20) {
    uVar14 = uVar20 & 0xfffffffffffffff8;
    pcVar15 = pcVar1 + uVar14;
    lVar16 = 0;
    uVar23 = 0;
LAB_00063782:
    uVar17 = *(ulong *)(lVar21 + 6 + uVar23 * 8);
    if (*(ulong *)(pcVar1 + uVar23 * 8) == uVar17) goto code_r0x00063790;
    uVar17 = uVar17 ^ *(ulong *)(pcVar1 + uVar23 * 8);
    uVar20 = 0;
    if (uVar17 != 0) {
      for (; (uVar17 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
      }
    }
    uVar23 = (uVar20 >> 3 & 0x1fffffff) - lVar16;
    goto LAB_000637b7;
  }
  uVar14 = 0;
  pcVar15 = pcVar1;
LAB_00063c72:
  uVar20 = uVar20 & 7;
  uVar23 = uVar14;
  if (uVar20 != 0) {
    uVar17 = uVar14 | uVar20;
    do {
      uVar23 = uVar14;
      if (*(char *)(lVar21 + 6 + uVar14) != *pcVar15) break;
      pcVar15 = pcVar15 + 1;
      uVar14 = uVar14 + 1;
      uVar20 = uVar20 - 1;
      uVar23 = uVar17;
    } while (uVar20 != 0);
  }
LAB_000637b7:
  uVar3 = iVar11 - (int)plVar12;
  uVar8 = uVar3;
  if (5 < uVar3) {
    if (uVar3 < 0x82) {
      uVar4 = uVar3 - 2;
      uVar8 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> uVar8 == 0; uVar8 = uVar8 - 1) {
        }
      }
      bVar7 = (char)(uVar8 ^ 0xffffffe0) + 0x1f;
      uVar18 = uVar4 >> (bVar7 & 0x1f);
      uVar8 = (uVar4 - (uVar18 << (bVar7 & 0x1f))) * 0x100 |
              uVar18 + (uVar8 ^ 0xffffffe0) * 2 + 0x40;
    }
    else if (uVar3 < 0x842) {
      uVar8 = 0x1f;
      if (uVar3 - 0x42 != 0) {
        for (; uVar3 - 0x42 >> uVar8 == 0; uVar8 = uVar8 - 1) {
        }
      }
      uVar8 = (((-1 << ((byte)uVar8 & 0x1f)) + uVar3 + -0x42) * 0x100 - (uVar8 ^ 0x1f)) + 0x29;
    }
    else {
      iVar11 = uVar3 * 0x100;
      if (uVar3 < 0x1842) {
        uVar8 = iVar11 - 0x841eb;
      }
      else if (uVar3 < 0x5842) {
        uVar8 = iVar11 - 0x1841ea;
      }
      else {
        uVar8 = iVar11 - 0x5841e9;
      }
    }
  }
  *local_38 = uVar8;
  _memcpy(local_58,plVar12,(long)(int)uVar3);
  uVar8 = 0x40;
  iVar11 = (int)((long)plVar13 - lVar21);
  if (iVar6 != iVar11) {
    uVar4 = iVar11 + 3;
    uVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> uVar8 == 0; uVar8 = uVar8 - 1) {
      }
    }
    bVar7 = 0x1e - (char)(uVar8 ^ 0x1f);
    bVar27 = (uVar4 >> (bVar7 & 0x1f) & 1) != 0;
    uVar8 = (uint)bVar27 +
            ((uVar4 - (bVar27 + 2 << (bVar7 & 0x1f))) * 0x100 | (uVar8 ^ 0x1f) * 2 ^ 0x3e) + 0x4c;
    iVar6 = iVar11;
  }
  uVar20 = uVar23 + 6;
  local_38[1] = uVar8;
  if (uVar20 < 0xc) {
    uVar8 = (int)uVar20 + 0x14;
  }
  else {
    if (0x47 < uVar20) {
      if (uVar20 < 0x88) {
        uVar8 = ((uint)(uVar23 - 2) & 0x1f) << 8 | (int)(uVar23 - 2 >> 5) + 0x36U;
LAB_00063940:
        local_38[2] = uVar8;
      }
      else {
        if (0x847 < uVar20) {
          uVar8 = (int)uVar20 * 0x100 - 0x847c1;
          goto LAB_00063940;
        }
        uVar8 = (int)uVar23 - 0x42;
        iVar11 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        local_38[2] = ((int)(-1L << ((byte)iVar11 & 0x3f)) + (int)uVar23 + -0x42) * 0x100 + iVar11 +
                      0x34;
      }
      local_38[3] = 0x40;
      lVar16 = 0x10;
      goto LAB_0006394f;
    }
    uVar8 = 0x1f;
    uVar4 = (uint)(uVar23 - 2);
    if (uVar4 != 0) {
      for (; uVar4 >> uVar8 == 0; uVar8 = uVar8 - 1) {
      }
    }
    bVar7 = (char)(uVar8 ^ 0xffffffe0) + 0x1f;
    iVar11 = (int)(uVar23 - 2 >> (bVar7 & 0x3f));
    uVar8 = (uVar4 - (iVar11 << (bVar7 & 0x1f))) * 0x100 | iVar11 + (uVar8 ^ 0xffffffe0) * 2 + 0x5a;
  }
  local_38[2] = uVar8;
  lVar16 = 0xc;
LAB_0006394f:
  plVar12 = (long *)((long)plVar13 + uVar23 + 6);
  local_58 = (void *)((long)local_58 + (long)(int)uVar3);
  local_38 = (uint *)((long)local_38 + lVar16);
  if (plVar24 <= plVar12) goto LAB_00063cbb;
  uVar20 = *(ulong *)((long)plVar13 + uVar23 + 1);
  iVar5 = (int)plVar12 - iVar25;
  *(int *)(param_6 + (uVar20 * 0x1e35a7bd0000 >> 0x30) * 4) = iVar5 + -5;
  *(int *)(param_6 + ((uVar20 & 0xffffffffffff00) * 0x1e35a7bd00 >> 0x30) * 4) = iVar5 + -4;
  *(int *)(param_6 + ((uVar20 & 0xffffffffffff0000) * 0x1e35a7bd >> 0x30) * 4) = iVar5 + -3;
  uVar20 = *(ulong *)((long)plVar13 + uVar23 + 4);
  uVar14 = (uVar20 & 0xffffffffffff0000) * 0x1e35a7bd >> 0x30;
  *(int *)(param_6 + (uVar20 * 0x1e35a7bd0000 >> 0x30) * 4) = iVar5 + -2;
  *(int *)(param_6 + ((uVar20 & 0xffffffffffff00) * 0x1e35a7bd00 >> 0x30) * 4) = iVar5 + -1;
  iVar11 = *(int *)(param_6 + uVar14 * 4);
  *(int *)(param_6 + uVar14 * 4) = iVar5;
  piVar10 = (int *)((long)iVar11 + (long)param_2);
  lVar16 = (long)plVar12 - (long)piVar10;
  if ((lVar16 < 0x3fff1) && (plVar13 = plVar12, (int)*plVar12 == *piVar10)) {
    while ((plVar12 = plVar13, *(char *)((long)plVar13 + 4) == (char)piVar10[1] &&
           (*(char *)((long)plVar13 + 5) == *(char *)((long)piVar10 + 5)))) {
      pcVar1 = (char *)((long)plVar13 + 6);
      uVar20 = (long)plVar2 + (-6 - (long)plVar13);
      if (7 < uVar20) {
        uVar14 = uVar20 & 0xfffffffffffffff8;
        pcVar15 = pcVar1 + uVar14;
        lVar21 = 0;
        uVar23 = 0;
LAB_00063a7f:
        uVar17 = *(ulong *)((long)piVar10 + uVar23 * 8 + 6);
        if (*(ulong *)(pcVar1 + uVar23 * 8) == uVar17) goto code_r0x00063a8d;
        uVar17 = uVar17 ^ *(ulong *)(pcVar1 + uVar23 * 8);
        uVar20 = 0;
        if (uVar17 != 0) {
          for (; (uVar17 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
          }
        }
        uVar23 = (uVar20 >> 3 & 0x1fffffff) - lVar21;
        goto LAB_00063aaf;
      }
      uVar14 = 0;
      pcVar15 = pcVar1;
LAB_00063c36:
      uVar20 = uVar20 & 7;
      uVar23 = uVar14;
      if (uVar20 != 0) {
        uVar17 = uVar14 | uVar20;
        do {
          uVar23 = uVar14;
          if (*(char *)((long)piVar10 + uVar14 + 6) != *pcVar15) break;
          pcVar15 = pcVar15 + 1;
          uVar14 = uVar14 + 1;
          uVar20 = uVar20 - 1;
          uVar23 = uVar17;
        } while (uVar20 != 0);
      }
LAB_00063aaf:
      uVar20 = uVar23 + 6;
      if (uVar20 < 10) {
        uVar8 = (int)uVar20 + 0x26;
      }
      else {
        uVar8 = (uint)uVar23;
        if (uVar20 < 0x86) {
          uVar3 = 0x1f;
          if (uVar8 != 0) {
            for (; uVar8 >> uVar3 == 0; uVar3 = uVar3 - 1) {
            }
          }
          bVar7 = (char)(uVar3 ^ 0xffffffe0) + 0x1f;
          iVar6 = (int)(uVar23 >> (bVar7 & 0x3f));
          uVar8 = (uVar8 - (iVar6 << (bVar7 & 0x1f))) * 0x100 |
                  iVar6 + (uVar3 ^ 0xffffffe0) * 2 + 0x6a;
        }
        else if (uVar20 < 0x846) {
          iVar6 = 0x1f;
          if (uVar8 - 0x40 != 0) {
            for (; uVar8 - 0x40 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          uVar8 = iVar6 + ((int)(-1L << ((byte)iVar6 & 0x3f)) + uVar8 + -0x40) * 0x100 + 0x34;
        }
        else {
          uVar8 = (int)uVar20 * 0x100 - 0x845c1;
        }
      }
      plVar12 = (long *)((long)plVar13 + uVar23 + 6);
      *local_38 = uVar8;
      iVar6 = (int)lVar16;
      uVar3 = iVar6 + 3;
      uVar8 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> uVar8 == 0; uVar8 = uVar8 - 1) {
        }
      }
      bVar7 = 0x1e - (char)(uVar8 ^ 0x1f);
      bVar27 = (uVar3 >> (bVar7 & 0x1f) & 1) != 0;
      local_38[1] = (uint)bVar27 +
                    ((uVar3 - (bVar27 + 2 << (bVar7 & 0x1f))) * 0x100 | (uVar8 ^ 0x1f) * 2 ^ 0x3e) +
                    0x4c;
      local_38 = local_38 + 2;
      if (plVar24 <= plVar12) goto LAB_00063cbb;
      uVar20 = *(ulong *)((long)plVar13 + uVar23 + 1);
      iVar5 = (int)plVar12 - iVar25;
      *(int *)(param_6 + (uVar20 * 0x1e35a7bd0000 >> 0x30) * 4) = iVar5 + -5;
      *(int *)(param_6 + ((uVar20 & 0xffffffffffff00) * 0x1e35a7bd00 >> 0x30) * 4) = iVar5 + -4;
      *(int *)(param_6 + ((uVar20 & 0xffffffffffff0000) * 0x1e35a7bd >> 0x30) * 4) = iVar5 + -3;
      uVar20 = *(ulong *)((long)plVar13 + uVar23 + 4);
      uVar14 = (uVar20 & 0xffffffffffff0000) * 0x1e35a7bd >> 0x30;
      *(int *)(param_6 + (uVar20 * 0x1e35a7bd0000 >> 0x30) * 4) = iVar5 + -2;
      *(int *)(param_6 + ((uVar20 & 0xffffffffffff00) * 0x1e35a7bd00 >> 0x30) * 4) = iVar5 + -1;
      iVar11 = *(int *)(param_6 + uVar14 * 4);
      *(int *)(param_6 + uVar14 * 4) = iVar5;
      piVar10 = (int *)((long)iVar11 + (long)param_2);
      lVar16 = (long)plVar12 - (long)piVar10;
      if ((0x3fff0 < lVar16) || (plVar13 = plVar12, (int)*plVar12 != *piVar10)) break;
    }
  }
  goto LAB_00063684;
code_r0x00063790:
  uVar23 = uVar23 + 1;
  lVar16 = lVar16 + -8;
  if (uVar20 >> 3 == uVar23) goto LAB_00063c72;
  goto LAB_00063782;
code_r0x00063a8d:
  uVar23 = uVar23 + 1;
  lVar21 = lVar21 + -8;
  if (uVar20 >> 3 == uVar23) goto LAB_00063c36;
  goto LAB_00063a7f;
code_r0x00063db5:
  _BrotliStoreMetaBlockHeader(sVar9,0,param_7,param_8);
  uVar20 = *param_7;
  uVar14 = uVar20 >> 3;
  *(ulong *)(param_8 + uVar14) = (ulong)*(byte *)(param_8 + uVar14);
  *param_7 = uVar20 + 0xd;
  _StoreCommands(param_1,param_5,(long)local_58 - (long)param_5,param_4,
                 (long)local_38 - (long)param_4 >> 2,param_7,param_8);
  if (*(int *)(param_1 + 0x18) != 0) {
    return;
  }
  param_3 = param_3 - sVar9;
  goto joined_r0x000635fb;
}

