// rea decompile_all
// name: _lzvnEncode
// address: 0x1d3e64
// body: available
// range: 0x1d3e64-0x1d4727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _lzvnEncode(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined2 *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  uint uVar24;
  undefined1 auVar23 [16];
  uint uVar25;
  undefined1 in_XMM1 [16];
  undefined8 uVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  undefined1 auVar28 [16];
  int iVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  long local_50;
  long local_48;
  long local_40;
  
  lVar20 = param_1[3];
  if (lVar20 < param_1[4]) {
    do {
      uVar29 = in_XMM1._8_8_;
      lVar10 = *param_1;
      uVar1 = *(uint *)(lVar10 + lVar20);
      lVar2 = param_1[5];
      lVar11 = (ulong)((uVar1 & 0xffffff) * -0x61c8864f >> (-(char)param_1[9] & 0x1fU)) * 0x20;
      auVar30 = *(undefined1 (*) [16])(param_1[0x10] + lVar11);
      auVar31 = *(undefined1 (*) [16])(param_1[0x10] + 0x10 + lVar11);
      iVar32 = auVar30._8_4_;
      auVar27._0_8_ = auVar30._8_8_;
      if (lVar2 <= lVar20) {
        auVar23._4_4_ = uVar1;
        auVar23._0_4_ = uVar1;
        auVar23._8_4_ = uVar1;
        auVar23._12_4_ = uVar1;
        auVar23 = auVar23 ^ auVar31;
        uVar15 = auVar23._0_4_;
        uVar6 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        uVar6 = uVar6 >> 3;
        if (uVar15 == 0) {
          uVar6 = 4;
        }
        lVar3 = param_1[1];
        lVar17 = param_1[2];
        if (uVar6 < 3) {
LAB_001d3f39:
          local_50 = 0;
          lVar21 = 0;
          local_40 = 0;
          local_48 = 0;
          lVar12 = 0;
        }
        else {
          lVar12 = (long)auVar30._0_4_;
          local_48 = lVar20 - lVar12;
          if (local_48 - 0x10000U < 0xffffffffffff0001) goto LAB_001d3f39;
          lVar21 = lVar20 + (ulong)uVar6;
          if (uVar15 == 0) {
            lVar13 = lVar20 + (ulong)uVar6;
            lVar16 = lVar21;
            while (lVar21 = lVar16, lVar13 + 4 < lVar17) {
              uVar6 = *(uint *)(lVar10 + lVar16);
              uVar15 = *(uint *)(lVar10 + (lVar16 - local_48));
              uVar24 = 0;
              if ((uVar15 ^ uVar6) != 0) {
                for (; ((uVar15 ^ uVar6) >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
                }
              }
              uVar24 = uVar24 >> 3;
              if (uVar6 == uVar15) {
                uVar24 = 4;
              }
              lVar21 = lVar16 + (ulong)uVar24;
              if (uVar6 != uVar15) break;
              lVar13 = (ulong)uVar24 + lVar16;
              lVar16 = lVar21;
            }
          }
          local_50 = lVar20;
          if ((lVar2 < lVar20) && (lVar3 < lVar12)) {
            while( true ) {
              lVar13 = local_50 + -1;
              lVar12 = lVar12 + -1;
              if (*(char *)(lVar10 + lVar13) != *(char *)(lVar10 + lVar12)) break;
              local_50 = lVar13;
              if ((lVar12 <= lVar3) || (lVar13 <= lVar2)) break;
            }
          }
          local_40 = lVar21 - local_50;
          lVar12 = (ulong)(local_48 < 0x600) + local_40 + -3;
          if ((lVar12 < 1) && (lVar21 < 2 || lVar12 != 0)) goto LAB_001d3f39;
        }
        uVar15 = auVar23._4_4_;
        uVar24 = auVar23._8_4_;
        uVar25 = auVar23._12_4_;
        uVar6 = 0;
        if (uVar15 != 0) {
          for (; (uVar15 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        uVar6 = uVar6 >> 3;
        if (uVar15 == 0) {
          uVar6 = 4;
        }
        if (2 < uVar6) {
          lVar16 = (long)auVar30._4_4_;
          lVar13 = lVar20 - lVar16;
          if (0xffffffffffff0000 < lVar13 - 0x10000U) {
            lVar14 = lVar20 + (ulong)uVar6;
            if (uVar15 == 0) {
              lVar19 = lVar20 + (ulong)uVar6;
              lVar18 = lVar14;
              while (lVar14 = lVar18, lVar19 + 4 < lVar17) {
                uVar6 = *(uint *)(lVar10 + lVar18);
                uVar15 = *(uint *)(lVar10 + (lVar18 - lVar13));
                uVar7 = 0;
                if ((uVar15 ^ uVar6) != 0) {
                  for (; ((uVar15 ^ uVar6) >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                  }
                }
                uVar7 = uVar7 >> 3;
                if (uVar6 == uVar15) {
                  uVar7 = 4;
                }
                lVar14 = lVar18 + (ulong)uVar7;
                if (uVar6 != uVar15) break;
                lVar19 = lVar18 + (ulong)uVar7;
                lVar18 = lVar14;
              }
            }
            lVar19 = lVar20;
            if ((lVar2 < lVar20) && (lVar3 < lVar16)) {
              while( true ) {
                lVar18 = lVar19 + -1;
                lVar16 = lVar16 + -1;
                if (*(char *)(lVar10 + lVar18) != *(char *)(lVar10 + lVar16)) break;
                lVar19 = lVar18;
                if ((lVar16 <= lVar3) || (lVar18 <= lVar2)) break;
              }
            }
            lVar16 = (ulong)(lVar13 < 0x600) + (lVar14 - lVar19) + -3;
            if ((lVar12 < lVar16) || ((lVar16 == lVar12 && (lVar21 + 1 < lVar14)))) {
              local_48 = lVar13;
              lVar12 = lVar16;
              lVar21 = lVar14;
              local_50 = lVar19;
              local_40 = lVar14 - lVar19;
            }
          }
        }
        auVar26._0_8_ = auVar23._8_8_;
        auVar26._8_4_ = uVar24;
        auVar26._12_4_ = uVar25;
        uVar6 = 0;
        if (uVar24 != 0) {
          for (; (uVar24 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        uVar6 = uVar6 >> 3;
        if (uVar24 == 0) {
          uVar6 = 4;
        }
        if (2 < uVar6) {
          auVar27._8_4_ = iVar32;
          auVar27._12_4_ = auVar30._12_4_;
          lVar16 = (long)iVar32;
          lVar13 = lVar20 - lVar16;
          auVar26 = auVar27;
          if (0xffffffffffff0000 < lVar13 - 0x10000U) {
            lVar14 = lVar20 + (ulong)uVar6;
            if (uVar24 == 0) {
              lVar19 = lVar20 + (ulong)uVar6;
              lVar18 = lVar14;
              while (lVar14 = lVar18, lVar19 + 4 < lVar17) {
                uVar6 = *(uint *)(lVar10 + lVar18);
                uVar15 = *(uint *)(lVar10 + (lVar18 - lVar13));
                uVar24 = 0;
                if ((uVar15 ^ uVar6) != 0) {
                  for (; ((uVar15 ^ uVar6) >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
                  }
                }
                uVar24 = uVar24 >> 3;
                if (uVar6 == uVar15) {
                  uVar24 = 4;
                }
                lVar14 = lVar18 + (ulong)uVar24;
                if (uVar6 != uVar15) break;
                lVar19 = lVar18 + (ulong)uVar24;
                lVar18 = lVar14;
              }
            }
            lVar19 = lVar20;
            if ((lVar2 < lVar20) && (lVar3 < lVar16)) {
              while( true ) {
                lVar18 = lVar19 + -1;
                lVar16 = lVar16 + -1;
                if (*(char *)(lVar10 + lVar18) != *(char *)(lVar10 + lVar16)) break;
                lVar19 = lVar18;
                if ((lVar16 <= lVar3) || (lVar18 <= lVar2)) break;
              }
            }
            lVar16 = (ulong)(lVar13 < 0x600) + (lVar14 - lVar19) + -3;
            if ((lVar12 < lVar16) || ((lVar16 == lVar12 && (lVar21 + 1 < lVar14)))) {
              local_48 = lVar13;
              lVar12 = lVar16;
              lVar21 = lVar14;
              local_50 = lVar19;
              local_40 = lVar14 - lVar19;
            }
          }
        }
        uVar29 = auVar26._8_8_;
        uVar6 = 0;
        if (uVar25 != 0) {
          for (; (uVar25 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        uVar6 = uVar6 >> 3;
        if (uVar25 == 0) {
          uVar6 = 4;
        }
        if (2 < uVar6) {
          lVar16 = (long)auVar30._12_4_;
          lVar13 = lVar20 - lVar16;
          if (0xffffffffffff0000 < lVar13 - 0x10000U) {
            lVar14 = lVar20 + (ulong)uVar6;
            if (uVar25 == 0) {
              lVar19 = lVar20 + (ulong)uVar6;
              lVar18 = lVar14;
              while (lVar14 = lVar18, lVar19 + 4 < lVar17) {
                uVar6 = *(uint *)(lVar10 + lVar18);
                uVar15 = *(uint *)(lVar10 + (lVar18 - lVar13));
                uVar24 = 0;
                if ((uVar15 ^ uVar6) != 0) {
                  for (; ((uVar15 ^ uVar6) >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
                  }
                }
                uVar24 = uVar24 >> 3;
                if (uVar6 == uVar15) {
                  uVar24 = 4;
                }
                lVar14 = lVar18 + (ulong)uVar24;
                if (uVar6 != uVar15) break;
                lVar19 = lVar18 + (ulong)uVar24;
                lVar18 = lVar14;
              }
            }
            lVar19 = lVar20;
            if ((lVar2 < lVar20) && (lVar3 < lVar16)) {
              while( true ) {
                lVar18 = lVar19 + -1;
                lVar16 = lVar16 + -1;
                if (*(char *)(lVar10 + lVar18) != *(char *)(lVar10 + lVar16)) break;
                lVar19 = lVar18;
                if ((lVar16 <= lVar3) || (lVar18 <= lVar2)) break;
              }
            }
            lVar16 = (ulong)(lVar13 < 0x600) + (lVar14 - lVar19) + -3;
            if ((lVar12 < lVar16) || ((lVar16 == lVar12 && (lVar21 + 1 < lVar14)))) {
              local_48 = lVar13;
              lVar12 = lVar16;
              lVar21 = lVar14;
              local_50 = lVar19;
              local_40 = lVar14 - lVar19;
            }
          }
        }
        lVar13 = param_1[0xf];
        if (lVar13 != 0) {
          uVar6 = *(uint *)(lVar10 + (lVar20 - lVar13));
          uVar15 = 0;
          if ((uVar6 ^ uVar1) != 0) {
            for (; ((uVar6 ^ uVar1) >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
            }
          }
          uVar15 = uVar15 >> 3;
          if (uVar1 == uVar6) {
            uVar15 = 4;
          }
          if ((0xffffffffffff0000 < lVar13 - 0x10000U) && (2 < uVar15)) {
            lVar16 = lVar20 + (ulong)uVar15;
            if (uVar1 == uVar6) {
              lVar14 = lVar20 + (ulong)uVar15;
              lVar19 = lVar16;
              while (lVar16 = lVar19, lVar14 + 4 < lVar17) {
                uVar6 = *(uint *)(lVar10 + lVar19);
                uVar15 = *(uint *)(lVar10 + (lVar19 - lVar13));
                uVar24 = 0;
                if ((uVar15 ^ uVar6) != 0) {
                  for (; ((uVar15 ^ uVar6) >> uVar24 & 1) == 0; uVar24 = uVar24 + 1) {
                  }
                }
                uVar24 = uVar24 >> 3;
                if (uVar6 == uVar15) {
                  uVar24 = 4;
                }
                lVar16 = lVar19 + (ulong)uVar24;
                if (uVar6 != uVar15) break;
                lVar14 = lVar19 + (ulong)uVar24;
                lVar19 = lVar16;
              }
            }
            lVar17 = lVar20;
            if (lVar2 < lVar20 && lVar3 < lVar20 - lVar13) {
              lVar19 = (lVar20 + -1) - lVar13;
              lVar14 = lVar20 + -1;
              while (lVar17 = lVar14, *(char *)(lVar10 + lVar17) == *(char *)(lVar10 + lVar19)) {
                if ((lVar19 <= lVar3) ||
                   (lVar19 = lVar19 + -1, lVar14 = lVar17 + -1, lVar17 <= lVar2)) goto LAB_001d44a0;
              }
              lVar17 = lVar17 + 1;
            }
LAB_001d44a0:
            lVar3 = (lVar16 - lVar17) + -1;
            if ((lVar12 < lVar3) || ((lVar3 == lVar12 && (lVar21 + 1 < lVar16)))) {
              local_40 = lVar16 - lVar17;
              lVar12 = lVar3;
              lVar21 = lVar16;
              local_50 = lVar17;
              local_48 = lVar13;
            }
          }
        }
        if (local_40 == 0) {
          if (399 < lVar20 - lVar2) {
            if (param_1[0xc] != 0) {
              lVar10 = _emitMatch(param_1);
              uVar29 = extraout_XMM1_Qb_00;
              if (lVar10 == 0) {
                return;
              }
              goto LAB_001d45c4;
            }
            puVar4 = (undefined2 *)param_1[6];
            uVar22 = param_1[8];
            if ((long)puVar4 + 0x119U < uVar22) {
              *puVar4 = 0xffe0;
              _memcpy(puVar4 + 1,(void *)(lVar10 + lVar2),0x10f);
              uVar29 = auVar26._8_8_;
              uVar22 = (long)puVar4 + 0x111;
            }
            if ((ulong)param_1[8] <= uVar22) {
              return;
            }
            param_1[5] = param_1[5] + 0x10f;
            uVar5 = param_1[6];
            param_1[6] = uVar22;
            if (uVar22 == uVar5) {
              return;
            }
          }
        }
        else if (param_1[0xc] == 0) {
          param_1[10] = local_50;
          param_1[0xb] = lVar21;
          param_1[0xc] = local_40;
          param_1[0xd] = local_48;
          param_1[0xe] = lVar12;
        }
        else if (local_50 < param_1[0xb]) {
          if (param_1[0xe] < lVar12) {
            param_1[10] = local_50;
            param_1[0xb] = lVar21;
            param_1[0xc] = local_40;
            param_1[0xd] = local_48;
            param_1[0xe] = lVar12;
          }
          lVar10 = _emitMatch(param_1);
          uVar29 = extraout_XMM1_Qb;
          if (lVar10 == 0) {
            return;
          }
LAB_001d45c4:
          *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
          param_1[0xe] = 0;
        }
        else {
          lVar10 = _emitMatch(param_1);
          if (lVar10 == 0) {
            return;
          }
          param_1[10] = local_50;
          param_1[0xb] = lVar21;
          param_1[0xc] = local_40;
          param_1[0xd] = local_48;
          param_1[0xe] = lVar12;
          uVar29 = extraout_XMM1_Qb_01;
        }
      }
      auVar8._4_8_ = uVar29;
      auVar8._0_4_ = auVar30._0_4_;
      auVar28._0_8_ = auVar8._0_8_ << 0x20;
      auVar28._8_4_ = auVar30._4_4_;
      auVar28._12_4_ = iVar32;
      auVar9._4_8_ = auVar27._0_8_;
      auVar9._0_4_ = auVar31._0_4_;
      auVar30._0_8_ = auVar9._0_8_ << 0x20;
      auVar30._8_4_ = auVar31._4_4_;
      auVar30._12_4_ = auVar31._8_4_;
      auVar31._4_12_ = auVar30._4_12_;
      auVar31._0_4_ = uVar1;
      in_XMM1._4_12_ = auVar28._4_12_;
      in_XMM1._0_4_ = (int)lVar20;
      lVar20 = param_1[0x10];
      *(undefined1 (*) [16])(lVar20 + lVar11) = in_XMM1;
      *(undefined1 (*) [16])(lVar20 + 0x10 + lVar11) = auVar31;
      lVar20 = param_1[3] + 1;
      param_1[3] = lVar20;
    } while (lVar20 < param_1[4]);
  }
  return;
}

