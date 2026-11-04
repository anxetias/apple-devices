// rea decompile_all
// name: _UpdateNodes
// address: 0x4cf4d
// body: available
// range: 0x4cf4d-0x4d7c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _UpdateNodes(ulong param_1,long param_2,long param_3,long param_4,ulong param_5,long param_6,
                  ulong param_7,undefined8 param_8,long param_9,long param_10,long param_11,
                  long param_12,long param_13)

{
  ulong uVar1;
  float fVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  ulong uVar10;
  byte bVar11;
  ushort uVar12;
  float fVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  char *pcVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  ulong uVar32;
  ulong uVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  ulong local_38;
  
  uVar1 = param_3 + param_2;
  uVar6 = uVar1 + *(long *)(param_6 + 0x10);
  if (param_7 <= uVar6) {
    uVar6 = param_7;
  }
  uVar7 = param_1 - param_3;
  iVar3 = *(int *)(param_6 + 4);
  uVar14 = 0x96;
  if (10 < iVar3) {
    uVar14 = 0x145;
  }
  _EvaluateNode(*(long *)(param_6 + 0x10) + param_2,param_3,param_7,param_8,param_11,param_12,
                param_13);
  uVar8 = 2;
  if (param_3 + 2U <= param_1) {
    uVar8 = (ulong)((-*(int *)(param_12 + 0x100) & 7U) << 5);
    fVar36 = (*(float *)(*(long *)(param_11 + 0xb10) + param_3 * 4) -
             *(float *)(*(long *)(param_11 + 0xb10) + *(long *)(param_12 + uVar8) * 4)) +
             *(float *)(param_12 + 0x1c + uVar8) + *(float *)(param_11 + 0xb18);
    pfVar9 = (float *)(param_3 * 0x10 + param_13 + 0x2c);
    lVar21 = 4;
    uVar26 = 10;
    uVar10 = 2;
    do {
      uVar8 = uVar10;
      if (fVar36 < *pfVar9) break;
      uVar8 = uVar10 + 1;
      bVar34 = uVar8 == uVar26;
      fVar13 = fVar36 + 1.0;
      if (!bVar34) {
        fVar13 = fVar36;
      }
      fVar36 = fVar13;
      lVar17 = 0;
      if (bVar34) {
        lVar17 = lVar21;
      }
      lVar21 = lVar21 << bVar34;
      uVar26 = uVar26 + lVar17;
      pfVar9 = pfVar9 + 4;
      lVar17 = param_3 + uVar10;
      uVar10 = uVar8;
    } while (lVar17 + 1U <= param_1);
  }
  uVar10 = uVar1;
  if (uVar6 < uVar1) {
    uVar10 = uVar6;
  }
  pcVar15 = (char *)((uVar1 & param_5) + param_4);
  uVar22 = (ulong)((uint)uVar7 & 7);
  local_38 = 0;
  uVar26 = 0;
  do {
    uVar29 = *(ulong *)(param_12 + 0x100);
    uVar32 = 8;
    if (uVar29 < 8) {
      uVar32 = uVar29;
    }
    if (uVar32 <= uVar26) {
      return local_38;
    }
    uVar32 = (ulong)(((int)uVar26 - (int)uVar29 & 7U) << 5);
    uVar29 = param_3 - *(long *)(param_12 + uVar32);
    fVar36 = (float)uVar29;
    fVar13 = fVar36;
    if (5 < uVar29) {
      if (uVar29 < 0x82) {
        uVar18 = 0x1f;
        uVar19 = (uint)(uVar29 - 2);
        if (uVar19 != 0) {
          for (; uVar19 >> uVar18 == 0; uVar18 = uVar18 - 1) {
          }
        }
        fVar13 = (float)((int)(uVar29 - 2 >> ((char)(uVar18 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
                         (uVar18 ^ 0xffffffe0) * 2 + 0x40);
      }
      else if (uVar29 < 0x842) {
        uVar18 = 0x1f;
        if ((int)fVar36 - 0x42U != 0) {
          for (; (int)fVar36 - 0x42U >> uVar18 == 0; uVar18 = uVar18 - 1) {
          }
        }
        fVar13 = (float)((uVar18 ^ 0xffe0) + 0x2a);
      }
      else {
        fVar13 = 2.94273e-44;
        if (0x1841 < uVar29) {
          fVar13 = (float)(uint)(ushort)(0x17 - (uVar29 < 0x5842));
        }
      }
    }
    lVar21 = uVar32 + param_12;
    uVar18 = (uint)fVar13 & 0xffff;
    fVar35 = ((*(float **)(param_11 + 0xb10))[param_3] - **(float **)(param_11 + 0xb10)) +
             (float)*(uint *)(&_kBrotliInsExtra + (ulong)uVar18 * 4) + *(float *)(lVar21 + 0x18);
    if (uVar8 - 1 < uVar7) {
      uVar4 = SUB42(fVar13,0) * 8 & 0x38;
      uVar32 = 0;
      uVar29 = uVar8 - 1;
      while (uVar27 = (uVar1 & param_5) + uVar29, uVar27 <= param_5) {
        uVar30 = (long)(int)(&_kDistanceCacheOffset)[uVar32] +
                 (long)*(int *)(lVar21 + 8 + (ulong)(uint)(&_kDistanceCacheIndex)[uVar32] * 4);
        if ((uVar30 <= uVar10) && (uVar1 - uVar30 < uVar1)) {
          uVar16 = uVar1 - uVar30 & param_5;
          uVar33 = uVar16 + uVar29;
          if ((uVar33 <= param_5) && (*(char *)(param_4 + uVar27) == *(char *)(param_4 + uVar33))) {
            lVar17 = uVar16 + param_4;
            if (7 < uVar7) {
              lVar23 = 0;
              uVar27 = 0;
LAB_0004d2fd:
              uVar33 = *(ulong *)(lVar17 + uVar27 * 8);
              if (*(ulong *)(pcVar15 + uVar27 * 8) == uVar33) goto code_r0x0004d30e;
              uVar33 = uVar33 ^ *(ulong *)(pcVar15 + uVar27 * 8);
              uVar27 = 0;
              if (uVar33 != 0) {
                for (; (uVar33 >> uVar27 & 1) == 0; uVar27 = uVar27 + 1) {
                }
              }
              uVar27 = (uVar27 >> 3 & 0x1fffffff) - lVar23;
              goto LAB_0004d33f;
            }
            pcVar24 = pcVar15;
            uVar33 = 0;
LAB_0004d4d7:
            uVar27 = uVar33;
            if (uVar22 != 0) {
              uVar28 = uVar22 | uVar33;
              uVar16 = uVar22;
              do {
                uVar27 = uVar33;
                if (*(char *)(lVar17 + uVar33) != *pcVar24) break;
                pcVar24 = pcVar24 + 1;
                uVar33 = uVar33 + 1;
                uVar16 = uVar16 - 1;
                uVar27 = uVar28;
              } while (uVar16 != 0);
            }
LAB_0004d33f:
            if (uVar29 + 1 <= uVar27) {
              fVar2 = *(float *)(*(long *)(param_11 + 0xb00) + uVar32 * 4);
              pfVar9 = (float *)(uVar29 * 0x10 + param_3 * 0x10 + param_13 + 0x1c);
              uVar33 = uVar29;
              do {
                uVar29 = uVar33 + 1;
                iVar31 = (int)uVar33;
                if (uVar29 < 10) {
                  uVar19 = iVar31 - 1;
LAB_0004d3ec:
                  uVar5 = (ushort)uVar19;
                  uVar12 = uVar5 & 7 | uVar4;
                  if (0xf < uVar5 || (uVar32 != 0 || 7 < SUB42(fVar13,0))) goto LAB_0004d40e;
                  uVar12 = uVar5 & 7 | uVar4;
                  if (7 < uVar5) {
                    uVar12 = uVar12 + 0x40;
                  }
                }
                else {
                  if (uVar29 < 0x86) {
                    uVar19 = 0x1f;
                    uVar20 = (uint)(uVar33 - 5);
                    if (uVar20 != 0) {
                      for (; uVar20 >> uVar19 == 0; uVar19 = uVar19 - 1) {
                      }
                    }
                    uVar19 = (int)(uVar33 - 5 >> ((char)(uVar19 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
                             (uVar19 ^ 0xffffffe0) * 2 + 0x42;
                    goto LAB_0004d3ec;
                  }
                  uVar19 = 0x17;
                  uVar12 = uVar4 | 7;
                  if (uVar29 < 0x846) {
                    uVar19 = 0x1f;
                    if (iVar31 - 0x45U != 0) {
                      for (; iVar31 - 0x45U >> uVar19 == 0; uVar19 = uVar19 - 1) {
                      }
                    }
                    uVar19 = (uVar19 ^ 0xffe0) + 0x2c;
                    goto LAB_0004d3ec;
                  }
LAB_0004d40e:
                  iVar25 = ((uVar19 & 0xffff) >> 3) + (uVar18 >> 3) * 3;
                  uVar12 = uVar12 + ((ushort)(0x520d40 >> ((char)iVar25 * '\x02' & 0x1fU)) & 0xc0) +
                                    (short)iVar25 * 0x40 + 0x40;
                }
                fVar37 = fVar35;
                if (0x7f < uVar12) {
                  fVar37 = fVar2 + fVar35;
                }
                fVar37 = (float)*(uint *)(&_kBrotliCopyExtra + (ulong)(uVar19 & 0xffff) * 4) +
                         fVar37 + *(float *)(param_11 + (ulong)uVar12 * 4);
                if (fVar37 < *pfVar9) {
                  pfVar9[-3] = (float)(iVar31 + 1U | 0x12000000);
                  pfVar9[-2] = (float)uVar30;
                  pfVar9[-1] = (float)((uint)fVar36 | (int)uVar32 * 0x8000000 + 0x8000000U);
                  *pfVar9 = fVar37;
                  if (local_38 <= uVar29) {
                    local_38 = uVar29;
                  }
                }
                uVar16 = uVar33 + 2;
                pfVar9 = pfVar9 + 4;
                uVar33 = uVar29;
              } while (uVar16 <= uVar27);
            }
          }
        }
        if ((0xe < uVar32) || (uVar32 = uVar32 + 1, uVar7 <= uVar29)) break;
      }
    }
    if (uVar26 < 2 && param_9 != 0) {
      lVar21 = 0;
      uVar29 = uVar8;
      do {
        uVar30 = *(ulong *)(param_10 + lVar21 * 8);
        uVar33 = uVar30 & 0xffffffff;
        uVar32 = uVar33 + 0xf;
        uVar27 = (ulong)*(uint *)(param_6 + 0x44) + 0x10;
        if (uVar27 <= uVar32) {
          bVar11 = (byte)*(uint *)(param_6 + 0x40);
          uVar32 = ~(ulong)*(uint *)(param_6 + 0x44) + uVar33 + (4L << (bVar11 & 0x3f));
          uVar19 = 0x1f;
          uVar20 = (uint)uVar32;
          if (uVar20 != 0) {
            for (; uVar20 >> uVar19 == 0; uVar19 = uVar19 - 1) {
            }
          }
          uVar16 = (ulong)((uVar19 ^ 0xffffffe0) + 0x1f);
          lVar17 = uVar16 - *(uint *)(param_6 + 0x40);
          uVar32 = (~(-1 << (bVar11 & 0x1f)) & uVar20) + uVar27 +
                   ((ulong)((uVar32 >> (uVar16 & 0x3f) & 1) != 0) + lVar17 * 2 + -2 <<
                   (bVar11 & 0x3f)) | lVar17 * 0x400;
        }
        uVar16 = uVar30 >> 0x25;
        uVar27 = uVar29;
        if (uVar14 < uVar16) {
          uVar27 = uVar16;
        }
        if (uVar6 < uVar33) {
          uVar27 = uVar16;
        }
        if (uVar16 <= uVar29) {
          uVar27 = uVar29;
        }
        uVar29 = uVar27;
        if (uVar27 <= uVar16) {
          fVar2 = *(float *)(*(long *)(param_11 + 0xb00) + (ulong)((uint)uVar32 & 0x3ff) * 4);
          uVar28 = (ulong)((uint)(uVar30 >> 0x20) & 0x1f);
          if ((uVar30 & 0x1f00000000) == 0) {
            uVar28 = uVar16;
          }
          uVar29 = uVar16 + 1;
          pfVar9 = (float *)(uVar27 * 0x10 + param_3 * 0x10 + param_13 + 0xc);
          lVar17 = uVar27 * 0x2000000 + 0x12000000;
          do {
            uVar16 = uVar27;
            if (uVar6 < uVar33) {
              uVar16 = uVar28;
            }
            iVar31 = (int)uVar16;
            if (uVar16 < 10) {
              uVar19 = iVar31 - 2;
            }
            else if (uVar16 < 0x86) {
              uVar19 = 0x1f;
              uVar20 = (uint)(uVar16 - 6);
              if (uVar20 != 0) {
                for (; uVar20 >> uVar19 == 0; uVar19 = uVar19 - 1) {
                }
              }
              uVar19 = (int)(uVar16 - 6 >> ((char)(uVar19 ^ 0xffffffe0) + 0x1fU & 0x3f)) +
                       (uVar19 ^ 0xffffffe0) * 2 + 0x42;
            }
            else {
              uVar19 = 0x17;
              if (uVar16 < 0x846) {
                uVar19 = 0x1f;
                if (iVar31 - 0x46U != 0) {
                  for (; iVar31 - 0x46U >> uVar19 == 0; uVar19 = uVar19 - 1) {
                  }
                }
                uVar19 = (uVar19 ^ 0xffe0) + 0x2c;
              }
            }
            iVar25 = ((uVar19 & 0xffff) >> 3) + (uVar18 >> 3) * 3;
            fVar37 = (float)*(uint *)(&_kBrotliCopyExtra + (ulong)(uVar19 & 0xffff) * 4) +
                     (float)((uint)(uVar32 >> 10) & 0x3f) + fVar35 + fVar2 +
                     *(float *)(param_11 +
                               (ulong)((0x520d40U >> ((char)iVar25 * '\x02' & 0x1fU) & 0xc0) +
                                       iVar25 * 0x40 + (uVar19 & 7 | ((uint)fVar13 & 7) << 3) + 0x40
                                      & 0xffff) * 4);
            if (fVar37 < *pfVar9) {
              pfVar9[-3] = (float)((uint)uVar27 | (int)lVar17 + iVar31 * -0x2000000);
              pfVar9[-2] = (float)uVar30;
              pfVar9[-1] = fVar36;
              *pfVar9 = fVar37;
              if (local_38 <= uVar27) {
                local_38 = uVar27;
              }
            }
            uVar27 = uVar27 + 1;
            pfVar9 = pfVar9 + 4;
            lVar17 = lVar17 + 0x2000000;
          } while (uVar29 != uVar27);
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 != param_9);
    }
    if (iVar3 < 0xb) {
      return local_38;
    }
    bVar34 = 3 < uVar26;
    uVar26 = uVar26 + 1;
    if (bVar34) {
      return local_38;
    }
  } while( true );
code_r0x0004d30e:
  uVar27 = uVar27 + 1;
  lVar23 = lVar23 + -8;
  pcVar24 = pcVar15 + (uVar7 & 0xfffffffffffffff8);
  uVar33 = uVar7 & 0xfffffffffffffff8;
  if (uVar7 >> 3 == uVar27) goto LAB_0004d4d7;
  goto LAB_0004d2fd;
}

