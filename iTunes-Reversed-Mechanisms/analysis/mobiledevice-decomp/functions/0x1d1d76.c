// rea decompile_all
// name: _lzvnStreamEncode
// address: 0x1d1d76
// body: available
// range: 0x1d1d76-0x1d2560 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzvnStreamEncode(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  byte *pbVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  byte bVar18;
  byte *pbVar19;
  void *pvVar20;
  long lVar21;
  ulong uVar22;
  byte bVar23;
  uint uVar24;
  ulong uVar25;
  undefined4 *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  size_t sVar30;
  byte *pbVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  lVar5 = param_1[4];
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(lVar5 + 0x2c) = 1;
  }
  do {
    if (*(int *)(lVar5 + 0x30) == 0) {
      uVar27 = 0x40000 - *(long *)(lVar5 + 0x50);
      uVar25 = param_1[3];
      if (uVar25 < uVar27) {
        uVar27 = uVar25;
      }
      if (0 < (long)uVar27) {
        _memcpy((void *)(*(long *)(lVar5 + 0x50) + *(long *)(lVar5 + 0x10)),(void *)param_1[2],
                uVar27);
        *(long *)(lVar5 + 0x50) = *(long *)(lVar5 + 0x50) + uVar27;
        param_1[2] = param_1[2] + uVar27;
        uVar25 = param_1[3] - uVar27;
        param_1[3] = uVar25;
      }
      if ((uVar25 == 0) && (*(int *)(lVar5 + 0x2c) != 0)) {
        *(undefined4 *)(lVar5 + 0x30) = 1;
      }
    }
    else {
      uVar27 = 0;
    }
    pvVar20 = *(void **)(lVar5 + 0x18);
    pvVar6 = *(void **)(lVar5 + 0x78);
    if ((void *)((long)pvVar20 + 0x20000U) <= pvVar6) {
      sVar30 = *(long *)(lVar5 + 0x70) - (long)pvVar6;
      if (sVar30 != 0) {
        _memmove(pvVar20,pvVar6,sVar30);
        pvVar20 = *(void **)(lVar5 + 0x18);
      }
      *(void **)(lVar5 + 0x78) = pvVar20;
      *(size_t *)(lVar5 + 0x70) = sVar30 + (long)pvVar20;
    }
    if (*(int *)(lVar5 + 0x28) == 0) {
      if (*(long *)(lVar5 + 0x50) < 4) {
        if (*(int *)(lVar5 + 0x30) != 0) {
          return 0xffffffff;
        }
        break;
      }
      if (*(int *)(lVar5 + 0x34) == 0) {
        _lzvnEncodeInitState(lVar5 + 0x40,*(undefined4 *)(lVar5 + 4),*(undefined8 *)(lVar5 + 0x20));
        *(undefined4 *)(lVar5 + 0x28) = 1;
        goto LAB_001d1f27;
      }
LAB_001d1f88:
      if (*(int *)(lVar5 + 0x38) == 0) {
        lVar15 = *(long *)(lVar5 + 0x68);
        uVar25 = *(ulong *)(lVar5 + 0xa0);
        if (uVar25 != 0) {
          uVar17 = *(undefined8 *)(lVar5 + 0x98);
          uVar29 = *(ulong *)(lVar5 + 0xa8);
          puVar26 = (undefined4 *)(lVar15 + *(long *)(lVar5 + 0x40));
          uVar7 = *(ulong *)(lVar5 + 0xb8);
          pbVar31 = *(byte **)(lVar5 + 0x70);
          pbVar8 = *(byte **)(lVar5 + 0x80);
          for (uVar28 = *(long *)(lVar5 + 0x90) - lVar15; pbVar19 = pbVar8, 0xf < uVar28;
              uVar28 = uVar28 - uVar22) {
            uVar22 = 0x10f;
            if (uVar28 < 0x10f) {
              uVar22 = uVar28;
            }
            if (pbVar8 <= pbVar31 + uVar22 + 10) goto LAB_001d22f6;
            *(short *)pbVar31 = (short)((int)uVar22 << 8) + -0xf20;
            _memcpy(pbVar31 + 2,puVar26,(uVar22 - 1 & 0xfffffffffffffff8) + 8);
            pbVar31 = pbVar31 + uVar22 + 2;
            puVar26 = (undefined4 *)((long)puVar26 + uVar22);
          }
          if (uVar28 < 4) {
LAB_001d220b:
            uVar22 = uVar28 * -2 + 10;
            if (uVar25 <= uVar22) {
              uVar22 = uVar25;
            }
            if (pbVar31 + 8 < pbVar8) {
              uVar16 = uVar25 - uVar22;
              cVar10 = (byte)uVar22 - 3;
              uVar4 = *puVar26;
              if (uVar29 == uVar7) {
                bVar18 = (char)uVar28 * '@' + cVar10 * '\b';
                bVar23 = 6;
                if (uVar28 == 0) {
                  bVar23 = 0xf0;
                  bVar18 = (byte)uVar22;
                }
                *pbVar31 = bVar18 | bVar23;
                pbVar31 = pbVar31 + 1;
              }
              else if (uVar29 < 0x600) {
                *pbVar31 = ((byte)((int)uVar28 << 6) | (byte)(uVar29 >> 8)) + cVar10 * '\b';
                pbVar31[1] = (byte)uVar29;
                pbVar31 = pbVar31 + 2;
              }
              else {
                if (((uVar25 < 0x23) && (uVar29 < 0x4000)) && (uVar16 != 0)) {
                  uVar24 = (int)uVar25 - 3;
                  *pbVar31 = (char)(uVar24 >> 2) + (char)uVar28 * '\b' + 0xa0;
                  *(ushort *)(pbVar31 + 1) = ((ushort)uVar24 & 3) + (short)uVar29 * 4;
                  *(undefined4 *)(pbVar31 + 3) = uVar4;
                  pbVar19 = pbVar31 + uVar28 + 3;
                  goto LAB_001d22f6;
                }
                *pbVar31 = (char)((int)uVar28 << 6) + cVar10 * '\b' | 7;
                *(short *)(pbVar31 + 1) = (short)uVar29;
                pbVar31 = pbVar31 + 3;
              }
              *(undefined4 *)pbVar31 = uVar4;
              pbVar31 = pbVar31 + uVar28;
              for (; 0xf < uVar16; uVar16 = uVar16 - uVar25) {
                if (pbVar8 <= pbVar31 + 2) goto LAB_001d22f6;
                uVar25 = 0x10f;
                if (uVar16 < 0x10f) {
                  uVar25 = uVar16;
                }
                *(short *)pbVar31 = (short)((int)uVar25 << 8) + -0xf10;
                pbVar31 = pbVar31 + 2;
              }
              pbVar19 = pbVar31;
              if ((uVar16 != 0) && (pbVar19 = pbVar8, pbVar31 + 1 < pbVar8)) {
                *pbVar31 = (byte)uVar16 | 0xf0;
                pbVar19 = pbVar31 + 1;
              }
            }
          }
          else if (pbVar31 + uVar28 + 10 < pbVar8) {
            *pbVar31 = (byte)uVar28 | 0xe0;
            _memcpy(pbVar31 + 1,puVar26,(uVar28 - 1 & 0xfffffffffffffff8) + 8);
            pbVar31 = pbVar31 + uVar28 + 1;
            puVar26 = (undefined4 *)((long)puVar26 + uVar28);
            uVar28 = 0;
            goto LAB_001d220b;
          }
LAB_001d22f6:
          if (pbVar19 < *(byte **)(lVar5 + 0x80)) {
            *(ulong *)(lVar5 + 0xb8) = uVar29;
            pbVar31 = *(byte **)(lVar5 + 0x70);
            *(byte **)(lVar5 + 0x70) = pbVar19;
            *(undefined8 *)(lVar5 + 0x68) = uVar17;
            if (pbVar19 != pbVar31) {
              *(undefined1 (*) [16])(lVar5 + 0xa0) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(lVar5 + 0x90) = (undefined1  [16])0x0;
              *(undefined8 *)(lVar5 + 0xb0) = 0;
            }
          }
          if (*(long *)(lVar5 + 0xa0) != 0) goto LAB_001d1f96;
          lVar15 = *(long *)(lVar5 + 0x68);
        }
        uVar25 = *(long *)(lVar5 + 0x50) - lVar15;
        if (uVar25 != 0 && lVar15 <= *(long *)(lVar5 + 0x50)) {
          pvVar20 = (void *)(lVar15 + *(long *)(lVar5 + 0x40));
          pbVar31 = *(byte **)(lVar5 + 0x70);
          pbVar8 = *(byte **)(lVar5 + 0x80);
          for (uVar29 = uVar25; 0xf < uVar29; uVar29 = uVar29 - sVar30) {
            sVar30 = 0x10f;
            if (uVar29 < 0x10f) {
              sVar30 = uVar29;
            }
            pbVar19 = pbVar8;
            if (pbVar8 <= pbVar31 + sVar30 + 10) goto LAB_001d2409;
            *(short *)pbVar31 = (short)((int)sVar30 << 8) + -0xf20;
            _memcpy(pbVar31 + 2,pvVar20,sVar30);
            pbVar31 = pbVar31 + sVar30 + 2;
            pvVar20 = (void *)((long)pvVar20 + sVar30);
          }
          pbVar19 = pbVar31;
          if ((uVar29 != 0) && (pbVar19 = pbVar8, pbVar31 + uVar29 + 10 < pbVar8)) {
            *pbVar31 = (byte)uVar29 | 0xe0;
            _memcpy(pbVar31 + 1,pvVar20,uVar29);
            pbVar19 = pbVar31 + uVar29 + 1;
          }
LAB_001d2409:
          if (pbVar19 < *(byte **)(lVar5 + 0x80)) {
            *(byte **)(lVar5 + 0x70) = pbVar19;
            *(long *)(lVar5 + 0x68) = *(long *)(lVar5 + 0x68) + uVar25;
          }
        }
        if ((*(long *)(lVar5 + 0xa0) == 0) && (*(long *)(lVar5 + 0x50) == *(long *)(lVar5 + 0x68)))
        {
          puVar1 = *(undefined8 **)(lVar5 + 0x70) + 1;
          if (puVar1 <= *(undefined8 **)(lVar5 + 0x80)) {
            **(undefined8 **)(lVar5 + 0x70) = 6;
            *(undefined8 **)(lVar5 + 0x70) = puVar1;
            *(undefined4 *)(lVar5 + 0x38) = 1;
          }
        }
      }
    }
    else {
      if (*(int *)(lVar5 + 0x34) != 0) goto LAB_001d1f88;
      lVar15 = *(long *)(lVar5 + 0x48);
      if (lVar15 < -0xffff) {
        lVar15 = -0x10000;
      }
      iVar14 = (int)lVar15;
      auVar32._4_4_ = iVar14;
      auVar32._0_4_ = iVar14;
      auVar32._8_4_ = iVar14;
      auVar32._12_4_ = iVar14;
      uVar4 = *(undefined4 *)(lVar5 + 0x88);
      lVar15 = 0;
      uVar24 = 1;
      do {
        auVar33 = *(undefined1 (*) [16])(*(long *)(lVar5 + 0xc0) + lVar15);
        auVar34._0_4_ = -(uint)(iVar14 < auVar33._0_4_);
        auVar34._4_4_ = -(uint)(iVar14 < auVar33._4_4_);
        auVar34._8_4_ = -(uint)(iVar14 < auVar33._8_4_);
        auVar34._12_4_ = -(uint)(iVar14 < auVar33._12_4_);
        *(undefined1 (*) [16])(*(long *)(lVar5 + 0xc0) + lVar15) =
             ~auVar34 & auVar32 | auVar33 & auVar34;
        lVar15 = lVar15 + 0x20;
        uVar9 = uVar24 >> ((byte)uVar4 & 0x1f);
        uVar24 = uVar24 + 1;
      } while (uVar9 == 0);
LAB_001d1f27:
      *(long *)(lVar5 + 0x60) = *(long *)(lVar5 + 0x50) + -400;
      if (*(int *)(lVar5 + 0x30) != 0) {
        *(long *)(lVar5 + 0x60) = *(long *)(lVar5 + 0x50) + -8;
      }
      _lzvnEncode();
      if ((*(int *)(lVar5 + 0x30) != 0) && (*(long *)(lVar5 + 0x50) + -8 <= *(long *)(lVar5 + 0x58))
         ) {
        *(undefined4 *)(lVar5 + 0x34) = 1;
        goto LAB_001d1f88;
      }
      if (*(int *)(lVar5 + 0x34) != 0) goto LAB_001d1f88;
    }
LAB_001d1f96:
    if (*(int *)(lVar5 + 0x3c) == 0) {
      pvVar20 = *(void **)(lVar5 + 0x78);
      uVar25 = *(long *)(lVar5 + 0x70) - (long)pvVar20;
      if ((ulong)param_1[1] < uVar25) {
        uVar25 = param_1[1];
      }
      if (0 < (long)uVar25) {
        _memcpy((void *)*param_1,pvVar20,uVar25);
        pvVar20 = (void *)(*(long *)(lVar5 + 0x78) + uVar25);
        *(void **)(lVar5 + 0x78) = pvVar20;
        *param_1 = *param_1 + uVar25;
        param_1[1] = param_1[1] - uVar25;
      }
      if (*(int *)(lVar5 + 0x38) != 0) {
        if (pvVar20 == *(void **)(lVar5 + 0x70)) {
          *(undefined4 *)(lVar5 + 0x3c) = 1;
          break;
        }
        if (*(int *)(lVar5 + 0x3c) != 0) break;
      }
    }
    else {
      if (*(int *)(lVar5 + 0x38) != 0) {
        return 1;
      }
      uVar25 = 0;
    }
    if (0x1ffff < *(long *)(lVar5 + 0x50)) {
      lVar15 = *(long *)(lVar5 + 0x58);
      lVar21 = 0;
      if (0x1ffff < lVar15) {
        lVar21 = lVar15 + -0x10000;
      }
      if (0 < lVar21) {
        sVar30 = *(long *)(lVar5 + 0x50) - lVar21;
        *(size_t *)(lVar5 + 0x50) = sVar30;
        *(long *)(lVar5 + 0x58) = lVar15 - lVar21;
        *(long *)(lVar5 + 0x68) = *(long *)(lVar5 + 0x68) - lVar21;
        auVar33._8_4_ = (int)lVar21;
        auVar33._0_8_ = lVar21;
        auVar33._12_4_ = (int)((ulong)lVar21 >> 0x20);
        *(long *)(lVar5 + 0x90) = *(long *)(lVar5 + 0x90) - lVar21;
        *(long *)(lVar5 + 0x98) = *(long *)(lVar5 + 0x98) - auVar33._8_8_;
        iVar14 = -(int)lVar21;
        uVar4 = *(undefined4 *)(lVar5 + 0x88);
        lVar15 = 0;
        uVar24 = 1;
        do {
          piVar2 = (int *)(*(long *)(lVar5 + 0xc0) + lVar15);
          iVar11 = piVar2[1];
          iVar12 = piVar2[2];
          iVar13 = piVar2[3];
          piVar3 = (int *)(*(long *)(lVar5 + 0xc0) + lVar15);
          *piVar3 = *piVar2 + iVar14;
          piVar3[1] = iVar11 + iVar14;
          piVar3[2] = iVar12 + iVar14;
          piVar3[3] = iVar13 + iVar14;
          lVar15 = lVar15 + 0x20;
          uVar9 = uVar24 >> ((byte)uVar4 & 0x1f);
          uVar24 = uVar24 + 1;
        } while (uVar9 == 0);
        _memmove(*(void **)(lVar5 + 0x10),(void *)(lVar21 + (long)*(void **)(lVar5 + 0x10)),sVar30);
        *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(lVar5 + 0x10);
        *(undefined8 *)(lVar5 + 0x48) = 0;
      }
    }
  } while (uVar25 != 0 || uVar27 != 0);
  if ((*(int *)(lVar5 + 0x38) == 0) || (uVar17 = 1, *(int *)(lVar5 + 0x3c) == 0)) {
    uVar17 = 0;
  }
  return uVar17;
}

