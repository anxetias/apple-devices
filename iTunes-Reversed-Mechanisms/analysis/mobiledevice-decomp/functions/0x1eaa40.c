// rea decompile_all
// name: _lzvn_decode_buffer
// address: 0x1eaa40
// body: available
// range: 0x1eaa40-0x1eaa8e inclusive
// range: 0x1eaaa0-0x1ead0e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _lzvn_decode_buffer(long param_1,ulong param_2,ulong *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  
  uVar4 = 0;
  uVar11 = 0;
  uVar5 = param_2 - 8;
  if ((7 < param_2) && (puVar3 = (ulong *)((long)param_3 + param_4 + -8), param_3 <= puVar3)) {
    uVar9 = (ulong)(byte)*param_3;
    uVar8 = *param_3;
    switch((byte)*param_3) {
    default:
switchD_001eaa73_caseD_0:
      uVar9 = uVar9 >> 6;
      param_3 = (ulong *)((long)param_3 + uVar9 + 2);
      if (param_3 <= puVar3) {
        uVar11 = ((uVar8 & 0xff00) << 0x28 | uVar8 << 0x38 & 0x7ffffffffffffff) >> 0x30;
        uVar6 = uVar8 >> 0x10;
        uVar10 = ((uVar8 << 0x38 & 0x3fffffffffffffff) >> 0x3b) + 3;
LAB_001eaad3:
        if (uVar4 + uVar9 + uVar10 < uVar5) {
          *(ulong *)(param_1 + uVar4) = uVar6;
          uVar4 = uVar4 + uVar9;
          lVar7 = uVar4 - uVar11;
          if (uVar4 < uVar11) break;
          if (7 < uVar11) goto LAB_001eaaf8;
        }
        else {
          for (; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(char *)(param_1 + uVar4) = (char)uVar6;
            uVar4 = uVar4 + 1;
            if (param_2 == uVar4) {
              return uVar4;
            }
            uVar6 = uVar6 >> 8;
          }
          lVar7 = uVar4 - uVar11;
          if (uVar4 < uVar11) break;
        }
LAB_001eab4c:
        if (uVar11 != 0) {
          do {
            puVar2 = (undefined1 *)(param_1 + lVar7);
            lVar7 = lVar7 + 1;
            *(undefined1 *)(param_1 + uVar4) = *puVar2;
            uVar4 = uVar4 + 1;
            if (param_2 == uVar4) {
              return uVar4;
            }
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
          uVar9 = (ulong)(byte)*param_3;
          uVar8 = *param_3;
          switch((byte)*param_3) {
          default:
            goto switchD_001eaa73_caseD_0;
          case 6:
            goto switchD_001eaa73_caseD_6;
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
            goto switchD_001eaa73_caseD_7;
          case 0xe:
          case 0x16:
switchD_001eaa73_caseD_e:
            param_3 = (ulong *)((long)param_3 + 1);
            if (puVar3 < param_3) break;
            uVar9 = (ulong)*(byte *)param_3;
            uVar8 = *param_3;
            switch(*(byte *)param_3) {
            default:
              goto switchD_001eaa73_caseD_0;
            case 6:
              goto switchD_001eaa73_caseD_6;
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
              goto switchD_001eaa73_caseD_7;
            case 0xe:
            case 0x16:
              goto switchD_001eaa73_caseD_e;
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
              break;
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
              goto switchD_001eaa73_caseD_46;
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
              goto switchD_001eaa73_caseD_a0;
            case 0xe0:
switchD_001eaa73_caseD_e0:
              uVar9 = uVar8 >> 8 & 0xff;
              uVar8 = uVar9 + 0x10;
              param_3 = (ulong *)((long)param_3 + uVar9 + 0x12);
              do {
                if (puVar3 < param_3) break;
                uVar9 = -uVar8;
                if (uVar4 + uVar8 <= uVar5) {
                  lVar7 = param_1 + uVar4 + uVar8;
                  do {
                    *(undefined8 *)(lVar7 + uVar9) = *(undefined8 *)((long)param_3 + uVar9);
                    bVar12 = uVar9 < 0xfffffffffffffff8;
                    uVar9 = uVar9 + 8;
                  } while (bVar12);
                  uVar4 = lVar7 - param_1;
                  uVar9 = (ulong)(byte)*param_3;
                  uVar8 = *param_3;
                  switch((byte)*param_3) {
                  default:
                    goto switchD_001eaa73_caseD_0;
                  case 6:
                    goto switchD_001eaa73_caseD_6;
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
                    goto switchD_001eaa73_caseD_7;
                  case 0xe:
                  case 0x16:
                    goto switchD_001eaa73_caseD_e;
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
                    goto switchD_001eaa73_caseD_1e;
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
                    goto switchD_001eaa73_caseD_46;
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
                    goto switchD_001eaa73_caseD_a0;
                  case 0xe0:
                    goto switchD_001eaa73_caseD_e0;
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
                    goto switchD_001eaa73_caseD_e1;
                  case 0xf0:
                    goto switchD_001eaa73_caseD_f0;
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
                    goto switchD_001eaa73_caseD_f1;
                  }
                }
                do {
                  *(byte *)(param_1 + uVar4) = *(byte *)((long)param_3 + uVar9);
                  uVar4 = uVar4 + 1;
                  if (param_2 == uVar4) {
                    return uVar4;
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 != 0);
                uVar9 = (ulong)(byte)*param_3;
                uVar8 = *param_3;
                switch((byte)*param_3) {
                default:
                  goto switchD_001eaa73_caseD_0;
                case 6:
                  goto switchD_001eaa73_caseD_6;
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
                  goto switchD_001eaa73_caseD_7;
                case 0xe:
                case 0x16:
                  goto switchD_001eaa73_caseD_e;
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
                  goto switchD_001eaa73_caseD_1e;
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
                  goto switchD_001eaa73_caseD_46;
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
                  goto switchD_001eaa73_caseD_a0;
                case 0xe0:
                  goto switchD_001eaa73_caseD_e0;
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
switchD_001eaa73_caseD_e1:
                  uVar8 = uVar8 & 0xf;
                  param_3 = (ulong *)((long)param_3 + uVar8 + 1);
                  break;
                case 0xf0:
switchD_001eaa73_caseD_f0:
                  param_3 = (ulong *)((long)param_3 + 2);
                  if (param_3 <= puVar3) {
                    uVar10 = (uVar8 >> 8 & 0xff) + 0x10;
                    do {
                      lVar7 = uVar4 - uVar11;
                      if ((uVar5 <= uVar4 + uVar10) || (uVar11 < 8)) goto LAB_001eab4c;
LAB_001eaaf8:
                      do {
                        puVar1 = (undefined8 *)(param_1 + lVar7);
                        lVar7 = lVar7 + 8;
                        *(undefined8 *)(param_1 + uVar4) = *puVar1;
                        uVar4 = uVar4 + 8;
                        bVar12 = 7 < uVar10;
                        uVar10 = uVar10 - 8;
                      } while (bVar12 && uVar10 != 0);
                      uVar4 = uVar4 + uVar10;
                      uVar9 = (ulong)(byte)*param_3;
                      uVar8 = *param_3;
                      switch((byte)*param_3) {
                      default:
                        goto switchD_001eaa73_caseD_0;
                      case 6:
                        goto switchD_001eaa73_caseD_6;
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
                        goto switchD_001eaa73_caseD_7;
                      case 0xe:
                      case 0x16:
                        goto switchD_001eaa73_caseD_e;
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
                        goto switchD_001eaa73_caseD_1e;
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
                        goto switchD_001eaa73_caseD_46;
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
                        goto switchD_001eaa73_caseD_a0;
                      case 0xe0:
                        goto switchD_001eaa73_caseD_e0;
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
                        goto switchD_001eaa73_caseD_e1;
                      case 0xf0:
                        goto switchD_001eaa73_caseD_f0;
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
switchD_001eaa73_caseD_f1:
                        param_3 = (ulong *)((long)param_3 + 1);
                        if (puVar3 < param_3) goto switchD_001eaa73_caseD_1e;
                        uVar10 = uVar8 & 0xf;
                      }
                    } while( true );
                  }
                  goto switchD_001eaa73_caseD_1e;
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
                  goto switchD_001eaa73_caseD_f1;
                }
              } while( true );
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
              goto switchD_001eaa73_caseD_e1;
            case 0xf0:
              goto switchD_001eaa73_caseD_f0;
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
              goto switchD_001eaa73_caseD_f1;
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
            break;
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
            goto switchD_001eaa73_caseD_46;
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
            goto switchD_001eaa73_caseD_a0;
          case 0xe0:
            goto switchD_001eaa73_caseD_e0;
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
            goto switchD_001eaa73_caseD_e1;
          case 0xf0:
            goto switchD_001eaa73_caseD_f0;
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
            goto switchD_001eaa73_caseD_f1;
          }
        }
        break;
      }
      break;
    case 6:
      goto switchD_001eaa73_caseD_6;
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
      goto switchD_001eaa73_caseD_7;
    case 0xe:
    case 0x16:
      goto switchD_001eaa73_caseD_e;
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
      break;
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
      goto switchD_001eaa73_caseD_46;
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
      goto switchD_001eaa73_caseD_a0;
    case 0xe0:
      goto switchD_001eaa73_caseD_e0;
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
      goto switchD_001eaa73_caseD_e1;
    case 0xf0:
      goto switchD_001eaa73_caseD_f0;
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
      goto switchD_001eaa73_caseD_f1;
    }
  }
switchD_001eaa73_caseD_1e:
  uVar4 = 0;
switchD_001eaa73_caseD_6:
  return uVar4;
switchD_001eaa73_caseD_a0:
  uVar9 = uVar9 >> 3 & 3;
  param_3 = (ulong *)((long)param_3 + uVar9 + 3);
  if (puVar3 < param_3) goto switchD_001eaa73_caseD_1e;
  uVar10 = ((uVar8 & 0x307) >> 8 | (uVar8 & 7) << 2) + 3;
  uVar11 = uVar8 >> 10 & 0x3fff;
  uVar6 = uVar8 >> 0x18;
  goto LAB_001eaad3;
switchD_001eaa73_caseD_46:
  uVar9 = uVar9 >> 6;
  param_3 = (ulong *)((long)param_3 + uVar9 + 1);
  if (puVar3 < param_3) goto switchD_001eaa73_caseD_1e;
  uVar6 = uVar8 >> 8;
  uVar10 = ((uVar8 & 0x38) >> 3) + 3;
  goto LAB_001eaad3;
switchD_001eaa73_caseD_7:
  uVar9 = uVar9 >> 6;
  param_3 = (ulong *)((long)param_3 + uVar9 + 3);
  if (puVar3 < param_3) goto switchD_001eaa73_caseD_1e;
  uVar11 = uVar8 >> 8 & 0xffff;
  uVar6 = uVar8 >> 0x18;
  uVar10 = ((uVar8 & 0x38) >> 3) + 3;
  goto LAB_001eaad3;
}

