// name: FUN_100248fed
// address: 100248fed

undefined8 FUN_100248fed(long param_1)

{
  ulong *puVar1;
  code *pcVar2;
  ulong *puVar3;
  void *pvVar4;
  char cVar5;
  long lVar6;
  ushort *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  byte bVar13;
  size_t sVar14;
  byte bVar15;
  ulong *puVar16;
  void *pvVar17;
  cfstringStruct *pcVar18;
  byte *pbVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ushort uVar23;
  ulong *puVar24;
  ushort *puVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  long local_140;
  ulong local_138;
  ushort *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  ushort *local_a0;
  ushort *local_98;
  ushort *puStack_90;
  long local_88;
  int local_7c;
  undefined8 local_78;
  ushort *local_70;
  ulong local_68;
  ushort *local_60;
  ulong *local_58;
  ulong *puStack_50;
  ulong *local_48;
  void *local_40;
  byte local_31;
  
  if (((param_1 != 0) && (lVar6 = _CFDictionaryGetValue(param_1,&cf_output), lVar6 != 0)) &&
     (cVar5 = _CFNumberGetValue(lVar6,9,&local_7c), cVar5 != '\0')) {
    if (local_7c < 0x10) {
      switch(local_7c) {
      case 1:
        pcVar18 = &cf_artist;
        break;
      case 2:
        pcVar18 = &cf_album;
        break;
      default:
        goto switchD_10024905c_caseD_3;
      case 4:
        pcVar18 = &cf_song;
        break;
      case 8:
        pcVar18 = &cf_composer;
      }
    }
    else if (local_7c == 0x10) {
      pcVar18 = &cf_genre;
    }
    else if (local_7c == 0x20) {
      pcVar18 = &cf_playlist;
    }
    else {
      if (local_7c != 0x40000000) {
        return 0;
      }
      pcVar18 = &cf_unknown;
    }
    puVar7 = (ushort *)_CFDictionaryGetValue(param_1,pcVar18);
    local_88 = _CFDictionaryGetValue(param_1);
    if (local_88 != 0 && puVar7 != (ushort *)0x0) {
      local_78 = _CFStringCreateMutable(0);
      local_58 = (ulong *)0x0;
      puStack_50 = (ulong *)0x0;
      local_48 = (ulong *)0x0;
      if (DAT_1008a2e60 != DAT_1008a2e58) {
        lVar6 = 0;
        local_40 = (void *)0x7ffffffffffffff8;
        uVar22 = 0;
        local_70 = puVar7;
        do {
          uVar8 = _CFStringGetLength(*(undefined8 *)(DAT_1008a2e58 + lVar6));
          lVar9 = _CFStringCompareWithOptions
                            (local_88,*(undefined8 *)(DAT_1008a2e58 + lVar6),0,uVar8,0);
          if (lVar9 == 0) {
            if (puStack_50 < local_48) {
              *puStack_50 = uVar22;
              puStack_50 = puStack_50 + 1;
            }
            else {
              sVar14 = (long)puStack_50 - (long)local_58;
              lVar9 = (long)sVar14 >> 3;
              uVar21 = lVar9 + 1;
              if (0x1fffffffffffffff < uVar21) {
                FUN_100249b5c();
                goto LAB_1002497f8;
              }
              uVar10 = (long)local_48 - (long)local_58 >> 2;
              if (uVar10 <= uVar21) {
                uVar10 = uVar21;
              }
              if (local_40 <= (void *)((long)local_48 - (long)local_58)) {
                uVar10 = 0x1fffffffffffffff;
              }
              if (uVar10 == 0) {
                auVar27 = ZEXT816(0);
                lVar12 = lVar9;
              }
              else {
                auVar27 = FUN_100249b6c(&local_48,uVar10);
                sVar14 = (long)puStack_50 - (long)local_58;
                lVar12 = (long)sVar14 >> 3;
              }
              lVar20 = auVar27._0_8_;
              puVar24 = (ulong *)(lVar20 + lVar9 * 8);
              puVar1 = (ulong *)(lVar20 + auVar27._8_8_ * 8);
              *puVar24 = uVar22;
              puVar16 = (ulong *)(lVar20 + lVar9 * 8 + 8);
              puVar24 = puVar24 + -lVar12;
              _memcpy(puVar24,local_58,sVar14);
              puVar3 = local_58;
              bVar26 = local_58 != (ulong *)0x0;
              local_58 = puVar24;
              puStack_50 = puVar16;
              local_48 = puVar1;
              if (bVar26) {
                operator_delete(puVar3);
                puStack_50 = puVar16;
              }
            }
          }
          uVar22 = uVar22 + 1;
          lVar6 = lVar6 + 0x20;
          puVar7 = local_70;
        } while (uVar22 < (ulong)(DAT_1008a2e60 - DAT_1008a2e58 >> 5));
      }
      uVar8 = local_78;
      bVar26 = puStack_50 != local_58;
      puVar11 = (ushort *)_CFStringGetLength(puVar7);
      local_a8 = 0;
      local_c0 = puVar7;
      local_a0 = puVar11;
      local_b8 = _CFStringGetCharactersPtr();
      if (local_b8 == 0) {
        local_b0 = _CFStringGetCStringPtr(puVar7);
      }
      else {
        local_b0 = 0;
      }
      local_98 = (ushort *)0x0;
      puStack_90 = (ushort *)0x0;
      if ((long)puVar11 < 1) {
        puVar7 = (ushort *)0x0;
        pvVar17 = (void *)0x0;
      }
      else {
        local_70 = puVar11;
        bVar15 = bVar26 << 3 | 0x61;
        local_40 = (void *)0x0;
        puVar7 = (ushort *)0x0;
        puVar11 = (ushort *)0x0;
        puVar25 = (ushort *)0x0;
        local_31 = bVar15;
        do {
          if ((long)puVar25 < (long)local_a0) {
            if (local_b8 == 0) {
              if (local_b0 == 0) {
                if ((long)puVar25 < (long)local_98 || (long)puStack_90 <= (long)puVar25) {
                  local_98 = (ushort *)0x0;
                  if ((ushort *)0x3 < puVar25) {
                    local_98 = puVar25 + -2;
                  }
                  puStack_90 = local_a0;
                  if (local_98 + 0x20 < local_a0) {
                    puStack_90 = local_98 + 0x20;
                  }
                  _CFStringGetCharacters
                            (local_c0,(long)local_98 + local_a8,(long)puStack_90 - (long)local_98,
                             &local_140);
                }
                uVar23 = *(ushort *)((long)&local_140 + ((long)puVar25 - (long)local_98) * 2);
              }
              else {
                uVar23 = (ushort)*(char *)((long)puVar25 + local_b0 + local_a8);
              }
            }
            else {
              uVar23 = *(ushort *)(local_b8 + local_a8 * 2 + (long)puVar25 * 2);
            }
          }
          else {
            uVar23 = 0;
          }
          bVar13 = bVar15;
          if ((long)puStack_50 - (long)local_58 != 0) {
            lVar6 = (long)puStack_50 - (long)local_58 >> 3;
            lVar9 = 0;
            do {
              lVar12 = *(long *)(DAT_1008a2e58 + 8 + local_58[lVar9] * 0x20);
              lVar20 = *(long *)(DAT_1008a2e58 + 0x10 + local_58[lVar9] * 0x20) - lVar12;
              if (lVar20 != 0) {
                lVar20 = (lVar20 >> 1) * -0x5555555555555555;
                pbVar19 = (byte *)(lVar12 + 4);
                do {
                  if ((*(ushort *)(pbVar19 + -4) <= uVar23) && (uVar23 <= *(ushort *)(pbVar19 + -2))
                     ) {
                    bVar13 = *pbVar19;
                  }
                  lVar20 = lVar20 + -1;
                  pbVar19 = pbVar19 + 6;
                } while (lVar20 != 0);
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 != lVar6 + (ulong)(lVar6 == 0));
          }
          if (bVar13 == 0x61) {
            if (puVar7 < puVar11) {
              *puVar7 = uVar23;
              goto LAB_1002493f6;
            }
            local_68 = (long)puVar7 - (long)local_40;
            lVar6 = (long)local_68 >> 1;
            if (lVar6 < -1) {
              FUN_100249b9a();
LAB_1002497f8:
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar21 = (long)puVar11 - (long)local_40;
            uVar22 = lVar6 + 1U;
            if (lVar6 + 1U < uVar21) {
              uVar22 = uVar21;
            }
            uVar10 = 0x7fffffffffffffff;
            if (uVar21 < 0x7ffffffffffffffe) {
              uVar10 = uVar22;
            }
            if (uVar10 == 0) {
              auVar27 = ZEXT816(0);
            }
            else {
              auVar27 = FUN_100249baa();
            }
            pvVar17 = auVar27._0_8_;
            local_60 = (ushort *)((long)pvVar17 + auVar27._8_8_ * 2);
            puVar7 = (ushort *)((long)pvVar17 + lVar6 * 2);
            *puVar7 = uVar23;
LAB_10024958a:
            pvVar4 = local_40;
            puVar7 = puVar7 + 1;
            _memcpy(pvVar17,local_40,local_68);
            if (pvVar4 != (void *)0x0) {
              operator_delete(pvVar4);
            }
            local_40 = pvVar17;
            puVar11 = local_60;
            bVar15 = local_31;
          }
          else if (bVar13 == 0x69) {
            if (puVar11 <= puVar7) {
              local_68 = (long)puVar7 - (long)local_40;
              lVar6 = (long)local_68 >> 1;
              if (-2 < lVar6) {
                uVar21 = (long)puVar11 - (long)local_40;
                uVar22 = lVar6 + 1U;
                if (lVar6 + 1U < uVar21) {
                  uVar22 = uVar21;
                }
                uVar10 = 0x7fffffffffffffff;
                if (uVar21 < 0x7ffffffffffffffe) {
                  uVar10 = uVar22;
                }
                if (uVar10 == 0) {
                  auVar27 = ZEXT816(0);
                }
                else {
                  auVar27 = FUN_100249baa();
                }
                pvVar17 = auVar27._0_8_;
                local_60 = (ushort *)((long)pvVar17 + auVar27._8_8_ * 2);
                puVar7 = (ushort *)((long)pvVar17 + lVar6 * 2);
                *puVar7 = 0x20;
                goto LAB_10024958a;
              }
              FUN_100249b9a();
              goto LAB_1002497f8;
            }
            *puVar7 = 0x20;
LAB_1002493f6:
            puVar7 = puVar7 + 1;
          }
          else if (bVar13 == 0x6b) {
            if (local_40 != (void *)0x0) {
              operator_delete(local_40);
            }
            if (local_58 != (ulong *)0x0) {
              puStack_50 = local_58;
              operator_delete(local_58);
              return local_78;
            }
            return local_78;
          }
          puVar25 = (ushort *)((long)puVar25 + 1);
          pvVar17 = local_40;
          uVar8 = local_78;
        } while (puVar25 != local_70);
      }
      _CFStringAppendCharacters(uVar8,pvVar17,(long)puVar7 - (long)pvVar17 >> 1);
      if (pvVar17 != (void *)0x0) {
        operator_delete(pvVar17);
      }
      if (local_58 != (ulong *)0x0) {
        puStack_50 = local_58;
        operator_delete(local_58);
      }
      if (DAT_1008a2e48 == DAT_1008a2e40) {
        return local_78;
      }
      uVar22 = 0;
      do {
        lVar9 = uVar22 * 0x10;
        uVar8 = _CFStringGetLength(*(undefined8 *)(DAT_1008a2e40 + 8 + lVar9));
        lVar6 = _CFStringCompareWithOptions
                          (local_88,*(undefined8 *)(DAT_1008a2e40 + 8 + lVar9),0,uVar8,0);
        if (lVar6 == 0) {
          puVar7 = *(ushort **)(DAT_1008a2e28 + *(long *)(DAT_1008a2e40 + lVar9) * 0x18);
          local_70 = *(ushort **)(DAT_1008a2e28 + 8 + *(long *)(DAT_1008a2e40 + lVar9) * 0x18);
          lVar6 = DAT_1008a2e40;
          if (puVar7 != local_70) {
            do {
              local_68 = uVar22;
              lVar9 = _CFStringGetLength(local_78);
              bVar15 = *(byte *)((long)puVar7 + 3);
              if ((bVar15 & 1) == 0) {
                if ((bVar15 & 2) != 0) {
                  lVar12 = _CFStringGetLength(*(undefined8 *)(puVar7 + 4));
                  lVar12 = lVar9 - lVar12;
                  if (lVar12 < 1) {
                    lVar12 = 0;
                  }
LAB_1002496e0:
                  lVar6 = _CFStringGetLength(*(undefined8 *)(puVar7 + 4));
                  if (lVar6 < lVar9) {
                    lVar9 = lVar6;
                  }
                  bVar15 = *(byte *)((long)puVar7 + 3);
                  goto LAB_1002496f4;
                }
                local_40 = (void *)CONCAT44(local_40._4_4_,
                                            (int)CONCAT71((int7)((ulong)lVar6 >> 8),1));
                lVar12 = 0;
                bVar13 = 0;
              }
              else {
                lVar6 = _CFStringGetLength(*(undefined8 *)(puVar7 + 4));
                if (lVar6 < lVar9) {
                  lVar9 = lVar6;
                }
                bVar15 = *(byte *)((long)puVar7 + 3);
                lVar12 = 0;
                if ((bVar15 & 2) != 0) goto LAB_1002496e0;
LAB_1002496f4:
                bVar13 = 8;
                local_40 = (void *)((ulong)local_40 & 0xffffffff00000000);
              }
              uVar8 = local_78;
              do {
                lVar6 = lVar9;
                cVar5 = _CFStringFindWithOptions
                                  (uVar8,*(undefined8 *)(puVar7 + 4),lVar12,lVar6,
                                   bVar15 >> 2 & 1 | bVar13,&local_140);
                if (cVar5 == '\0') break;
                local_140 = (ulong)*puVar7 + local_140;
                local_138 = (ulong)(byte)puVar7[1];
                lVar6 = *(long *)(puVar7 + 8);
                _CFStringReplace(uVar8,local_140,local_138,lVar6);
                lVar9 = local_140;
                lVar12 = _CFStringGetLength(*(undefined8 *)(puVar7 + 8));
                lVar12 = lVar12 + lVar9;
                lVar9 = _CFStringGetLength(uVar8);
                lVar9 = lVar9 - lVar12;
              } while ((char)local_40 != '\0');
              puVar7 = puVar7 + 0xc;
              uVar22 = local_68;
            } while (puVar7 != local_70);
          }
        }
        uVar22 = uVar22 + 1;
        if ((ulong)(DAT_1008a2e48 - DAT_1008a2e40 >> 4) <= uVar22) {
          return local_78;
        }
      } while( true );
    }
  }
switchD_10024905c_caseD_3:
  return 0;
}

