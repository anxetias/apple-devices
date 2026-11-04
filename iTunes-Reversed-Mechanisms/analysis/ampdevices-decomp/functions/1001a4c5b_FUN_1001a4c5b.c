// name: FUN_1001a4c5b
// address: 1001a4c5b

undefined8 FUN_1001a4c5b(byte *param_1,undefined8 *param_2)

{
  char *pcVar1;
  uint7 uVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  size_t sVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  undefined8 uVar17;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  char local_64;
  char local_63 [4];
  char local_5f;
  char local_5e;
  char local_5d;
  char local_5c;
  char local_5b;
  char local_5a;
  char local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (byte *)0x0) {
    uVar17 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar17,0x10);
    if (cVar6 != '\0') {
      FUN_10069d9c8(uVar17);
    }
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
      FUN_1001c62d9(&local_80);
      bVar5 = *param_1;
      pbVar16 = param_1;
      puVar13 = PTR___DefaultRuneLocale_10082cae8;
      while (bVar5 != 0) {
        while( true ) {
          if ((char)bVar5 < '\0') {
            uVar7 = ___maskrune((int)(char)bVar5,0x500);
          }
          else {
            uVar7 = *(uint *)(puVar13 + (ulong)(uint)(int)(char)bVar5 * 4 + 0x3c) & 0x500;
          }
          if (uVar7 == 0) break;
          bVar5 = *pbVar16;
          if ((ulong)bVar5 == 0) goto LAB_1001a5175;
          pbVar14 = pbVar16;
          if (((char)bVar5 < '\0') || ((puVar13[(ulong)bVar5 * 4 + 0x3d] & 4) == 0)) {
            do {
              uVar7 = (uint)(char)pbVar14[1];
              if ((int)uVar7 < 0) {
                uVar7 = ___maskrune(uVar7,0x100);
              }
              else {
                uVar7 = *(uint *)(puVar13 + (ulong)uVar7 * 4 + 0x3c) & 0x100;
              }
              pbVar14 = pbVar14 + 1;
            } while (uVar7 != 0);
            bVar3 = true;
          }
          else {
            do {
              pbVar14 = pbVar14 + 1;
              bVar3 = false;
              if ((long)(char)*pbVar14 < 0) break;
            } while ((puVar13[(long)(char)*pbVar14 * 4 + 0x3d] & 4) != 0);
          }
          if (param_1 < pbVar16) {
            bVar5 = pbVar16[-1];
          }
          else {
            bVar5 = 0;
          }
          if (bVar3) {
            if ((long)pbVar14 - (long)pbVar16 == 1) {
              cVar6 = *pbVar16 == 0x5a || *pbVar16 == 0x54;
            }
            else {
              uVar7 = (uint)((long)pbVar14 - (long)pbVar16);
              if (uVar7 < 10) {
                uVar10 = (ulong)(uVar7 & 0xf);
                uVar7 = 1;
                lVar12 = 0;
                do {
                  pcVar1 = *(char **)((long)&PTR_s_January_10083c720 + lVar12);
                  iVar8 = _strncasecmp(pcVar1,(char *)pbVar16,uVar10);
                  if ((iVar8 == 0) && (sVar9 = _strlen(pcVar1), uVar10 == sVar9)) {
LAB_1001a4fbb:
                    puVar13 = PTR___DefaultRuneLocale_10082cae8;
                    if (local_5e == '\0') {
                      local_5e = '\x01';
                      local_59 = '\x01';
                      local_7c = uVar7;
                      goto LAB_1001a4f4a;
                    }
                    if (local_59 != '\0') goto LAB_1001a52b7;
                    if (local_5f == '\0') {
                      local_80 = local_7c;
                      local_5f = '\x01';
                      local_59 = '\x01';
                      local_7c = uVar7;
                    }
                    else {
                      if (local_5d != '\0') goto LAB_1001a52b7;
                      uVar17 = FUN_1001cc310();
                      cVar6 = _os_log_type_enabled(uVar17);
                      if (cVar6 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x822;
                        local_4a = "0";
                        __os_log_error_impl(0x100000000,uVar17,0x10,"%{public}s: (%{public}s)",
                                            &local_58,0x16);
                      }
                      FUN_1001782e9(0);
                    }
                    goto LAB_1001a4f4a;
                  }
                  pcVar1 = *(char **)((long)&PTR_s_Jan_10083c780 + lVar12);
                  iVar8 = _strncasecmp(pcVar1,(char *)pbVar16,uVar10);
                  if ((iVar8 == 0) && (sVar9 = _strlen(pcVar1), uVar10 == sVar9))
                  goto LAB_1001a4fbb;
                  uVar7 = uVar7 + 1;
                  lVar12 = lVar12 + 8;
                } while (lVar12 != 0x60);
              }
              puVar13 = PTR___DefaultRuneLocale_10082cae8;
              lVar12 = 0;
              do {
                iVar8 = _strncasecmp(*(char **)((long)&PTR_s_Mon_10083c6a0 + lVar12),(char *)pbVar16
                                     ,3);
                if (iVar8 == 0) goto LAB_1001a4f4a;
                lVar12 = lVar12 + 8;
              } while (lVar12 != 0x38);
              iVar8 = (int)(char)bVar5;
              uVar17 = 0;
LAB_1001a4f39:
              cVar6 = FUN_1001a5d78(pbVar16,pbVar14,uVar17,iVar8,&local_80);
            }
            if (cVar6 == '\0') goto LAB_1001a52b7;
          }
          else {
            lVar12 = _strtol((char *)pbVar16,(char **)0x0,10);
            uVar17 = 0xffffffce;
            uVar7 = (uint)lVar12;
            if ((int)uVar7 < 0) goto LAB_1001a52b7;
            if (bVar5 == 0x3a) {
              if (local_64 != '\0') {
                uVar17 = 1;
                iVar8 = 0x3a;
                goto LAB_1001a4f39;
              }
              if (local_5b == '\0') {
                if (0x3b < uVar7) goto LAB_1001a52b7;
                local_5b = '\x01';
                local_70 = uVar7;
              }
              else {
                if (0x3c < uVar7) goto LAB_1001a52b7;
                uVar11 = 0;
                if (local_5a != '\0') goto LAB_1001a52ba;
                local_5a = '\x01';
                puVar13 = PTR___DefaultRuneLocale_10082cae8;
                local_6c = uVar7;
              }
            }
            else if (*pbVar14 == 0x3a) {
              if (local_5c != '\0') {
LAB_1001a4f19:
                if ((bVar5 == 0x2d) || (bVar5 == 0x2b)) {
                  iVar8 = (int)(char)bVar5;
                  uVar17 = 1;
                  goto LAB_1001a4f39;
                }
                goto LAB_1001a52b7;
              }
              if (0x18 < uVar7) goto LAB_1001a52b7;
              local_5c = '\x01';
              local_74 = uVar7;
            }
            else {
              if ((long)pbVar14 - (long)pbVar16 < 3) {
                if (uVar7 < 0x20) {
                  if (uVar7 < 0xd) {
                    if (local_5d == '\0') {
                      if (local_5e == '\0') {
                        if (local_5f != '\0') goto LAB_1001a50f2;
                      }
                      else if (local_5f != '\0') {
                        uVar4 = uVar7 | 2000;
                        goto LAB_1001a50e5;
                      }
                    }
                    else {
                      if (local_5e == '\0') {
LAB_1001a50f2:
                        local_5e = '\x01';
                        local_7c = uVar7;
                        goto LAB_1001a4f4a;
                      }
                      if (local_5f != '\0') goto LAB_1001a52b7;
                    }
                  }
                  else if (local_5f != '\0') {
                    if (local_5d == '\0') {
                      uVar4 = uVar7 + 2000;
                      goto LAB_1001a50e5;
                    }
                    if (local_80 < 0xd) {
                      uVar11 = 0;
                      if (local_5e == '\0') {
                        local_7c = local_80;
                        local_5e = '\x01';
                        puVar13 = PTR___DefaultRuneLocale_10082cae8;
                        local_80 = uVar7;
                        goto LAB_1001a4f4a;
                      }
                      goto LAB_1001a52ba;
                    }
                    goto LAB_1001a52b7;
                  }
                  local_5f = '\x01';
                  local_80 = uVar7;
                  goto LAB_1001a4f4a;
                }
                if (local_5d != '\0') goto LAB_1001a52b7;
                uVar4 = uVar7 + 2000;
                if (0x32 < uVar7) {
                  uVar4 = uVar7 + 0x76c;
                }
              }
              else {
                uVar4 = uVar7;
                if (local_5d != '\0') goto LAB_1001a4f19;
              }
LAB_1001a50e5:
              local_78 = uVar4;
              local_5d = '\x01';
            }
          }
LAB_1001a4f4a:
          bVar5 = *pbVar14;
          pbVar16 = pbVar14;
          if (bVar5 == 0) goto LAB_1001a5175;
        }
        pbVar14 = pbVar16 + 1;
        pbVar16 = pbVar16 + 1;
        bVar5 = *pbVar14;
      }
LAB_1001a5175:
      if ((((local_5d == '\0') || (local_5e == '\0' && local_5f != '\0')) ||
          (local_5f == '\0' && local_5c != '\0')) ||
         ((local_5c == '\0' && local_5b != '\0' || ((local_5b == '\0' && (local_5a != '\0')))))) {
LAB_1001a52b7:
        uVar17 = 0xffffffce;
        uVar11 = 0;
      }
      else {
        if (local_5e == '\0') {
          local_7c = 1;
        }
        if (local_5f == '\0') {
          local_80 = 1;
        }
        if (local_5c == '\0') {
          local_74 = 0xc;
          local_68 = 0;
          local_63[0] = '\0';
        }
        if (10000 < local_78) {
          local_78 = 10000;
        }
        uVar2 = CONCAT16((undefined1)local_74,
                         CONCAT15((undefined1)local_80,CONCAT14((undefined1)local_7c,local_78)));
        uVar15 = (ulong)local_70;
        uVar10 = (ulong)local_6c;
        if (local_68 == 0) {
          if (local_63[0] == '\0') {
            uVar11 = 0;
          }
          else {
            lVar12 = FUN_1001734f5(DAT_1008c4d90,local_63,0x8000100,
                                   *(undefined8 *)PTR__kCFAllocatorNull_10082e028);
            if (lVar12 == 0) {
              uVar17 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar17,0x10);
              if (cVar6 != '\0') {
                FUN_10069d8dc(uVar17);
              }
              uVar11 = 0;
              FUN_1001782e9(0,0);
            }
            else {
              uVar11 = _CFTimeZoneCreateWithName(0,lVar12,1);
              FUN_10017060f(lVar12);
            }
          }
        }
        else {
          uVar11 = _CFTimeZoneCreateWithTimeIntervalFromGMT((double)local_68,0);
        }
        uVar17 = _CFGregorianDateGetAbsoluteTime
                           ((double)uVar10,uVar15 << 0x38 | (ulong)uVar2,uVar11);
        *param_2 = uVar17;
        uVar17 = 0;
      }
LAB_1001a52ba:
      FUN_10017060f(uVar11);
      goto LAB_1001a52c2;
    }
    uVar17 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar17,0x10);
    if (cVar6 != '\0') {
      FUN_10069d952(uVar17);
    }
  }
  FUN_1001782e9(0,0);
  uVar17 = 0xffffffce;
LAB_1001a52c2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

