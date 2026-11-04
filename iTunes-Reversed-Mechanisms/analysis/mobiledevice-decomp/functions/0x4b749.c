// rea decompile_all
// name: _lzvnDecode
// address: 0x4b749
// body: available
// range: 0x4b749-0x4bba0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzvnDecode(undefined8 *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  
  pbVar4 = (byte *)*param_1;
  puVar3 = (undefined4 *)param_1[2];
  uVar9 = param_1[4] - (long)puVar3;
  uVar11 = param_1[1] - (long)pbVar4;
  if (uVar9 != 0 && uVar11 != 0) {
    uVar5 = param_1[6];
    uVar14 = param_1[7];
    if (uVar5 == 0) {
      if (uVar14 == 0) {
        uVar10 = param_1[9];
        goto LAB_0004bb12;
      }
      uVar10 = param_1[8];
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      goto LAB_0004b7d6;
    }
    uVar10 = param_1[8];
    lVar8 = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    if (uVar14 != 0) goto LAB_0004b8db;
    while (lVar8 + uVar5 < uVar11) {
      if ((uVar9 < uVar5 + 7) || (uVar11 - lVar8 < uVar5 + 7)) {
        if (uVar9 <= uVar5 && uVar5 - uVar9 != 0) {
          if (uVar9 != 0) {
            uVar11 = 0;
            do {
              *(byte *)((long)puVar3 + uVar11) = pbVar4[uVar11 + lVar8];
              uVar11 = uVar11 + 1;
            } while (uVar9 != uVar11);
          }
          *param_1 = pbVar4 + uVar9 + lVar8;
          param_1[2] = (undefined1 *)((long)puVar3 + uVar9);
          param_1[6] = uVar5 - uVar9;
          param_1[7] = 0;
LAB_0004ba11:
          param_1[8] = uVar10;
          return 0xfffffffe;
        }
        if (uVar5 != 0) {
          uVar14 = 0;
          do {
            *(byte *)((long)puVar3 + uVar14) = pbVar4[uVar14 + lVar8];
            uVar14 = uVar14 + 1;
          } while (uVar5 != uVar14);
        }
      }
      else if (uVar5 != 0) {
        uVar14 = 0;
        do {
          *(undefined8 *)((long)puVar3 + uVar14) = *(undefined8 *)(pbVar4 + uVar14 + lVar8);
          uVar14 = uVar14 + 8;
        } while (uVar14 < uVar5);
      }
      puVar3 = (undefined4 *)((long)puVar3 + uVar5);
      uVar9 = uVar9 - uVar5;
      pbVar4 = pbVar4 + uVar5 + lVar8;
      uVar11 = (uVar11 - lVar8) - uVar5;
LAB_0004bb12:
      bVar1 = *pbVar4;
      uVar7 = (ulong)bVar1;
      uVar13 = (uint)bVar1;
      uVar12 = uVar13;
      switch(bVar1) {
      default:
switchD_0004bb1d_caseD_0:
        *param_1 = pbVar4;
        param_1[2] = puVar3;
        param_1[9] = uVar10;
        uVar5 = uVar7 >> 6;
        if (uVar11 <= uVar5 + 2) {
          return 0xffffffff;
        }
        uVar14 = (ulong)((uint)(uVar7 >> 3) & 7) + 3;
        uVar10 = (ulong)pbVar4[1] | (ulong)(((uint)uVar7 & 7) << 8);
        lVar8 = 2;
LAB_0004b8db:
        pbVar4 = pbVar4 + lVar8;
        if ((3 < uVar9) && (3 < uVar11 - lVar8)) {
          *puVar3 = *(undefined4 *)pbVar4;
LAB_0004b8f9:
          puVar3 = (undefined4 *)((long)puVar3 + uVar5);
          if ((ulong)((long)puVar3 - param_1[3]) <= uVar10 - 1) {
            return 0xfffffffd;
          }
          uVar9 = uVar9 - uVar5;
          pbVar4 = pbVar4 + uVar5;
          uVar11 = (uVar11 - lVar8) - uVar5;
          do {
            if ((uVar9 < uVar14 + 7) || (uVar10 < 8)) {
              if (uVar9 <= uVar14 && uVar14 - uVar9 != 0) {
                if (uVar9 != 0) {
                  puVar6 = puVar3;
                  uVar11 = uVar9;
                  do {
                    *(undefined1 *)puVar6 = *(undefined1 *)((long)puVar6 - uVar10);
                    puVar6 = (undefined4 *)((long)puVar6 + 1);
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                *param_1 = pbVar4;
                param_1[2] = (undefined1 *)((long)puVar3 + uVar9);
                param_1[6] = 0;
                param_1[7] = uVar14 - uVar9;
                goto LAB_0004ba11;
              }
              if (uVar14 != 0) {
                puVar6 = puVar3;
                uVar5 = uVar14;
                do {
                  *(undefined1 *)puVar6 = *(undefined1 *)((long)puVar6 - uVar10);
                  puVar6 = (undefined4 *)((long)puVar6 + 1);
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
            }
            else if (uVar14 != 0) {
              uVar5 = 0;
              do {
                *(undefined8 *)((long)puVar3 + uVar5) =
                     *(undefined8 *)((long)puVar3 + (uVar5 - uVar10));
                uVar5 = uVar5 + 8;
              } while (uVar5 < uVar14);
            }
            puVar3 = (undefined4 *)((long)puVar3 + uVar14);
            uVar9 = uVar9 - uVar14;
            bVar1 = *pbVar4;
            uVar7 = (ulong)bVar1;
            uVar13 = (uint)bVar1;
            uVar12 = (uint)bVar1;
            switch(bVar1) {
            default:
              goto switchD_0004bb1d_caseD_0;
            case 6:
              goto switchD_0004bb1d_caseD_6;
            case 7:
            case 0xf:
            case 0x17:
            case 0x1f:
            case 0x27:
            case 0x2f:
            case 0x37:
            case 0x3f:
            case 0x47:
            case 0x4f:
            case 0x57:
            case 0x5f:
            case 0x67:
            case 0x6f:
            case 0x87:
            case 0x8f:
            case 0x97:
            case 0x9f:
            case 199:
            case 0xcf:
              goto switchD_0004bb1d_caseD_7;
            case 0xe:
            case 0x16:
switchD_0004bb1d_caseD_e:
              *param_1 = pbVar4;
              param_1[2] = puVar3;
              param_1[9] = uVar10;
              if (uVar11 < 2) {
                return 0xffffffff;
              }
              pbVar4 = pbVar4 + 1;
              uVar11 = uVar11 - 1;
              bVar1 = *pbVar4;
              uVar7 = (ulong)bVar1;
              uVar13 = (uint)bVar1;
              uVar12 = uVar13;
              switch(bVar1) {
              default:
                goto switchD_0004bb1d_caseD_0;
              case 6:
                goto switchD_0004bb1d_caseD_6;
              case 7:
              case 0xf:
              case 0x17:
              case 0x1f:
              case 0x27:
              case 0x2f:
              case 0x37:
              case 0x3f:
              case 0x47:
              case 0x4f:
              case 0x57:
              case 0x5f:
              case 0x67:
              case 0x6f:
              case 0x87:
              case 0x8f:
              case 0x97:
              case 0x9f:
              case 199:
              case 0xcf:
                goto switchD_0004bb1d_caseD_7;
              case 0xe:
              case 0x16:
                goto switchD_0004bb1d_caseD_e;
              case 0x1e:
              case 0x26:
              case 0x2e:
              case 0x36:
              case 0x3e:
              case 0x70:
              case 0x71:
              case 0x72:
              case 0x73:
              case 0x74:
              case 0x75:
              case 0x76:
              case 0x77:
              case 0x78:
              case 0x79:
              case 0x7a:
              case 0x7b:
              case 0x7c:
              case 0x7d:
              case 0x7e:
              case 0x7f:
              case 0xd0:
              case 0xd1:
              case 0xd2:
              case 0xd3:
              case 0xd4:
              case 0xd5:
              case 0xd6:
              case 0xd7:
              case 0xd8:
              case 0xd9:
              case 0xda:
              case 0xdb:
              case 0xdc:
              case 0xdd:
              case 0xde:
              case 0xdf:
                return 0xfffffffd;
              case 0x46:
              case 0x4e:
              case 0x56:
              case 0x5e:
              case 0x66:
              case 0x6e:
              case 0x86:
              case 0x8e:
              case 0x96:
              case 0x9e:
              case 0xc6:
              case 0xce:
                goto switchD_0004bb1d_caseD_46;
              case 0xa0:
              case 0xa1:
              case 0xa2:
              case 0xa3:
              case 0xa4:
              case 0xa5:
              case 0xa6:
              case 0xa7:
              case 0xa8:
              case 0xa9:
              case 0xaa:
              case 0xab:
              case 0xac:
              case 0xad:
              case 0xae:
              case 0xaf:
              case 0xb0:
              case 0xb1:
              case 0xb2:
              case 0xb3:
              case 0xb4:
              case 0xb5:
              case 0xb6:
              case 0xb7:
              case 0xb8:
              case 0xb9:
              case 0xba:
              case 0xbb:
              case 0xbc:
              case 0xbd:
              case 0xbe:
              case 0xbf:
                goto switchD_0004bb1d_caseD_a0;
              case 0xe0:
                goto switchD_0004bb1d_caseD_e0;
              case 0xe1:
              case 0xe2:
              case 0xe3:
              case 0xe4:
              case 0xe5:
              case 0xe6:
              case 0xe7:
              case 0xe8:
              case 0xe9:
              case 0xea:
              case 0xeb:
              case 0xec:
              case 0xed:
              case 0xee:
              case 0xef:
                goto switchD_0004bb1d_caseD_e1;
              case 0xf0:
                goto switchD_0004bb1d_caseD_f0;
              case 0xf1:
              case 0xf2:
              case 0xf3:
              case 0xf4:
              case 0xf5:
              case 0xf6:
              case 0xf7:
              case 0xf8:
              case 0xf9:
              case 0xfa:
              case 0xfb:
              case 0xfc:
              case 0xfd:
              case 0xfe:
              case 0xff:
                goto switchD_0004bb1d_caseD_f1;
              }
            case 0x1e:
            case 0x26:
            case 0x2e:
            case 0x36:
            case 0x3e:
            case 0x70:
            case 0x71:
            case 0x72:
            case 0x73:
            case 0x74:
            case 0x75:
            case 0x76:
            case 0x77:
            case 0x78:
            case 0x79:
            case 0x7a:
            case 0x7b:
            case 0x7c:
            case 0x7d:
            case 0x7e:
            case 0x7f:
            case 0xd0:
            case 0xd1:
            case 0xd2:
            case 0xd3:
            case 0xd4:
            case 0xd5:
            case 0xd6:
            case 0xd7:
            case 0xd8:
            case 0xd9:
            case 0xda:
            case 0xdb:
            case 0xdc:
            case 0xdd:
            case 0xde:
            case 0xdf:
              return 0xfffffffd;
            case 0x46:
            case 0x4e:
            case 0x56:
            case 0x5e:
            case 0x66:
            case 0x6e:
            case 0x86:
            case 0x8e:
            case 0x96:
            case 0x9e:
            case 0xc6:
            case 0xce:
              goto switchD_0004bb1d_caseD_46;
            case 0xa0:
            case 0xa1:
            case 0xa2:
            case 0xa3:
            case 0xa4:
            case 0xa5:
            case 0xa6:
            case 0xa7:
            case 0xa8:
            case 0xa9:
            case 0xaa:
            case 0xab:
            case 0xac:
            case 0xad:
            case 0xae:
            case 0xaf:
            case 0xb0:
            case 0xb1:
            case 0xb2:
            case 0xb3:
            case 0xb4:
            case 0xb5:
            case 0xb6:
            case 0xb7:
            case 0xb8:
            case 0xb9:
            case 0xba:
            case 0xbb:
            case 0xbc:
            case 0xbd:
            case 0xbe:
            case 0xbf:
              goto switchD_0004bb1d_caseD_a0;
            case 0xe0:
              goto switchD_0004bb1d_caseD_e0;
            case 0xe1:
            case 0xe2:
            case 0xe3:
            case 0xe4:
            case 0xe5:
            case 0xe6:
            case 0xe7:
            case 0xe8:
            case 0xe9:
            case 0xea:
            case 0xeb:
            case 0xec:
            case 0xed:
            case 0xee:
            case 0xef:
              goto switchD_0004bb1d_caseD_e1;
            case 0xf0:
switchD_0004bb1d_caseD_f0:
              *param_1 = pbVar4;
              param_1[2] = puVar3;
              param_1[9] = uVar10;
              if (uVar11 < 3) {
                return 0xffffffff;
              }
              uVar14 = (ulong)pbVar4[1] + 0x10;
              pbVar4 = pbVar4 + 2;
              uVar11 = uVar11 - 2;
              break;
            case 0xf1:
            case 0xf2:
            case 0xf3:
            case 0xf4:
            case 0xf5:
            case 0xf6:
            case 0xf7:
            case 0xf8:
            case 0xf9:
            case 0xfa:
            case 0xfb:
            case 0xfc:
            case 0xfd:
            case 0xfe:
            case 0xff:
switchD_0004bb1d_caseD_f1:
              *param_1 = pbVar4;
              param_1[2] = puVar3;
              param_1[9] = uVar10;
              if (uVar11 < 2) {
                return 0xffffffff;
              }
              uVar14 = (ulong)(uVar12 & 0xf);
              pbVar4 = pbVar4 + 1;
              uVar11 = uVar11 - 1;
            }
LAB_0004b7d6:
            if (uVar10 == 0) {
              return 0xfffffffd;
            }
          } while( true );
        }
        if (uVar5 < uVar9 || uVar5 - uVar9 == 0) {
          if (uVar5 != 0) {
            uVar7 = 0;
            do {
              *(byte *)((long)puVar3 + uVar7) = pbVar4[uVar7];
              uVar7 = uVar7 + 1;
            } while (uVar5 != uVar7);
          }
          goto LAB_0004b8f9;
        }
        if (uVar9 != 0) {
          uVar11 = 0;
          do {
            *(byte *)((long)puVar3 + uVar11) = pbVar4[uVar11];
            uVar11 = uVar11 + 1;
          } while (uVar9 != uVar11);
        }
        *param_1 = pbVar4 + uVar9;
        param_1[2] = (undefined1 *)((long)puVar3 + uVar9);
        param_1[6] = uVar5 - uVar9;
        param_1[7] = uVar14;
        goto LAB_0004ba11;
      case 6:
switchD_0004bb1d_caseD_6:
        if (7 < uVar11) {
          *(undefined4 *)(param_1 + 10) = 1;
          *param_1 = pbVar4 + 8;
          param_1[2] = puVar3;
          param_1[9] = uVar10;
          return 0;
        }
        return 0xffffffff;
      case 7:
      case 0xf:
      case 0x17:
      case 0x1f:
      case 0x27:
      case 0x2f:
      case 0x37:
      case 0x3f:
      case 0x47:
      case 0x4f:
      case 0x57:
      case 0x5f:
      case 0x67:
      case 0x6f:
      case 0x87:
      case 0x8f:
      case 0x97:
      case 0x9f:
      case 199:
      case 0xcf:
        goto switchD_0004bb1d_caseD_7;
      case 0xe:
      case 0x16:
        goto switchD_0004bb1d_caseD_e;
      case 0x1e:
      case 0x26:
      case 0x2e:
      case 0x36:
      case 0x3e:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0xd0:
      case 0xd1:
      case 0xd2:
      case 0xd3:
      case 0xd4:
      case 0xd5:
      case 0xd6:
      case 0xd7:
      case 0xd8:
      case 0xd9:
      case 0xda:
      case 0xdb:
      case 0xdc:
      case 0xdd:
      case 0xde:
      case 0xdf:
        return 0xfffffffd;
      case 0x46:
      case 0x4e:
      case 0x56:
      case 0x5e:
      case 0x66:
      case 0x6e:
      case 0x86:
      case 0x8e:
      case 0x96:
      case 0x9e:
      case 0xc6:
      case 0xce:
        goto switchD_0004bb1d_caseD_46;
      case 0xa0:
      case 0xa1:
      case 0xa2:
      case 0xa3:
      case 0xa4:
      case 0xa5:
      case 0xa6:
      case 0xa7:
      case 0xa8:
      case 0xa9:
      case 0xaa:
      case 0xab:
      case 0xac:
      case 0xad:
      case 0xae:
      case 0xaf:
      case 0xb0:
      case 0xb1:
      case 0xb2:
      case 0xb3:
      case 0xb4:
      case 0xb5:
      case 0xb6:
      case 0xb7:
      case 0xb8:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbc:
      case 0xbd:
      case 0xbe:
      case 0xbf:
        goto switchD_0004bb1d_caseD_a0;
      case 0xe0:
switchD_0004bb1d_caseD_e0:
        *param_1 = pbVar4;
        param_1[2] = puVar3;
        param_1[9] = uVar10;
        if (uVar11 < 3) {
          return 0xffffffff;
        }
        uVar5 = (ulong)pbVar4[1] + 0x10;
        lVar8 = 2;
        break;
      case 0xe1:
      case 0xe2:
      case 0xe3:
      case 0xe4:
      case 0xe5:
      case 0xe6:
      case 0xe7:
      case 0xe8:
      case 0xe9:
      case 0xea:
      case 0xeb:
      case 0xec:
      case 0xed:
      case 0xee:
      case 0xef:
switchD_0004bb1d_caseD_e1:
        *param_1 = pbVar4;
        param_1[2] = puVar3;
        param_1[9] = uVar10;
        uVar5 = (ulong)(uVar12 & 0xf);
        lVar8 = 1;
        break;
      case 0xf0:
        goto switchD_0004bb1d_caseD_f0;
      case 0xf1:
      case 0xf2:
      case 0xf3:
      case 0xf4:
      case 0xf5:
      case 0xf6:
      case 0xf7:
      case 0xf8:
      case 0xf9:
      case 0xfa:
      case 0xfb:
      case 0xfc:
      case 0xfd:
      case 0xfe:
      case 0xff:
        goto switchD_0004bb1d_caseD_f1;
      }
    }
  }
  return 0xffffffff;
switchD_0004bb1d_caseD_a0:
  *param_1 = pbVar4;
  param_1[2] = puVar3;
  param_1[9] = uVar10;
  uVar5 = (ulong)(uVar13 >> 3 & 3);
  if (uVar11 <= uVar5 + 3) {
    return 0xffffffff;
  }
  uVar12 = (*(ushort *)(pbVar4 + 1) & 3) + (uVar13 & 7) * 4;
  uVar2 = *(ushort *)(pbVar4 + 1) >> 2;
  goto LAB_0004b8a4;
switchD_0004bb1d_caseD_46:
  *param_1 = pbVar4;
  param_1[2] = puVar3;
  param_1[9] = uVar10;
  uVar5 = (ulong)(uVar13 >> 6);
  uVar14 = (ulong)(uVar13 >> 3 & 7) + 3;
  lVar8 = 1;
  if (uVar11 <= uVar5 + 1) {
    return 0xffffffff;
  }
  goto LAB_0004b8db;
switchD_0004bb1d_caseD_7:
  *param_1 = pbVar4;
  param_1[2] = puVar3;
  param_1[9] = uVar10;
  uVar5 = (ulong)(uVar13 >> 6);
  if (uVar11 <= uVar5 + 3) {
    return 0xffffffff;
  }
  uVar12 = uVar13 >> 3 & 7;
  uVar2 = *(ushort *)(pbVar4 + 1);
LAB_0004b8a4:
  uVar10 = (ulong)uVar2;
  uVar14 = (ulong)uVar12 + 3;
  lVar8 = 3;
  goto LAB_0004b8db;
}

