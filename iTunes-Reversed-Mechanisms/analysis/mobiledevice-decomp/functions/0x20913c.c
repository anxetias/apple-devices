// rea decompile_all
// name: _BrotliFindAllStaticDictionaryMatches
// address: 0x20913c
// body: available
// range: 0x20913c-0x20a964 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_BrotliFindAllStaticDictionaryMatches
          (long *param_1,byte *param_2,ulong param_3,ulong param_4,long param_5)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  long lVar28;
  uint uVar29;
  bool bVar30;
  undefined8 local_98;
  
  lVar8 = param_1[5];
  uVar23 = (ulong)*(ushort *)(lVar8 + (ulong)((uint)(*(int *)param_2 * 0x1e35a7bd) >> 0x11) * 2);
  lVar1 = param_5 + 0xc;
  if (uVar23 == 0) {
    local_98 = 0;
  }
  else {
    lVar28 = param_5 + 8;
    lVar14 = param_5 + 0x10;
    lVar15 = param_5 + 0x14;
    lVar16 = param_5 + 4;
    lVar17 = *param_1;
    lVar12 = param_1[6];
    local_98 = 0;
    do {
      bVar2 = *(byte *)(lVar12 + uVar23 * 4);
      cVar3 = *(char *)(lVar12 + 1 + uVar23 * 4);
      uVar7 = *(ushort *)(lVar12 + 2 + uVar23 * 4);
      uVar27 = bVar2 & 0x1f;
      uVar18 = (ulong)uVar27;
      bVar4 = *(byte *)(lVar17 + uVar18);
      uVar29 = (uint)uVar7;
      if (cVar3 == '\0') {
        lVar13 = uVar7 * uVar18 + *(long *)(lVar17 + 0xa8) +
                 (ulong)*(uint *)(lVar17 + 0x20 + uVar18 * 4);
        uVar10 = param_4;
        if (uVar18 < param_4) {
          uVar10 = uVar18;
        }
        if (7 < uVar10) {
          uVar24 = (ulong)((uint)uVar10 & 0x18);
          pbVar19 = param_2 + uVar24;
          uVar25 = 0;
LAB_002092f1:
          uVar26 = *(ulong *)(lVar13 + uVar25);
          if (*(ulong *)(param_2 + uVar25) == uVar26) goto code_r0x002092fe;
          uVar26 = uVar26 ^ *(ulong *)(param_2 + uVar25);
          uVar10 = 0;
          if (uVar26 != 0) {
            for (; (uVar26 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
          uVar25 = (uVar10 >> 3 & 0x1fffffff) + uVar25;
          goto LAB_0020932f;
        }
        uVar24 = 0;
        pbVar19 = param_2;
LAB_00209b2a:
        uVar10 = uVar10 & 7;
        uVar25 = uVar24;
        if (uVar10 != 0) {
          uVar26 = uVar24 | uVar10;
          do {
            uVar25 = uVar24;
            if (*(byte *)(lVar13 + uVar24) != *pbVar19) break;
            pbVar19 = pbVar19 + 1;
            uVar24 = uVar24 + 1;
            uVar10 = uVar10 - 1;
            uVar25 = uVar26;
          } while (uVar10 != 0);
        }
LAB_0020932f:
        if (uVar25 == uVar18) {
          uVar9 = (uint)uVar7 * 0x20 + uVar27;
          uVar21 = *(uint *)(param_5 + uVar18 * 4);
          if (uVar21 < uVar9) {
            uVar9 = uVar21;
          }
          *(uint *)(param_5 + uVar18 * 4) = uVar9;
          local_98 = 1;
        }
        if (uVar18 - 1 <= uVar25) {
          uVar9 = ((uint)uVar7 + (int)(0xcL << (bVar4 & 0x3f))) * 0x20 + uVar27;
          uVar21 = *(uint *)(param_5 + -4 + uVar18 * 4);
          if (uVar21 < uVar9) {
            uVar9 = uVar21;
          }
          *(uint *)(param_5 + -4 + uVar18 * 4) = uVar9;
          local_98 = 1;
          if ((((uVar18 + 2 < param_4) && (param_2[uVar18 - 1] == 0x69)) &&
              (param_2[uVar18] == 0x6e)) &&
             ((param_2[uVar18 + 1] == 0x67 && (param_2[uVar18 + 2] == 0x20)))) {
            uVar9 = ((int)(0x31L << (bVar4 & 0x3f)) + uVar29) * 0x20 + uVar27;
            uVar21 = *(uint *)(lVar1 + uVar18 * 4);
            if (uVar21 < uVar9) {
              uVar9 = uVar21;
            }
            *(uint *)(lVar1 + uVar18 * 4) = uVar9;
          }
        }
        uVar10 = uVar18 - 9;
        if (uVar18 - 9 < param_3) {
          uVar10 = param_3;
        }
        if ((byte)uVar27 < 10) {
          uVar10 = param_3;
        }
        uVar24 = uVar18 - 2;
        if (uVar25 < uVar18 - 2) {
          uVar24 = uVar25;
        }
        if (uVar10 <= uVar24) {
          uVar26 = param_1[2];
          lVar22 = uVar18 * 4 + uVar10 * -4;
          lVar13 = (ulong)(uVar27 * 2) * 3 + uVar10 * -6;
          do {
            uVar9 = ((uint)uVar7 +
                    (((uint)(uVar26 >> ((byte)lVar13 & 0x3f)) & 0x3f) + (int)lVar22 <<
                    (bVar4 & 0x3f))) * 0x20 + uVar27;
            uVar21 = *(uint *)(param_5 + uVar10 * 4);
            if (uVar21 < uVar9) {
              uVar9 = uVar21;
            }
            *(uint *)(param_5 + uVar10 * 4) = uVar9;
            uVar10 = uVar10 + 1;
            lVar22 = lVar22 + -4;
            lVar13 = lVar13 + -6;
          } while (uVar24 + 1 != uVar10);
          local_98 = 1;
        }
        if (uVar25 < uVar18) goto switchD_002094d9_caseD_21;
        uVar10 = uVar18 + 6;
        if (param_4 <= uVar10) goto switchD_002095fd_caseD_21;
        bVar5 = param_2[uVar18];
        if (0x3c < bVar5) {
          switch(bVar5) {
          case 0x61:
            if ((param_2[uVar18 + 1] == 0x6c) && (param_2[uVar18 + 2] == 0x20)) {
              puVar11 = (uint *)(lVar1 + uVar18 * 4);
              uVar10 = 0x54;
              goto LAB_00209a44;
            }
            break;
          case 0x62:
          case 99:
          case 100:
          case 0x67:
          case 0x68:
          case 0x6a:
          case 0x6b:
          case 0x6d:
          case 0x6e:
            goto switchD_002095fd_caseD_21;
          case 0x65:
            bVar5 = param_2[uVar18 + 1];
            if (bVar5 == 0x73) {
              if ((param_2[uVar18 + 2] == 0x74) && (param_2[uVar18 + 3] == 0x20)) {
                puVar11 = (uint *)(lVar14 + uVar18 * 4);
                uVar10 = 0x5f;
                goto LAB_00209a44;
              }
            }
            else if (bVar5 == 0x72) {
              if (param_2[uVar18 + 2] == 0x20) {
                puVar11 = (uint *)(lVar1 + uVar18 * 4);
                uVar10 = 0x52;
                goto LAB_00209a44;
              }
            }
            else if ((bVar5 == 100) && (param_2[uVar18 + 2] == 0x20)) {
              puVar11 = (uint *)(lVar1 + uVar18 * 4);
              uVar10 = 0x35;
              goto LAB_00209a44;
            }
            break;
          case 0x66:
            if (((param_2[uVar18 + 1] == 0x75) && (param_2[uVar18 + 2] == 0x6c)) &&
               (param_2[uVar18 + 3] == 0x20)) {
              puVar11 = (uint *)(lVar14 + uVar18 * 4);
              uVar10 = 0x5a;
              goto LAB_00209a44;
            }
            break;
          case 0x69:
            if (param_2[uVar18 + 1] == 0x7a) {
              if ((param_2[uVar18 + 2] == 0x65) && (param_2[uVar18 + 3] == 0x20)) {
                puVar11 = (uint *)(lVar14 + uVar18 * 4);
                uVar10 = 100;
                goto LAB_00209a44;
              }
            }
            else if (((param_2[uVar18 + 1] == 0x76) && (param_2[uVar18 + 2] == 0x65)) &&
                    (param_2[uVar18 + 3] == 0x20)) {
              puVar11 = (uint *)(lVar14 + uVar18 * 4);
              uVar10 = 0x5c;
              goto LAB_00209a44;
            }
            break;
          case 0x6c:
            if (param_2[uVar18 + 1] == 0x79) {
              if (param_2[uVar18 + 2] == 0x20) {
                puVar11 = (uint *)(lVar1 + uVar18 * 4);
                uVar10 = 0x3d;
                goto LAB_00209a44;
              }
            }
            else if ((((param_2[uVar18 + 1] == 0x65) && (param_2[uVar18 + 2] == 0x73)) &&
                     (param_2[uVar18 + 3] == 0x73)) && (param_2[uVar18 + 4] == 0x20)) {
              puVar11 = (uint *)(lVar15 + uVar18 * 4);
              uVar10 = 0x5d;
              goto LAB_00209a44;
            }
            break;
          case 0x6f:
            if (((param_2[uVar18 + 1] == 0x75) && (param_2[uVar18 + 2] == 0x73)) &&
               (param_2[uVar18 + 3] == 0x20)) {
              puVar11 = (uint *)(lVar14 + uVar18 * 4);
              uVar10 = 0x6a;
              goto LAB_00209a44;
            }
            break;
          default:
            if (bVar5 == 0x3d) {
              if (param_2[uVar18 + 1] == 0x27) {
                puVar11 = (uint *)(lVar28 + uVar18 * 4);
                uVar10 = 0x56;
              }
              else {
                if (param_2[uVar18 + 1] != 0x22) break;
                puVar11 = (uint *)(lVar28 + uVar18 * 4);
                uVar10 = 0x46;
              }
            }
            else {
              if (bVar5 != 0x5d) break;
              puVar11 = (uint *)(lVar16 + uVar18 * 4);
              uVar10 = 0x18;
            }
            goto LAB_00209a44;
          }
          goto LAB_0020948f;
        }
        switch(bVar5) {
        case 0x20:
          uVar9 = uVar27 + ((int)(1L << (bVar4 & 0x3f)) + uVar29) * 0x20;
          uVar21 = *(uint *)(lVar16 + uVar18 * 4);
          if (uVar21 < uVar9) {
            uVar9 = uVar21;
          }
          *(uint *)(lVar16 + uVar18 * 4) = uVar9;
          bVar5 = param_2[uVar18 + 1];
          switch(bVar5) {
          case 0x61:
            bVar5 = param_2[uVar18 + 2];
            if (0x72 < bVar5) {
              if (bVar5 == 0x73) {
                if (param_2[uVar18 + 3] == 0x20) {
                  puVar11 = (uint *)(lVar14 + uVar18 * 4);
                  uVar10 = 0x2e;
                  break;
                }
              }
              else if ((bVar5 == 0x74) && (param_2[uVar18 + 3] == 0x20)) {
                puVar11 = (uint *)(lVar14 + uVar18 * 4);
                uVar10 = 0x3c;
                break;
              }
              goto LAB_0020948f;
            }
            if (bVar5 == 0x20) {
              puVar11 = (uint *)(lVar1 + uVar18 * 4);
              uVar10 = 0x1c;
            }
            else {
              if (((bVar5 != 0x6e) || (param_2[uVar18 + 3] != 100)) || (param_2[uVar18 + 4] != 0x20)
                 ) goto LAB_0020948f;
              puVar11 = (uint *)(lVar15 + uVar18 * 4);
              uVar10 = 10;
            }
            break;
          case 0x62:
            if (param_2[uVar18 + 2] != 0x79) goto switchD_002095fd_caseD_21;
            if (param_2[uVar18 + 3] != 0x20) goto LAB_0020948f;
            puVar11 = (uint *)(lVar14 + uVar18 * 4);
            uVar10 = 0x26;
            break;
          case 99:
          case 100:
          case 0x65:
          case 0x67:
          case 0x68:
          case 0x6a:
          case 0x6b:
          case 0x6c:
          case 0x6d:
            goto switchD_002094d9_caseD_21;
          case 0x66:
            if (param_2[uVar18 + 2] == 0x72) {
              if (((param_2[uVar18 + 3] != 0x6f) || (param_2[uVar18 + 4] != 0x6d)) ||
                 (param_2[uVar18 + 5] != 0x20)) goto switchD_002095fd_caseD_21;
              puVar11 = (uint *)(param_5 + uVar10 * 4);
              uVar10 = 0x25;
            }
            else {
              if (param_2[uVar18 + 2] != 0x6f) goto switchD_002095fd_caseD_21;
              if ((param_2[uVar18 + 3] != 0x72) || (param_2[uVar18 + 4] != 0x20)) goto LAB_0020948f;
              puVar11 = (uint *)(lVar15 + uVar18 * 4);
              uVar10 = 0x19;
            }
            break;
          case 0x69:
            if (param_2[uVar18 + 2] == 0x73) {
              if (param_2[uVar18 + 3] == 0x20) {
                puVar11 = (uint *)(lVar14 + uVar18 * 4);
                uVar10 = 0x2f;
                break;
              }
            }
            else if ((param_2[uVar18 + 2] == 0x6e) && (param_2[uVar18 + 3] == 0x20)) {
              puVar11 = (uint *)(lVar14 + uVar18 * 4);
              uVar10 = 0x10;
              break;
            }
            goto LAB_0020948f;
          case 0x6e:
            if (param_2[uVar18 + 2] != 0x6f) goto switchD_002095fd_caseD_21;
            if ((param_2[uVar18 + 3] != 0x74) || (param_2[uVar18 + 4] != 0x20)) goto LAB_0020948f;
            puVar11 = (uint *)(lVar15 + uVar18 * 4);
            uVar10 = 0x50;
            break;
          case 0x6f:
            if (param_2[uVar18 + 2] == 0x6e) {
              if (param_2[uVar18 + 3] == 0x20) {
                puVar11 = (uint *)(lVar14 + uVar18 * 4);
                uVar10 = 0x2d;
                break;
              }
            }
            else if ((param_2[uVar18 + 2] == 0x66) && (param_2[uVar18 + 3] == 0x20)) {
              puVar11 = (uint *)(lVar14 + uVar18 * 4);
              uVar10 = 8;
              break;
            }
            goto LAB_0020948f;
          default:
            if (bVar5 == 0x74) {
              if (param_2[uVar18 + 2] == 0x6f) {
                if (param_2[uVar18 + 3] != 0x20) goto LAB_0020948f;
                puVar11 = (uint *)(lVar14 + uVar18 * 4);
                uVar10 = 0x11;
              }
              else {
                if (param_2[uVar18 + 2] != 0x68) goto switchD_002095fd_caseD_21;
                if (param_2[uVar18 + 3] == 0x61) {
                  if ((param_2[uVar18 + 4] != 0x74) || (param_2[uVar18 + 5] != 0x20))
                  goto switchD_002095fd_caseD_21;
                  puVar11 = (uint *)(param_5 + uVar10 * 4);
                  uVar10 = 0x1d;
                }
                else {
                  if (param_2[uVar18 + 3] != 0x65) goto switchD_002095fd_caseD_21;
                  if (param_2[uVar18 + 4] != 0x20) goto LAB_0020948f;
                  puVar11 = (uint *)(lVar15 + uVar18 * 4);
                  uVar10 = 5;
                }
              }
            }
            else {
              if ((((bVar5 != 0x77) || (param_2[uVar18 + 2] != 0x69)) ||
                  (param_2[uVar18 + 3] != 0x74)) ||
                 ((param_2[uVar18 + 4] != 0x68 || (param_2[uVar18 + 5] != 0x20))))
              goto switchD_002095fd_caseD_21;
              puVar11 = (uint *)(param_5 + uVar10 * 4);
              uVar10 = 0x23;
            }
          }
          break;
        case 0x21:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2d:
          goto switchD_002094d9_caseD_21;
        case 0x22:
          uVar9 = ((uint)uVar7 + (int)(0x13L << (bVar4 & 0x3f))) * 0x20 + uVar27;
          uVar21 = *(uint *)(lVar16 + uVar18 * 4);
          if (uVar21 < uVar9) {
            uVar9 = uVar21;
          }
          *(uint *)(lVar16 + uVar18 * 4) = uVar9;
          if (param_2[uVar18 + 1] != 0x3e) goto switchD_002094d9_caseD_21;
          puVar11 = (uint *)(lVar28 + uVar18 * 4);
          uVar10 = 0x15;
          break;
        case 0x27:
          puVar11 = (uint *)(lVar16 + uVar18 * 4);
          uVar10 = 0x24;
          break;
        case 0x28:
          puVar11 = (uint *)(lVar16 + uVar18 * 4);
          uVar10 = 0x39;
          break;
        case 0x2c:
          uVar9 = ((uint)uVar7 + (int)(0x4cL << (bVar4 & 0x3f))) * 0x20 + uVar27;
          uVar21 = *(uint *)(lVar16 + uVar18 * 4);
          if (uVar21 < uVar9) {
            uVar9 = uVar21;
          }
          *(uint *)(lVar16 + uVar18 * 4) = uVar9;
          if (param_2[uVar18 + 1] != 0x20) goto switchD_002094d9_caseD_21;
          puVar11 = (uint *)(lVar28 + uVar18 * 4);
          uVar10 = 0xe;
          break;
        case 0x2e:
          uVar9 = ((uint)uVar7 + (int)(0x14L << (bVar4 & 0x3f))) * 0x20 + uVar27;
          uVar21 = *(uint *)(lVar16 + uVar18 * 4);
          if (uVar21 < uVar9) {
            uVar9 = uVar21;
          }
          *(uint *)(lVar16 + uVar18 * 4) = uVar9;
          if (param_2[uVar18 + 1] == 0x20) {
            uVar9 = ((uint)uVar7 + (int)(0x1fL << (bVar4 & 0x3f))) * 0x20 + uVar27;
            uVar21 = *(uint *)(lVar28 + uVar18 * 4);
            if (uVar21 < uVar9) {
              uVar9 = uVar21;
            }
            *(uint *)(lVar28 + uVar18 * 4) = uVar9;
            if (param_2[uVar18 + 2] == 0x54) {
              if (param_2[uVar18 + 3] != 0x68) goto switchD_002095fd_caseD_21;
              if (param_2[uVar18 + 4] == 0x69) {
                if (param_2[uVar18 + 5] != 0x73) goto switchD_002095fd_caseD_21;
                if (param_2[uVar18 + 6] != 0x20) goto LAB_0020948f;
                puVar11 = (uint *)(param_5 + 0x1c + uVar18 * 4);
                uVar10 = 0x4b;
              }
              else {
                if ((param_2[uVar18 + 4] != 0x65) || (param_2[uVar18 + 5] != 0x20))
                goto switchD_002095fd_caseD_21;
                puVar11 = (uint *)(param_5 + uVar10 * 4);
                uVar10 = 0x2b;
              }
              break;
            }
          }
          goto switchD_002094d9_caseD_21;
        default:
          if (bVar5 == 10) {
            uVar9 = ((uint)uVar7 + (int)(0x16L << (bVar4 & 0x3f))) * 0x20 + uVar27;
            uVar21 = *(uint *)(lVar16 + uVar18 * 4);
            if (uVar21 < uVar9) {
              uVar9 = uVar21;
            }
            *(uint *)(lVar16 + uVar18 * 4) = uVar9;
            if (param_2[uVar18 + 1] != 9) goto switchD_002095fd_caseD_21;
            puVar11 = (uint *)(lVar28 + uVar18 * 4);
            uVar10 = 0x32;
          }
          else {
            if (bVar5 != 0x3a) goto switchD_002095fd_caseD_21;
            puVar11 = (uint *)(lVar16 + uVar18 * 4);
            uVar10 = 0x33;
          }
        }
        goto LAB_00209a44;
      }
      if (param_4 < uVar18) goto LAB_0020948f;
      pbVar19 = (byte *)((ulong)*(uint *)(lVar17 + 0x20 + uVar18 * 4) + *(long *)(lVar17 + 0xa8) +
                        (ulong)(uVar7 * uVar27));
      if (cVar3 == '\n') {
        if ((0x19 < (byte)(*pbVar19 + 0x9f)) || ((*pbVar19 ^ *param_2) != 0x20))
        goto switchD_002094d9_caseD_21;
        uVar10 = _BrotliFindAllStaticDictionaryMatches_cold_2(pbVar19,uVar18,param_2 + 1);
        lVar13 = 9;
        if ((uVar10 & 1) == 0) goto LAB_0020948f;
      }
      else {
        lVar13 = 0x2c;
        if ((byte)uVar27 != 0) {
          uVar10 = 0;
          do {
            bVar5 = pbVar19[uVar10];
            if ((byte)(bVar5 + 0x9f) < 0x1a) {
              if ((param_2[uVar10] ^ bVar5) != 0x20) goto switchD_002094d9_caseD_21;
            }
            else if (bVar5 != param_2[uVar10]) goto switchD_002094d9_caseD_21;
            uVar10 = uVar10 + 1;
          } while (uVar18 != uVar10);
        }
      }
      uVar9 = ((uint)uVar7 + (int)(lVar13 << (bVar4 & 0x3f))) * 0x20 + uVar27;
      uVar21 = *(uint *)(param_5 + uVar18 * 4);
      if (uVar21 < uVar9) {
        uVar9 = uVar21;
      }
      *(uint *)(param_5 + uVar18 * 4) = uVar9;
      local_98 = 1;
      if (param_4 <= uVar18 + 1) goto LAB_0020948f;
      switch(param_2[uVar18]) {
      case 0x20:
        uVar10 = (ulong)(cVar3 != '\n') << 6 | 4;
        goto LAB_0020974c;
      case 0x21:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2d:
        goto switchD_002095fd_caseD_21;
      case 0x22:
        lVar13 = 0x57;
        if (cVar3 == '\n') {
          lVar13 = 0x42;
        }
        uVar9 = ((int)(lVar13 << (bVar4 & 0x3f)) + uVar29) * 0x20 + uVar27;
        uVar21 = *(uint *)(param_5 + 4 + uVar18 * 4);
        if (uVar21 < uVar9) {
          uVar9 = uVar21;
        }
        *(uint *)(param_5 + 4 + uVar18 * 4) = uVar9;
        if (param_2[uVar18 + 1] == 0x3e) {
          uVar10 = 0x61;
          uVar24 = 0x45;
LAB_00209801:
          if (cVar3 == '\n') {
            uVar10 = uVar24;
          }
LAB_00209805:
          puVar11 = (uint *)(lVar28 + uVar18 * 4);
          local_98 = 1;
          goto LAB_00209a44;
        }
        break;
      case 0x27:
        uVar10 = 0x5e;
        uVar24 = 0x4a;
        goto LAB_00209748;
      case 0x28:
        uVar10 = 0x71;
        uVar24 = 0x4e;
LAB_00209748:
        if (cVar3 == '\n') {
          uVar10 = uVar24;
        }
LAB_0020974c:
        puVar11 = (uint *)(param_5 + (uVar18 + 1) * 4);
        local_98 = 1;
LAB_00209a44:
        uVar27 = uVar27 | (uVar29 + (int)(uVar10 << (bVar4 & 0x3f))) * 0x20;
        if (*puVar11 < uVar27) {
          uVar27 = *puVar11;
        }
        *puVar11 = uVar27;
        break;
      case 0x2c:
        lVar13 = 0x70;
        if (cVar3 == '\n') {
          lVar13 = 99;
        }
        uVar9 = ((int)(lVar13 << (bVar4 & 0x3f)) + uVar29) * 0x20 + uVar27;
        uVar21 = *(uint *)(param_5 + 4 + uVar18 * 4);
        if (uVar21 < uVar9) {
          uVar9 = uVar21;
        }
        *(uint *)(param_5 + 4 + uVar18 * 4) = uVar9;
        if (param_2[uVar18 + 1] == 0x20) {
          uVar10 = 0x6b;
          uVar24 = 0x3a;
          goto LAB_00209801;
        }
        break;
      case 0x2e:
        lVar13 = 0x65;
        if (cVar3 == '\n') {
          lVar13 = 0x4f;
        }
        uVar9 = ((int)(lVar13 << (bVar4 & 0x3f)) + uVar29) * 0x20 + uVar27;
        uVar21 = *(uint *)(param_5 + 4 + uVar18 * 4);
        if (uVar21 < uVar9) {
          uVar9 = uVar21;
        }
        *(uint *)(param_5 + 4 + uVar18 * 4) = uVar9;
        if (param_2[uVar18 + 1] == 0x20) {
          uVar10 = 0x72;
          uVar24 = 0x58;
          goto LAB_00209801;
        }
        break;
      default:
        if (param_2[uVar18] == 0x3d) {
          if (param_2[uVar18 + 1] == 0x27) {
            uVar10 = (ulong)(cVar3 != '\n') * 8 + 0x6c;
          }
          else {
            if (param_2[uVar18 + 1] != 0x22) break;
            uVar10 = (ulong)(cVar3 == '\n') ^ 0x69;
          }
          goto LAB_00209805;
        }
      }
LAB_0020948f:
      uVar23 = uVar23 + 1;
    } while (-1 < (char)bVar2);
  }
  if (param_4 < 5) {
    return local_98;
  }
  bVar2 = *param_2;
  if (((bVar2 == 0x2e) || (bVar2 == 0x20)) &&
     (uVar23 = (ulong)*(ushort *)
                       (lVar8 + (ulong)((uint)(*(int *)(param_2 + 1) * 0x1e35a7bd) >> 0x11) * 2),
     uVar23 != 0)) {
    pbVar19 = param_2 + 1;
    bVar30 = bVar2 == 0x20;
    lVar8 = *param_1;
    lVar28 = param_1[6];
    lVar14 = 0x20;
    if (bVar30) {
      lVar14 = 6;
    }
    lVar15 = 0x43;
    if (bVar30) {
      lVar15 = 0x59;
    }
    lVar16 = 0x4d;
    if (bVar30) {
      lVar16 = 2;
    }
    do {
      bVar4 = *(byte *)(lVar28 + uVar23 * 4);
      cVar3 = *(char *)(lVar28 + 1 + uVar23 * 4);
      uVar7 = *(ushort *)(lVar28 + 2 + uVar23 * 4);
      uVar27 = bVar4 & 0x1f;
      uVar18 = (ulong)uVar27;
      bVar5 = *(byte *)(lVar8 + uVar18);
      if (cVar3 == '\0') {
        if (uVar18 <= param_4 - 1) {
          lVar17 = (ulong)*(uint *)(lVar8 + 0x20 + uVar18 * 4) + *(long *)(lVar8 + 0xa8) +
                   uVar7 * uVar18;
          if (7 < (byte)uVar27) {
            uVar10 = (ulong)(bVar4 & 0x18);
            pbVar20 = pbVar19 + uVar10;
            uVar24 = 0;
LAB_0020a06f:
            uVar25 = *(ulong *)(lVar17 + uVar24);
            if (*(ulong *)(pbVar19 + uVar24) == uVar25) goto code_r0x0020a07c;
            uVar25 = uVar25 ^ *(ulong *)(pbVar19 + uVar24);
            uVar10 = 0;
            if (uVar25 != 0) {
              for (; (uVar25 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
              }
            }
            uVar24 = (uVar10 >> 3 & 0x1fffffff) + uVar24;
            goto LAB_0020a0a5;
          }
          uVar10 = 0;
          pbVar20 = pbVar19;
LAB_0020a465:
          uVar25 = uVar18 & 7;
          uVar24 = uVar10;
          if ((bVar4 & 7) != 0) {
            uVar26 = uVar10 | uVar25;
            do {
              uVar24 = uVar10;
              if (*(byte *)(lVar17 + uVar10) != *pbVar20) break;
              pbVar20 = pbVar20 + 1;
              uVar10 = uVar10 + 1;
              uVar25 = uVar25 - 1;
              uVar24 = uVar26;
            } while (uVar25 != 0);
          }
LAB_0020a0a5:
          if (uVar24 == uVar18) {
            uVar21 = ((int)(lVar14 << (bVar5 & 0x3f)) + (uint)uVar7) * 0x20 | uVar27;
            uVar29 = *(uint *)(param_5 + 4 + uVar18 * 4);
            if (uVar29 < uVar21) {
              uVar21 = uVar29;
            }
            *(uint *)(param_5 + 4 + uVar18 * 4) = uVar21;
            uVar10 = uVar18 + 2;
            local_98 = 1;
            if (uVar10 < param_4) {
              bVar6 = param_2[uVar18 + 1];
              if (bVar6 == 0x28) {
                puVar11 = (uint *)(param_5 + uVar10 * 4);
                lVar17 = lVar15;
              }
              else {
                if (bVar6 != 0x20) {
                  if (bVar2 == 0x20) {
                    if (bVar6 == 0x3d) {
                      if (param_2[uVar18 + 2] == 0x27) {
                        puVar11 = (uint *)(lVar1 + uVar18 * 4);
                        lVar17 = 0x62;
                      }
                      else {
                        if (param_2[uVar18 + 2] != 0x22) goto LAB_0020a452;
                        puVar11 = (uint *)(lVar1 + uVar18 * 4);
                        lVar17 = 0x51;
                      }
                      goto LAB_0020a429;
                    }
                    if (bVar6 == 0x2e) {
                      uVar21 = ((int)(0x47L << (bVar5 & 0x3f)) + (uint)uVar7) * 0x20 + uVar27;
                      uVar29 = *(uint *)(param_5 + 8 + uVar18 * 4);
                      if (uVar29 < uVar21) {
                        uVar21 = uVar29;
                      }
                      *(uint *)(param_5 + 8 + uVar18 * 4) = uVar21;
                      if (param_2[uVar18 + 2] == 0x20) {
                        puVar11 = (uint *)(lVar1 + uVar18 * 4);
                        lVar17 = 0x34;
                        goto LAB_0020a429;
                      }
                    }
                    else if (bVar6 == 0x2c) {
                      uVar21 = ((int)(0x67L << (bVar5 & 0x3f)) + (uint)uVar7) * 0x20 + uVar27;
                      uVar29 = *(uint *)(param_5 + 8 + uVar18 * 4);
                      if (uVar29 < uVar21) {
                        uVar21 = uVar29;
                      }
                      *(uint *)(param_5 + 8 + uVar18 * 4) = uVar21;
                      if (param_2[uVar18 + 2] == 0x20) {
                        puVar11 = (uint *)(lVar1 + uVar18 * 4);
                        lVar17 = 0x21;
                        goto LAB_0020a429;
                      }
                    }
                  }
                  goto LAB_0020a452;
                }
                puVar11 = (uint *)(param_5 + uVar10 * 4);
                lVar17 = lVar16;
              }
LAB_0020a429:
              uVar27 = uVar27 | ((uint)uVar7 + (int)(lVar17 << (bVar5 & 0x3f))) * 0x20;
              if (*puVar11 < uVar27) {
                uVar27 = *puVar11;
              }
              *puVar11 = uVar27;
              local_98 = 1;
            }
          }
        }
      }
      else if ((bVar2 == 0x20) && (uVar18 <= param_4 - 1)) {
        pbVar20 = (byte *)((ulong)*(uint *)(lVar8 + 0x20 + uVar18 * 4) + *(long *)(lVar8 + 0xa8) +
                          (ulong)(uVar7 * uVar27));
        if (cVar3 == '\n') {
          if (((byte)(*pbVar20 + 0x9f) < 0x1a) && ((*pbVar20 ^ *pbVar19) == 0x20)) {
            uVar10 = _BrotliFindAllStaticDictionaryMatches_cold_2(pbVar20,uVar18,param_2 + 2);
            lVar17 = 0x1e;
            if ((uVar10 & 1) != 0) goto LAB_0020a16c;
          }
        }
        else {
          lVar17 = 0x55;
          if ((byte)uVar27 != 0) {
            uVar10 = 0;
            do {
              bVar6 = pbVar20[uVar10];
              if ((byte)(bVar6 + 0x9f) < 0x1a) {
                if ((pbVar19[uVar10] ^ bVar6) != 0x20) goto LAB_0020a452;
              }
              else if (bVar6 != pbVar19[uVar10]) goto LAB_0020a452;
              uVar10 = uVar10 + 1;
            } while (uVar18 != uVar10);
          }
LAB_0020a16c:
          uVar9 = (uint)uVar7;
          uVar21 = (uVar9 + (int)(lVar17 << (bVar5 & 0x3f))) * 0x20 | uVar27;
          uVar29 = *(uint *)(param_5 + 4 + uVar18 * 4);
          if (uVar29 < uVar21) {
            uVar21 = uVar29;
          }
          *(uint *)(param_5 + 4 + uVar18 * 4) = uVar21;
          local_98 = 1;
          if (uVar18 + 2 < param_4) {
            bVar6 = param_2[uVar18 + 1];
            if (bVar6 < 0x2e) {
              if (bVar6 == 0x20) {
                lVar17 = 0x53;
                if (cVar3 == '\n') {
                  lVar17 = 0xf;
                }
                puVar11 = (uint *)(param_5 + (uVar18 + 2) * 4);
                goto LAB_0020a429;
              }
              if (bVar6 == 0x2c) {
                if (cVar3 == '\n') {
                  uVar21 = ((int)(0x6dL << (bVar5 & 0x3f)) + uVar9) * 0x20 + uVar27;
                  uVar29 = *(uint *)(param_5 + 8 + uVar18 * 4);
                  if (uVar29 < uVar21) {
                    uVar21 = uVar29;
                  }
                  *(uint *)(param_5 + 8 + uVar18 * 4) = uVar21;
                }
                if (param_2[uVar18 + 2] == 0x20) {
                  lVar17 = 0x6f;
                  lVar12 = 0x41;
                  goto LAB_0020a35d;
                }
              }
            }
            else if (bVar6 == 0x2e) {
              lVar17 = 0x73;
              if (cVar3 == '\n') {
                lVar17 = 0x60;
              }
              uVar21 = ((int)(lVar17 << (bVar5 & 0x3f)) + uVar9) * 0x20 + uVar27;
              uVar29 = *(uint *)(param_5 + 8 + uVar18 * 4);
              if (uVar29 < uVar21) {
                uVar21 = uVar29;
              }
              *(uint *)(param_5 + 8 + uVar18 * 4) = uVar21;
              if (param_2[uVar18 + 2] == 0x20) {
                lVar17 = 0x75;
                lVar12 = 0x5b;
LAB_0020a35d:
                if (cVar3 == '\n') {
                  lVar17 = lVar12;
                }
                goto LAB_0020a421;
              }
            }
            else if (bVar6 == 0x3d) {
              if (param_2[uVar18 + 2] == 0x27) {
                lVar17 = (ulong)(cVar3 == '\n') + 0x77;
              }
              else {
                if (param_2[uVar18 + 2] != 0x22) goto LAB_0020a452;
                lVar17 = (ulong)(cVar3 == '\n') * 8 + 0x6e;
              }
LAB_0020a421:
              puVar11 = (uint *)(lVar1 + uVar18 * 4);
              goto LAB_0020a429;
            }
          }
        }
      }
LAB_0020a452:
      uVar23 = uVar23 + 1;
    } while (-1 < (char)bVar4);
  }
  if (param_4 == 5) {
    return local_98;
  }
  bVar2 = *param_2;
  if (param_2[1] == 0x20) {
    if (((bVar2 != 0x2c) && (bVar2 != 0x65)) && (bVar2 != 0x73)) goto LAB_0020a679;
  }
  else if (param_2[1] != 0xa0 || bVar2 != 0xc2) goto LAB_0020a679;
  uVar23 = (ulong)*(ushort *)
                   (param_1[5] + (ulong)((uint)(*(int *)(param_2 + 2) * 0x1e35a7bd) >> 0x11) * 2);
  if (uVar23 != 0) {
    pbVar19 = param_2 + 2;
    lVar1 = *param_1;
    lVar8 = param_1[6];
    do {
      bVar2 = *(byte *)(lVar8 + uVar23 * 4);
      uVar27 = bVar2 & 0x1f;
      uVar18 = (ulong)uVar27;
      if (uVar18 <= param_4 - 2 && *(char *)(lVar8 + 1 + uVar23 * 4) == '\0') {
        uVar7 = *(ushort *)(lVar8 + 2 + uVar23 * 4);
        lVar28 = (ulong)*(uint *)(lVar1 + 0x20 + uVar18 * 4) + *(long *)(lVar1 + 0xa8) +
                 uVar7 * uVar18;
        if (7 < (byte)uVar27) {
          uVar10 = (ulong)(bVar2 & 0x18);
          pbVar20 = pbVar19 + uVar10;
          uVar24 = 0;
LAB_0020a573:
          uVar25 = *(ulong *)(lVar28 + uVar24);
          if (*(ulong *)(pbVar19 + uVar24) == uVar25) goto code_r0x0020a580;
          uVar25 = uVar25 ^ *(ulong *)(pbVar19 + uVar24);
          uVar10 = 0;
          if (uVar25 != 0) {
            for (; (uVar25 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
          uVar24 = (uVar10 >> 3 & 0x1fffffff) + uVar24;
          goto LAB_0020a59b;
        }
        uVar10 = 0;
        pbVar20 = pbVar19;
LAB_0020a645:
        uVar25 = uVar18 & 7;
        uVar24 = uVar10;
        if ((bVar2 & 7) != 0) {
          uVar26 = uVar10 | uVar25;
          do {
            uVar24 = uVar10;
            if (*(byte *)(lVar28 + uVar10) != *pbVar20) break;
            pbVar20 = pbVar20 + 1;
            uVar10 = uVar10 + 1;
            uVar25 = uVar25 - 1;
            uVar24 = uVar26;
          } while (uVar25 != 0);
        }
LAB_0020a59b:
        if (uVar24 == uVar18) {
          bVar4 = *param_2;
          if (bVar4 == 0xc2) {
            lVar14 = 8;
            lVar28 = 0x66;
          }
          else {
            if ((param_4 <= uVar18 + 2) || (param_2[uVar18 + 2] != 0x20)) goto LAB_0020a632;
            lVar28 = 0xd;
            if (bVar4 == 0x73) {
              lVar28 = 7;
            }
            if (bVar4 == 0x65) {
              lVar28 = 0x12;
            }
            lVar14 = 0xc;
          }
          uVar27 = uVar27 + ((uint)uVar7 + (int)(lVar28 << (*(byte *)(lVar1 + uVar18) & 0x3f))) *
                            0x20;
          uVar29 = *(uint *)(lVar14 + param_5 + uVar18 * 4);
          if (uVar29 < uVar27) {
            uVar27 = uVar29;
          }
          *(uint *)(lVar14 + param_5 + uVar18 * 4) = uVar27;
          local_98 = 1;
        }
      }
LAB_0020a632:
      uVar23 = uVar23 + 1;
    } while (-1 < (char)bVar2);
  }
LAB_0020a679:
  if (8 < param_4) {
    if (*param_2 == 0x2e) {
      if (param_2[1] != 99) {
        return local_98;
      }
      if (param_2[2] != 0x6f) {
        return local_98;
      }
      if (param_2[3] != 0x6d) {
        return local_98;
      }
      if (param_2[4] != 0x2f) {
        return local_98;
      }
    }
    else {
      if (*param_2 != 0x20) {
        return local_98;
      }
      if (param_2[1] != 0x74) {
        return local_98;
      }
      if (param_2[2] != 0x68) {
        return local_98;
      }
      if (param_2[3] != 0x65) {
        return local_98;
      }
      if (param_2[4] != 0x20) {
        return local_98;
      }
    }
    uVar23 = (ulong)*(ushort *)
                     (param_1[5] + (ulong)((uint)(*(int *)(param_2 + 5) * 0x1e35a7bd) >> 0x11) * 2);
    if (uVar23 != 0) {
      pbVar19 = param_2 + 5;
      lVar1 = *param_1;
      lVar8 = param_1[6];
      do {
        bVar2 = *(byte *)(lVar8 + uVar23 * 4);
        uVar27 = bVar2 & 0x1f;
        uVar18 = (ulong)uVar27;
        if (uVar18 <= param_4 - 5 && *(char *)(lVar8 + 1 + uVar23 * 4) == '\0') {
          uVar7 = *(ushort *)(lVar8 + 2 + uVar23 * 4);
          lVar28 = (ulong)*(uint *)(lVar1 + 0x20 + uVar18 * 4) + *(long *)(lVar1 + 0xa8) +
                   uVar7 * uVar18;
          if (7 < (byte)uVar27) {
            uVar10 = (ulong)(bVar2 & 0x18);
            pbVar20 = pbVar19 + uVar10;
            uVar24 = 0;
LAB_0020a78f:
            uVar25 = *(ulong *)(lVar28 + uVar24);
            if (*(ulong *)(pbVar19 + uVar24) == uVar25) goto code_r0x0020a7a0;
            uVar25 = uVar25 ^ *(ulong *)(pbVar19 + uVar24);
            uVar10 = 0;
            if (uVar25 != 0) {
              for (; (uVar25 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
              }
            }
            uVar24 = (uVar10 >> 3 & 0x1fffffff) + uVar24;
            goto LAB_0020a7cd;
          }
          uVar10 = 0;
          pbVar20 = pbVar19;
LAB_0020a92b:
          uVar25 = uVar18 & 7;
          uVar24 = uVar10;
          if ((bVar2 & 7) != 0) {
            uVar26 = uVar10 | uVar25;
            do {
              uVar24 = uVar10;
              if (*(byte *)(lVar28 + uVar10) != *pbVar20) break;
              pbVar20 = pbVar20 + 1;
              uVar10 = uVar10 + 1;
              uVar25 = uVar25 - 1;
              uVar24 = uVar26;
            } while (uVar25 != 0);
          }
LAB_0020a7cd:
          if (uVar24 == uVar18) {
            bVar4 = *(byte *)(lVar1 + uVar18);
            lVar28 = 0x48;
            if (*param_2 == 0x20) {
              lVar28 = 0x29;
            }
            uVar21 = ((int)(lVar28 << (bVar4 & 0x3f)) + (uint)uVar7) * 0x20 + uVar27;
            uVar29 = *(uint *)(param_5 + 0x14 + uVar18 * 4);
            if (uVar29 < uVar21) {
              uVar21 = uVar29;
            }
            *(uint *)(param_5 + 0x14 + uVar18 * 4) = uVar21;
            local_98 = 1;
            if ((uVar18 + 5 < param_4) && (*param_2 == 0x20)) {
              if ((uVar18 + 8 < param_4) &&
                 ((((param_2[uVar18 + 5] == 0x20 && (param_2[uVar18 + 6] == 0x6f)) &&
                   (param_2[uVar18 + 7] == 0x66)) && (param_2[uVar18 + 8] == 0x20)))) {
                uVar21 = ((int)(0x3eL << (bVar4 & 0x3f)) + (uint)uVar7) * 0x20 + uVar27;
                uVar29 = *(uint *)(param_5 + 0x24 + uVar18 * 4);
                if (uVar29 < uVar21) {
                  uVar21 = uVar29;
                }
                *(uint *)(param_5 + 0x24 + uVar18 * 4) = uVar21;
                if (((uVar18 + 0xc < param_4) && (param_2[uVar18 + 9] == 0x74)) &&
                   ((param_2[uVar18 + 10] == 0x68 &&
                    ((param_2[uVar18 + 0xb] == 0x65 && (param_2[uVar18 + 0xc] == 0x20)))))) {
                  uVar27 = uVar27 + ((uint)uVar7 + (int)(0x49L << (bVar4 & 0x3f))) * 0x20;
                  uVar29 = *(uint *)(param_5 + 0x34 + uVar18 * 4);
                  if (uVar29 < uVar27) {
                    uVar27 = uVar29;
                  }
                  *(uint *)(param_5 + 0x34 + uVar18 * 4) = uVar27;
                }
              }
              local_98 = 1;
            }
          }
        }
        uVar23 = uVar23 + 1;
      } while (-1 < (char)bVar2);
    }
  }
  return local_98;
code_r0x002092fe:
  uVar25 = uVar25 + 8;
  if ((uVar10 & 0xfffffffffffffff8) == uVar25) goto LAB_00209b2a;
  goto LAB_002092f1;
switchD_002094d9_caseD_21:
switchD_002095fd_caseD_21:
  goto LAB_0020948f;
code_r0x0020a07c:
  uVar24 = uVar24 + 8;
  if (uVar10 == uVar24) goto LAB_0020a465;
  goto LAB_0020a06f;
code_r0x0020a580:
  uVar24 = uVar24 + 8;
  if (uVar10 == uVar24) goto LAB_0020a645;
  goto LAB_0020a573;
code_r0x0020a7a0:
  uVar24 = uVar24 + 8;
  if (uVar10 == uVar24) goto LAB_0020a92b;
  goto LAB_0020a78f;
}

