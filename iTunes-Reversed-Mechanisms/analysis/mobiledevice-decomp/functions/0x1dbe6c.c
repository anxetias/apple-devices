// rea decompile_all
// name: _BrotliCompressFragmentTwoPassImpl8
// address: 0x1dbe6c
// body: available
// range: 0x1dbe6c-0x1dc6e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliCompressFragmentTwoPassImpl8
               (long param_1,long *param_2,ulong param_3,uint *param_4,void *param_5,long param_6,
               ulong *param_7,long param_8)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  size_t sVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  bool bVar25;
  long local_60;
  void *local_48;
  uint *local_38;
  
  plVar3 = param_2;
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    sVar8 = 0x20000;
    if (param_3 < 0x20000) {
      sVar8 = param_3;
    }
    plVar2 = (long *)((long)plVar3 + sVar8);
    local_48 = param_5;
    plVar10 = plVar3;
    local_38 = param_4;
    if (0xf < param_3) break;
LAB_001dc4d9:
    if (plVar10 < plVar2) {
      uVar11 = (uint)((long)plVar2 - (long)plVar10);
      if (5 < uVar11) {
        if (uVar11 < 0x82) {
          uVar11 = uVar11 - 2;
          uVar4 = 0x1f;
          if (uVar11 != 0) {
            for (; uVar11 >> uVar4 == 0; uVar4 = uVar4 - 1) {
            }
          }
          bVar7 = (char)(uVar4 ^ 0xffffffe0) + 0x1f;
          uVar5 = uVar11 >> (bVar7 & 0x1f);
          uVar11 = (uVar11 - (uVar5 << (bVar7 & 0x1f))) * 0x100 |
                   uVar5 + (uVar4 ^ 0xffffffe0) * 2 + 0x40;
        }
        else if (uVar11 < 0x842) {
          uVar4 = 0x1f;
          if (uVar11 - 0x42 != 0) {
            for (; uVar11 - 0x42 >> uVar4 == 0; uVar4 = uVar4 - 1) {
            }
          }
          uVar11 = (((-1 << ((byte)uVar4 & 0x1f)) + uVar11 + -0x42) * 0x100 - (uVar4 ^ 0x1f)) + 0x29
          ;
        }
        else if (uVar11 < 0x1842) {
          uVar11 = uVar11 * 0x100 - 0x841eb;
        }
        else if (uVar11 < 0x5842) {
          uVar11 = uVar11 * 0x100 - 0x1841ea;
        }
        else {
          uVar11 = uVar11 * 0x100 - 0x5841e9;
        }
      }
      *local_38 = uVar11;
      local_38 = local_38 + 1;
      uVar20 = (long)plVar2 - (long)plVar10 & 0xffffffff;
      _memcpy(local_48,plVar10,uVar20);
      local_48 = (void *)((long)local_48 + uVar20);
    }
    iVar6 = _ShouldCompress(plVar3,sVar8);
    if (iVar6 == 0) {
      _BrotliStoreMetaBlockHeader(sVar8,1,param_7);
      uVar11 = (int)*param_7 + 7;
      *param_7 = (ulong)(uVar11 & 0xfffffff8);
      _memcpy((void *)((ulong)(uVar11 >> 3) + param_8),plVar3,sVar8);
      uVar20 = sVar8 * 8 + *param_7;
      *param_7 = uVar20;
      *(undefined1 *)(param_8 + (uVar20 >> 3)) = 0;
    }
    else {
      _BrotliStoreMetaBlockHeader(sVar8,0,param_7,param_8);
      uVar20 = *param_7;
      uVar13 = uVar20 >> 3;
      *(ulong *)(param_8 + uVar13) = (ulong)*(byte *)(param_8 + uVar13);
      *param_7 = uVar20 + 0xd;
      _StoreCommands(param_1,param_5,(long)local_48 - (long)param_5,param_4,
                     (long)local_38 - (long)param_4 >> 2,param_7,param_8);
      if (*(int *)(param_1 + 0x18) != 0) {
        return;
      }
    }
    param_3 = param_3 - sVar8;
    plVar3 = plVar2;
  }
  uVar20 = param_3 - 0x10;
  if (sVar8 - 4 < param_3 - 0x10) {
    uVar20 = sVar8 - 4;
  }
  plVar22 = (long *)(uVar20 + (long)plVar3);
  local_60 = 0xffffffff;
  plVar9 = plVar3;
LAB_001dbf2b:
  lVar15 = *(long *)((long)plVar9 + 1);
  uVar11 = 0x20;
  plVar24 = (long *)((long)plVar9 + 1);
  do {
    plVar18 = (long *)((ulong)(uVar11 >> 5) + (long)plVar24);
    plVar10 = plVar9;
    if (plVar22 < plVar18) goto LAB_001dc4d9;
    uVar20 = (ulong)(lVar15 * 0x1e35a7bd00000000) >> 0x38;
    lVar15 = *plVar18;
    iVar12 = (int)plVar24;
    iVar6 = (int)param_2;
    if (((int)*plVar24 == *(int *)((long)plVar24 + -(long)(int)local_60)) && (0 < (int)local_60)) {
      lVar19 = (long)plVar24 + -(long)(int)local_60;
      *(int *)(param_6 + uVar20 * 4) = iVar12 - iVar6;
LAB_001dbf9a:
      lVar23 = (long)plVar24 - lVar19;
      if (lVar23 < 0x3fff1) break;
    }
    else {
      lVar19 = (long)*(int *)(param_6 + uVar20 * 4);
      *(int *)(param_6 + uVar20 * 4) = iVar12 - iVar6;
      if ((int)*plVar24 == *(int *)((long)param_2 + lVar19)) {
        lVar19 = lVar19 + (long)param_2;
        goto LAB_001dbf9a;
      }
    }
    uVar11 = uVar11 + 1;
    plVar24 = plVar18;
  } while( true );
  piVar1 = (int *)((long)plVar24 + 4);
  uVar20 = (long)plVar2 + (-4 - (long)plVar24);
  if (7 < uVar20) {
    uVar13 = uVar20 & 0xfffffffffffffff8;
    piVar14 = (int *)(uVar13 + (long)piVar1);
    lVar15 = 0;
    uVar21 = 0;
LAB_001dbfe6:
    uVar16 = *(ulong *)(lVar19 + 4 + uVar21 * 8);
    if (*(ulong *)(piVar1 + uVar21 * 2) == uVar16) goto code_r0x001dbff4;
    uVar16 = uVar16 ^ *(ulong *)(piVar1 + uVar21 * 2);
    uVar20 = 0;
    if (uVar16 != 0) {
      for (; (uVar16 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
      }
    }
    uVar21 = (uVar20 >> 3 & 0x1fffffff) - lVar15;
    goto LAB_001dc01b;
  }
  uVar13 = 0;
  piVar14 = piVar1;
LAB_001dc490:
  uVar20 = uVar20 & 7;
  uVar21 = uVar13;
  if (uVar20 != 0) {
    uVar16 = uVar13 | uVar20;
    do {
      uVar21 = uVar13;
      if (*(char *)(lVar19 + 4 + uVar13) != (char)*piVar14) break;
      piVar14 = (int *)((long)piVar14 + 1);
      uVar13 = uVar13 + 1;
      uVar20 = uVar20 - 1;
      uVar21 = uVar16;
    } while (uVar20 != 0);
  }
LAB_001dc01b:
  uVar4 = iVar12 - (int)plVar9;
  uVar11 = uVar4;
  if (5 < uVar4) {
    if (uVar4 < 0x82) {
      uVar5 = uVar4 - 2;
      uVar11 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> uVar11 == 0; uVar11 = uVar11 - 1) {
        }
      }
      bVar7 = (char)(uVar11 ^ 0xffffffe0) + 0x1f;
      uVar17 = uVar5 >> (bVar7 & 0x1f);
      uVar11 = (uVar5 - (uVar17 << (bVar7 & 0x1f))) * 0x100 |
               uVar17 + (uVar11 ^ 0xffffffe0) * 2 + 0x40;
    }
    else if (uVar4 < 0x842) {
      uVar11 = 0x1f;
      if (uVar4 - 0x42 != 0) {
        for (; uVar4 - 0x42 >> uVar11 == 0; uVar11 = uVar11 - 1) {
        }
      }
      uVar11 = (((-1 << ((byte)uVar11 & 0x1f)) + uVar4 + -0x42) * 0x100 - (uVar11 ^ 0x1f)) + 0x29;
    }
    else {
      iVar12 = uVar4 * 0x100;
      if (uVar4 < 0x1842) {
        uVar11 = iVar12 - 0x841eb;
      }
      else if (uVar4 < 0x5842) {
        uVar11 = iVar12 - 0x1841ea;
      }
      else {
        uVar11 = iVar12 - 0x5841e9;
      }
    }
  }
  *local_38 = uVar11;
  _memcpy(local_48,plVar9,(long)(int)uVar4);
  uVar11 = 0x40;
  bVar25 = (int)local_60 != (int)lVar23;
  if (bVar25) {
    uVar5 = (int)lVar23 + 3;
    uVar11 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar11 == 0; uVar11 = uVar11 - 1) {
      }
    }
    bVar7 = 0x1e - (char)(uVar11 ^ 0x1f);
    bVar25 = (uVar5 >> (bVar7 & 0x1f) & 1) != 0;
    uVar11 = (uint)bVar25 +
             ((uVar5 - (bVar25 + 2 << (bVar7 & 0x1f))) * 0x100 | (uVar11 ^ 0x1f) * 2 ^ 0x3e) + 0x4c;
    local_60 = lVar23;
  }
  uVar20 = uVar21 + 4;
  local_38[1] = uVar11;
  if (uVar20 < 0xc) {
    local_38[2] = (int)uVar20 + 0x14;
    lVar15 = 0xc;
  }
  else if (uVar20 < 0x48) {
    uVar11 = 0x1f;
    uVar5 = (uint)(uVar21 - 4);
    if (uVar5 != 0) {
      for (; uVar5 >> uVar11 == 0; uVar11 = uVar11 - 1) {
      }
    }
    bVar7 = (char)(uVar11 ^ 0xffffffe0) + 0x1f;
    iVar12 = (int)(uVar21 - 4 >> (bVar7 & 0x3f));
    local_38[2] = (uVar5 - (iVar12 << (bVar7 & 0x1f))) * 0x100 |
                  iVar12 + (uVar11 ^ 0xffffffe0) * 2 + 0x5a;
    lVar15 = 0xc;
  }
  else if (uVar20 < 0x88) {
    local_38[2] = ((uint)(uVar21 - 4) & 0x1f) << 8 | (int)(uVar21 - 4 >> 5) + 0x36U;
    local_38[3] = 0x40;
    lVar15 = 0x10;
  }
  else {
    if (uVar20 < 0x848) {
      uVar11 = (int)uVar21 - 0x44;
      iVar12 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      local_38[2] = ((int)(-1L << ((byte)iVar12 & 0x3f)) + (int)uVar21 + -0x44) * 0x100 + iVar12 +
                    0x34;
    }
    else {
      local_38[2] = (int)uVar20 * 0x100 - 0x847c1;
    }
    local_38[3] = 0x40;
    lVar15 = 0x10;
  }
  plVar10 = (long *)((long)plVar24 + uVar21 + 4);
  local_48 = (void *)((long)local_48 + (long)(int)uVar4);
  local_38 = (uint *)((long)local_38 + lVar15);
  if (plVar22 <= plVar10) goto LAB_001dc4d9;
  uVar20 = *(ulong *)((long)plVar24 + uVar21 + 1);
  uVar13 = (uVar20 & 0xffffffff000000) * 0x1e35a7bd00 >> 0x38;
  iVar12 = (int)plVar10 - iVar6;
  *(int *)(param_6 + ((uVar20 & 0xffffffff00) * 0x1e35a7bd000000 >> 0x38) * 4) = iVar12 + -2;
  *(int *)(param_6 + (uVar20 * 0x1e35a7bd00000000 >> 0x38) * 4) = iVar12 + -1;
  lVar15 = (long)*(int *)(param_6 + uVar13 * 4);
  *(int *)(param_6 + uVar13 * 4) = iVar12;
  piVar1 = (int *)(lVar15 + (long)param_2);
  plVar9 = plVar10;
  lVar19 = (long)plVar10 - (long)piVar1;
  while ((lVar23 = lVar19, lVar23 < 0x3fff1 && ((int)*plVar9 == *piVar1))) {
    piVar1 = (int *)((long)plVar9 + 4);
    uVar20 = (long)plVar2 + (-4 - (long)plVar9);
    if (7 < uVar20) {
      uVar13 = uVar20 & 0xfffffffffffffff8;
      piVar14 = (int *)((long)piVar1 + uVar13);
      lVar19 = 0;
      uVar21 = 0;
LAB_001dc23d:
      uVar16 = *(ulong *)((long)param_2 + uVar21 * 8 + lVar15 + 4);
      if (*(ulong *)(piVar1 + uVar21 * 2) == uVar16) goto code_r0x001dc24a;
      uVar16 = uVar16 ^ *(ulong *)(piVar1 + uVar21 * 2);
      uVar20 = 0;
      if (uVar16 != 0) {
        for (; (uVar16 >> uVar20 & 1) == 0; uVar20 = uVar20 + 1) {
        }
      }
      uVar21 = (uVar20 >> 3 & 0x1fffffff) - lVar19;
      goto LAB_001dc27f;
    }
    uVar13 = 0;
    piVar14 = piVar1;
LAB_001dc3dc:
    uVar20 = uVar20 & 7;
    uVar21 = uVar13;
    if (uVar20 != 0) {
      uVar16 = uVar13 | uVar20;
      do {
        uVar21 = uVar13;
        if (*(char *)((long)param_2 + uVar13 + lVar15 + 4) != (char)*piVar14) break;
        piVar14 = (int *)((long)piVar14 + 1);
        uVar13 = uVar13 + 1;
        uVar20 = uVar20 - 1;
        uVar21 = uVar16;
      } while (uVar20 != 0);
    }
LAB_001dc27f:
    uVar20 = uVar21 + 4;
    if (uVar20 < 10) {
      uVar11 = (int)uVar20 + 0x26;
    }
    else if (uVar20 < 0x86) {
      uVar11 = 0x1f;
      uVar4 = (uint)(uVar21 - 2);
      if (uVar4 != 0) {
        for (; uVar4 >> uVar11 == 0; uVar11 = uVar11 - 1) {
        }
      }
      bVar7 = (char)(uVar11 ^ 0xffffffe0) + 0x1f;
      iVar12 = (int)(uVar21 - 2 >> (bVar7 & 0x3f));
      uVar11 = (uVar4 - (iVar12 << (bVar7 & 0x1f))) * 0x100 |
               iVar12 + (uVar11 ^ 0xffffffe0) * 2 + 0x6a;
    }
    else if (uVar20 < 0x846) {
      uVar11 = (int)uVar21 - 0x42;
      iVar12 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      uVar11 = ((int)(-1L << ((byte)iVar12 & 0x3f)) + (int)uVar21 + -0x42) * 0x100 + iVar12 + 0x34;
    }
    else {
      uVar11 = (int)uVar20 * 0x100 - 0x845c1;
    }
    plVar10 = (long *)((long)plVar9 + uVar21 + 4);
    *local_38 = uVar11;
    uVar4 = (int)lVar23 + 3;
    uVar11 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> uVar11 == 0; uVar11 = uVar11 - 1) {
      }
    }
    bVar7 = 0x1e - (char)(uVar11 ^ 0x1f);
    bVar25 = (uVar4 >> (bVar7 & 0x1f) & 1) != 0;
    local_38[1] = ((uVar4 - (bVar25 + 2 << (bVar7 & 0x1f))) * 0x100 | (uVar11 ^ 0x1f) * 2 ^ 0x3e) +
                  (uint)bVar25 + 0x4c;
    local_38 = local_38 + 2;
    if (plVar22 <= plVar10) goto LAB_001dc4d9;
    uVar20 = *(ulong *)((long)plVar9 + uVar21 + 1);
    uVar13 = (uVar20 & 0xffffffff000000) * 0x1e35a7bd00 >> 0x38;
    iVar12 = (int)plVar10 - iVar6;
    *(int *)(param_6 + (uVar20 * 0x1e35a7bd00000000 >> 0x38) * 4) = iVar12 + -3;
    *(int *)(param_6 + ((uVar20 & 0xffffffff00) * 0x1e35a7bd000000 >> 0x38) * 4) = iVar12 + -2;
    *(int *)(param_6 + ((uVar20 & 0xffffffff0000) * 0x1e35a7bd0000 >> 0x38) * 4) = iVar12 + -1;
    lVar15 = (long)*(int *)(param_6 + uVar13 * 4);
    *(int *)(param_6 + uVar13 * 4) = iVar12;
    piVar1 = (int *)(lVar15 + (long)param_2);
    plVar9 = plVar10;
    lVar19 = (long)plVar10 - (long)piVar1;
    local_60 = lVar23;
  }
  goto LAB_001dbf2b;
code_r0x001dbff4:
  uVar21 = uVar21 + 1;
  lVar15 = lVar15 + -8;
  if (uVar20 >> 3 == uVar21) goto LAB_001dc490;
  goto LAB_001dbfe6;
code_r0x001dc24a:
  uVar21 = uVar21 + 1;
  lVar19 = lVar19 + -8;
  if (uVar20 >> 3 == uVar21) goto LAB_001dc3dc;
  goto LAB_001dc23d;
}

