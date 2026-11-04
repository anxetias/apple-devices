// name: FUN_10035adb6
// address: 10035adb6

undefined8 FUN_10035adb6(long param_1,byte param_2,ulong param_3,undefined8 param_4)

{
  char *pcVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  size_t sVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ushort uVar17;
  bool bVar18;
  long local_938;
  undefined8 local_930;
  long local_928;
  long local_920;
  undefined8 local_918;
  uint local_90c;
  undefined8 local_908;
  ulong local_900;
  ulong local_8f8;
  long local_8f0;
  ulong local_8e8;
  ulong local_8e0;
  undefined8 local_8d8;
  long local_8d0;
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined2 uStack_8bc;
  undefined2 uStack_8ba;
  undefined6 uStack_8b8;
  undefined2 uStack_8b2;
  undefined6 uStack_8b0;
  undefined2 uStack_8aa;
  undefined6 uStack_8a8;
  undefined4 local_8a0;
  undefined3 uStack_89c;
  undefined8 local_898;
  undefined8 local_890;
  undefined1 uStack_888;
  undefined7 uStack_887;
  undefined1 uStack_880;
  undefined8 uStack_87f;
  undefined4 local_6c8;
  char *local_6c4;
  undefined2 local_6bc;
  undefined4 local_6ba;
  undefined4 local_698;
  undefined1 local_678 [1056];
  undefined1 local_258 [512];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_908 = FUN_1003070df();
  local_8d0 = param_1;
  FUN_100313e0b();
  uVar6 = *(uint *)(param_3 + 4);
  local_8e8 = param_3;
  if (uVar6 < 6) {
    if ((0x1cU >> (uVar6 & 0x1f) & 1) == 0) {
      FUN_1001e4a2e(param_3 + 8,local_258);
      if (local_8d0 == 0) {
LAB_10035af92:
        local_8d0 = FUN_10048b91a(local_908,local_258,0);
        if (local_8d0 != 0) {
          uVar5 = FUN_10048c0ca(local_8d0);
          cVar4 = FUN_10048c208(uVar5);
          if (cVar4 == '\0') goto LAB_10035b064;
        }
        local_8c8 = 0;
        uStack_8c4 = 0;
        uStack_8b8 = 0;
        uStack_8b2 = 0;
        uStack_8b0 = 0;
        uStack_8aa = 0;
        uStack_8a8 = 0;
        local_8a0 = 0;
        uStack_89c = 0;
        local_898 = 0x3ff0000000000000;
        local_890 = 0;
        uStack_888 = 0;
        uStack_887 = 0;
        uStack_880 = 0;
        uStack_87f = 0;
        uStack_8c0 = SUB84(local_258,0);
        uStack_8bc = (undefined2)((ulong)local_258 >> 0x20);
        uStack_8ba = (undefined2)((ulong)local_258 >> 0x30);
        local_8d8 = FUN_1002e2674(local_908,param_2,&local_8c8,&local_8d0);
        if (((int)local_8d8 != -0x80) && ((int)local_8d8 != 0)) {
          uVar9 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar9,0x10);
          if (cVar4 != '\0') {
            local_6c8 = 0x8220202;
            local_6c4 = "Assertion failure";
            local_6bc = 0x400;
            local_6ba = (undefined4)local_8d8;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_6c8,0x12);
          }
        }
        FUN_100488970(local_8d0);
      }
      else {
        FUN_100486d8f(&local_8c8);
        FUN_1001b8dfc(&local_6c8,local_258);
        iVar8 = FUN_1001b9c66(&local_8c8,&local_6c8);
        if (iVar8 != 0) {
          local_8d0 = 0;
        }
        FUN_1001b7a50(&local_6c8);
        FUN_1001b7a50(&local_8c8);
        if (local_8d0 == 0) goto LAB_10035af92;
LAB_10035b064:
        local_8d8 = 0;
      }
      local_928 = FUN_10016ff43(DAT_1008c4d90,param_4);
    }
    else {
      FUN_1001c34b7(0x23280026,local_258);
      local_8d8 = 0;
      local_8d0 = FUN_10048b91a(local_908,local_258,0);
      if (local_8d0 == 0) {
        local_8c8 = 0;
        uStack_8c4 = 0;
        uStack_8b8 = 0;
        uStack_8b2 = 0;
        uStack_8b0 = 0;
        uStack_8aa = 0;
        uStack_8a8 = 0;
        local_8a0 = 0;
        uStack_89c = 0;
        local_898 = 0x3ff0000000000000;
        local_890 = 0;
        uStack_888 = 0;
        uStack_887 = 0;
        uStack_880 = 0;
        uStack_87f = 0;
        uStack_8c0 = SUB84(local_258,0);
        uStack_8bc = (undefined2)((ulong)local_258 >> 0x20);
        uStack_8ba = (undefined2)((ulong)local_258 >> 0x30);
        local_8d8 = FUN_1002e2674(local_908,param_2,&local_8c8,&local_8d0);
        if ((int)local_8d8 != -0x80) {
          if ((int)local_8d8 != 0) {
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 != '\0') {
              local_6c8 = 0x8220202;
              local_6c4 = "Assertion failure";
              local_6bc = 0x400;
              local_6ba = (undefined4)local_8d8;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_6c8,0x12);
            }
            if ((int)local_8d8 != 0) goto LAB_10035af01;
          }
          FUN_100488970();
        }
      }
LAB_10035af01:
      local_928 = 0;
    }
    uVar6 = *(uint *)(local_8e8 + 4);
  }
  else {
    local_8d8 = 0;
    local_928 = 0;
  }
  if (uVar6 == 4) {
    plVar16 = *(long **)(local_8e8 + 0x110);
    local_8e8 = CONCAT44(local_8e8._4_4_,(uint)param_2);
    do {
      lVar12 = local_8d0;
      sVar10 = _strlen((char *)(plVar16 + 1));
      FUN_1001b7b04(&local_8c8,(long)plVar16 + 0x407);
      FUN_100314020(lVar12);
      lVar11 = FUN_100482528(lVar12,local_8e8 & 0xffffffff,sVar10 & 0xffffffff,plVar16 + 1,
                             &local_8c8,0,0);
      FUN_1003142ca(lVar12);
      FUN_1001b7a50(&local_8c8);
      if ((lVar11 != 0) && (cVar4 = FUN_100485f88(local_8d0), cVar4 != '\0')) {
        lVar12 = FUN_100242590(lVar11);
        if (lVar12 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar12 + 0x10);
        }
        FUN_10058453f(uVar9,0,0);
        lVar12 = FUN_100485e30(lVar12);
        if (lVar12 == 0) {
          uVar9 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar9,0x10);
          if (cVar4 != '\0') {
            local_8c8 = 0x8220202;
            uStack_8c4 = 0x7a0a90;
            uStack_8c0 = 1;
            uStack_8bc = 0x822;
            uStack_8ba = 0x2c5b;
            uStack_8b8 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_8c8);
          }
          FUN_1001782e9(0,0);
        }
      }
      bVar18 = (int)local_8d8 == 0;
      FUN_100483708(local_8d0);
      if (bVar18) {
        local_8d8 = 0;
        break;
      }
      if (*plVar16 == 0) break;
      uVar9 = FUN_100242590(lVar11);
      FUN_1004737f5(uVar9);
      FUN_100483708(local_8d0);
      plVar16 = (long *)*plVar16;
    } while (plVar16 != (long *)0x0);
  }
  else {
    if (uVar6 == 3) {
      plVar16 = *(long **)(local_8e8 + 0x110);
      if (plVar16 != (long *)0x0 && *(short *)(local_8e8 + 0x108) != 0) {
        uVar17 = 1;
        local_900 = CONCAT44(local_900._4_4_,(uint)param_2);
        do {
          sVar10 = _strlen((char *)(plVar16 + 1));
          lVar12 = local_8d0;
          FUN_1001b7b04(&local_8c8,(long)plVar16 + 0x407);
          FUN_100314020(lVar12);
          lVar11 = FUN_100482528(lVar12,local_900 & 0xffffffff,sVar10 & 0xffffffff,plVar16 + 1,
                                 &local_8c8,0,0);
          FUN_1003142ca(lVar12);
          FUN_1001b7a50(&local_8c8);
          if ((lVar11 != 0) && (cVar4 = FUN_100485f88(local_8d0), cVar4 != '\0')) {
            lVar12 = FUN_100242590(lVar11);
            if (lVar12 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = *(undefined8 *)(lVar12 + 0x10);
            }
            FUN_10058453f(uVar9,0,0);
            lVar12 = FUN_100485e30(lVar12);
            if (lVar12 == 0) {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 != '\0') {
                local_8c8 = 0x8220202;
                uStack_8c4 = 0x7a0a90;
                uStack_8c0 = 1;
                uStack_8bc = 0x822;
                uStack_8ba = 0x2c5b;
                uStack_8b8 = 0x1007c;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_8c8);
              }
              FUN_1001782e9(0,0);
            }
          }
          if (*(ushort *)(local_8e8 + 0x108) <= uVar17) break;
          plVar16 = (long *)*plVar16;
          uVar17 = (ushort)(byte)((char)uVar17 + 1);
        } while (plVar16 != (long *)0x0);
      }
    }
    else {
      sVar3 = *(short *)(local_8e8 + 0x108);
      if (uVar6 == 2 && sVar3 != 0) {
        if (sVar3 != 1) {
          uVar9 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar9,0x10);
          if (cVar4 != '\0') {
            local_8c8 = 0x8220202;
            uStack_8c4 = 0x7a0a90;
            uStack_8c0 = 1;
            uStack_8bc = 0x822;
            uStack_8ba = 0x2c7a;
            uStack_8b8 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_8c8,0x16);
          }
          FUN_1001782e9(0,0);
        }
        lVar11 = local_8d0;
        lVar12 = *(long *)(local_8e8 + 0x110);
        pcVar1 = (char *)(lVar12 + 8);
        sVar10 = _strlen(pcVar1);
        FUN_1001b7b04(&local_8c8,lVar12 + 0x407);
        FUN_100314020(lVar11);
        lVar12 = FUN_100482528(lVar11,param_2,sVar10 & 0xffffffff,pcVar1,&local_8c8,0,0);
        FUN_1003142ca(lVar11);
        FUN_1001b7a50(&local_8c8);
        if ((lVar12 != 0) && (cVar4 = FUN_100485f88(local_8d0), cVar4 != '\0')) {
          lVar12 = FUN_100242590(lVar12);
          if (lVar12 == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)(lVar12 + 0x10);
          }
          FUN_10058453f(uVar9,0,0);
          lVar12 = FUN_100485e30(lVar12);
          if (lVar12 == 0) {
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 != '\0') {
              local_8c8 = 0x8220202;
              uStack_8c4 = 0x7a0a90;
              uStack_8c0 = 1;
              uStack_8bc = 0x822;
              uStack_8ba = 0x2c5b;
              uStack_8b8 = 0x1007c;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_8c8,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
        }
      }
      else {
        if (((sVar3 == 0) || (5 < uVar6)) || ((0x23U >> (uVar6 & 0x1f) & 1) == 0))
        goto LAB_10035bc3e;
        plVar16 = *(long **)(local_8e8 + 0x110);
        local_8e0 = 0;
        local_90c = (uint)param_2;
        local_900 = 0;
        uVar17 = 1;
        do {
          plVar2 = plVar16 + 1;
          uVar7 = FUN_1001df897(plVar2);
          local_938 = *(long *)(local_8d0 + 0x78);
          local_930 = *(undefined8 *)(local_938 + 0x10);
          cVar4 = FUN_10035ad73(plVar16);
          if (cVar4 == '\0') {
            lVar12 = FUN_100169bb7(DAT_1008c4d90,plVar2);
            if (lVar12 != 0) {
              lVar11 = FUN_100174969(DAT_1008c4d90,lVar12,&cf__,&cf___,0x8000100);
              if (lVar11 != 0) {
                lVar14 = FUN_1001744bd(DAT_1008c4d90,lVar11,local_928);
                if (lVar14 != 0) {
                  local_920 = _CFURLCopyAbsoluteURL(lVar14);
                  if (local_920 != 0) {
                    cVar4 = FUN_10016ffd2(local_920,local_678,0);
                    if (cVar4 != '\0') {
                      local_8d8 = FUN_10017d477(local_678,&local_6c8,&local_8c8);
                      if ((int)local_8d8 != -0x80) {
                        if ((int)local_8d8 != 0) {
                          local_8f0 = FUN_1001cc310();
                          cVar4 = _os_log_type_enabled(local_8f0,0x10);
                          if (cVar4 != '\0') {
                            local_58 = 0x8220202;
                            local_54 = "Assertion failure";
                            local_4c = 0x400;
                            local_4a = (char *)CONCAT44(local_4a._4_4_,(int)local_8d8);
                            __os_log_error_impl(0x100000000,local_8f0,0x10,"%{public}s: err == (%d)"
                                                ,&local_58,0x12);
                          }
                          if ((int)local_8d8 != 0) goto LAB_10035ba8f;
                        }
                        iVar8 = FUN_100536871(local_678,&local_8c8,local_698,1);
                        if ((iVar8 != 0x400) &&
                           (local_8f0 = FUN_100309805(*(undefined8 *)(local_8d0 + 8),local_90c,
                                                      local_678,0,0x20000,0,0,0), local_8f0 != 0)) {
                          local_8f8 = FUN_10048584d(*(undefined8 *)(local_8f0 + 8),local_8d0,0);
                          if ((local_8f8 == 0) &&
                             (local_8f8 = FUN_100489951(local_8d0,local_8f0,&local_938),
                             local_8f8 == 0)) {
                            local_8f8 = 0;
                          }
                          else {
                            local_918 = FUN_10048604a(*(undefined8 *)(local_8d0 + 8));
                            lVar15 = FUN_10048584d(*(undefined8 *)(local_8f0 + 8),local_918,0);
                            if ((lVar15 == 0) &&
                               (lVar15 = FUN_100489951(local_918,local_8f0,0), lVar15 == 0)) {
                              local_8f0 = FUN_1001cc310();
                              cVar4 = _os_log_type_enabled(local_8f0,0x10);
                              if (cVar4 != '\0') {
                                local_58 = 0x8220202;
                                local_54 = "Assertion failure";
                                local_4c = 0x822;
                                local_4a = "libraryPlaylistItem != nullptr";
                                __os_log_error_impl(0x100000000,local_8f0,0x10,
                                                    "%{public}s: (%{public}s)",&local_58);
                              }
                              FUN_1001782e9(0,0);
                            }
                            cVar4 = FUN_100485f88(local_8d0);
                            if (cVar4 != '\0') {
                              local_8e0 = FUN_100242590(local_8f8);
                              if (local_8e0 == 0) {
                                uVar9 = 0;
                              }
                              else {
                                uVar9 = *(undefined8 *)(local_8e0 + 0x10);
                              }
                              FUN_10058453f(uVar9,0,0);
                              local_8e0 = FUN_100485e30(local_8e0);
                              if (local_8e0 == 0) {
                                local_8e0 = FUN_1001cc310();
                                cVar4 = _os_log_type_enabled(local_8e0,0x10);
                                if (cVar4 != '\0') {
                                  local_58 = 0x8220202;
                                  local_54 = "Assertion failure";
                                  local_4c = 0x822;
                                  local_4a = "playlistItemVisible != nullptr";
                                  __os_log_error_impl(0x100000000,local_8e0,0x10,
                                                      "%{public}s: (%{public}s)",&local_58);
                                }
                                FUN_1001782e9(0,0);
                                local_8e0 = 0;
                              }
                            }
                          }
                          if ((local_900 == 0) && (local_900 = local_8f8, local_8e0 != 0)) {
                            local_900 = local_8e0;
                          }
                        }
                      }
                    }
LAB_10035ba8f:
                    _CFRelease(local_920);
                  }
                  _CFRelease(lVar14);
                }
                _CFRelease(lVar11);
              }
              _CFRelease(lVar12);
            }
          }
          else {
            if (*(int *)(local_8e8 + 4) != 5) {
              uVar9 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar9,0x10);
              if (cVar4 != '\0') {
                local_8c8 = 0x8220202;
                uStack_8c4 = 0x7a0a90;
                uStack_8c0 = 1;
                uStack_8bc = 0x822;
                uStack_8ba = 0x2c9c;
                uStack_8b8 = 0x1007c;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_8c8);
              }
              FUN_1001782e9(0,0);
            }
            lVar12 = local_8d0;
            FUN_1001b7b04(&local_8c8,(long)plVar16 + 0x407);
            FUN_100314020(lVar12);
            uVar13 = FUN_100482528(lVar12,local_90c,uVar7,plVar2,&local_8c8,0,0);
            FUN_1003142ca(lVar12);
            FUN_1001b7a50(&local_8c8);
            if ((uVar13 != 0) && (cVar4 = FUN_100485f88(local_8d0), cVar4 != '\0')) {
              lVar12 = FUN_100242590(uVar13);
              if (lVar12 == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = *(undefined8 *)(lVar12 + 0x10);
              }
              FUN_10058453f(uVar9,0,0);
              local_8e0 = FUN_100485e30(lVar12);
              if (local_8e0 == 0) {
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 != '\0') {
                  local_8c8 = 0x8220202;
                  uStack_8c4 = 0x7a0a90;
                  uStack_8c0 = 1;
                  uStack_8bc = 0x822;
                  uStack_8ba = 0x2c5b;
                  uStack_8b8 = 0x1007c;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_8c8);
                }
                FUN_1001782e9(0,0);
                local_8e0 = 0;
              }
            }
            if ((local_900 == 0) && (local_900 = uVar13, local_8e0 != 0)) {
              local_900 = local_8e0;
            }
          }
          plVar16 = (long *)*plVar16;
        } while ((plVar16 != (long *)0x0) &&
                (bVar18 = uVar17 < *(ushort *)(local_8e8 + 0x108),
                uVar17 = (ushort)(byte)((char)uVar17 + 1), bVar18));
      }
    }
    FUN_100483708(local_8d0);
  }
LAB_10035bc3e:
  FUN_1002fbbfc(local_908);
  if (local_928 != 0) {
    _CFRelease();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_8d8;
}

