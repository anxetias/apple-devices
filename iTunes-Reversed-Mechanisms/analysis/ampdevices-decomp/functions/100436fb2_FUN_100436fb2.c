// name: FUN_100436fb2
// address: 100436fb2

int FUN_100436fb2(long param_1,int *param_2,undefined4 param_3,byte *param_4,byte *param_5)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  undefined1 local_80 [20];
  undefined4 local_6c;
  byte *local_68;
  byte *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_6c = param_3;
  local_60 = param_5;
  if (param_2 == (int *)0x0) {
LAB_10043707a:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto LAB_1004379cd;
  }
  if (*param_2 != 0x706c7374) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') goto LAB_10043707a;
  }
  FUN_100486d8f(local_80,param_2);
  if (param_2[0x10] == 0) {
    iVar7 = 0;
    local_68 = param_4;
    iVar3 = iVar7;
    if (*(char *)(param_1 + 0x14cda) != '\0') {
      if (*(char *)(param_1 + 0x6abf) == '\0') {
LAB_100437846:
        iVar3 = iVar7;
        if ((char)local_6c == '\0') {
LAB_100437850:
          iVar3 = iVar7;
          if (*(char *)(param_1 + 0x6ac2) != '\0') {
            cVar2 = FUN_1002bdfcb(param_2,*(undefined1 *)(param_1 + 0x372),
                                  *(undefined1 *)(param_1 + 0x346),4,4,0x200000);
            if (cVar2 == '\0') {
              if (((short)param_2[4] == 10) &&
                 (((FUN_10043a2a2(param_1,local_60), *(char *)(param_1 + 0x14d29) != '\x01' ||
                   (*(char *)(param_1 + 0x14d2b) != '\0')) || (*(char *)(param_1 + 0x14d6b) != '\0')
                  ))) {
                *(undefined1 *)(param_1 + 0x14d29) = 1;
                *(undefined1 *)(param_1 + 0x14d2b) = 0;
                *(undefined1 *)(param_1 + 0x14d6b) = 0;
                if (local_60 != (byte *)0x0) {
                  *local_60 = *local_60 | 8;
                }
                goto LAB_1004379b7;
              }
            }
            else {
              FUN_10043a2a2(param_1,local_60);
              if ((((*(char *)(param_1 + 0x14d29) != '\x01') ||
                   (*(char *)(param_1 + 0x14d2b) != '\0')) || (*(char *)(param_1 + 0x14d6b) != '\0')
                  ) && (cVar2 = FUN_1002be216(*(undefined8 *)(param_1 + 0x15328),
                                              *(undefined8 *)(param_2 + 0x18)), cVar2 == '\0')) {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar4 = DAT_1008c75b8;
                cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar2 != '\0') {
                  local_54 = (char *)FUN_1001b83ae(local_80);
                  local_58 = 0x8220102;
                  __os_log_impl(0x100000000,uVar4,1,
                                "sync> adding \"%{public}s\" to selected podcast playlists",
                                &local_58,0xc);
                }
                FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x15328),*(undefined8 *)(param_2 + 0x18));
                if (local_60 != (byte *)0x0) {
                  local_60[2] = local_60[2] | 1;
                }
LAB_1004379b7:
                iVar3 = 0;
                if (local_68 != (byte *)0x0) {
                  local_68[1] = local_68[1] | 1;
                }
              }
            }
          }
        }
      }
      else {
        bVar8 = *(char *)(param_1 + 0x365) == '\0';
        cVar2 = FUN_1002bdfcb(param_2,*(undefined1 *)(param_1 + 0x372),1,1,
                              (uint)bVar8 * 8 + -0x1e7dcdf,
                              (uint)(*(char *)(param_1 + 0x39b) == '\0') * 0x10000 +
                              (uint)!bVar8 * 8 + 0xe61cd6);
        if (cVar2 == '\0') {
          if (((short)param_2[4] == 4) &&
             (FUN_100439e7e(param_1,local_60), *(char *)(param_1 + 0x14cdb) != '\x01')) {
            *(undefined1 *)(param_1 + 0x14cdb) = 1;
            if (local_60 != (byte *)0x0) {
              *local_60 = *local_60 | 8;
            }
            goto LAB_1004372d8;
          }
        }
        else {
          FUN_100439e7e(param_1,local_60);
          if ((*(char *)(param_1 + 0x14cdb) == '\x02') &&
             (cVar2 = FUN_1002be216(*(undefined8 *)(param_1 + 0x152f8),
                                    *(undefined8 *)(param_2 + 0x18)), cVar2 == '\0')) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar4 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar2 != '\0') {
              local_54 = (char *)FUN_1001b83ae(local_80);
              local_58 = 0x8220102;
              __os_log_impl(0x100000000,uVar4,1,
                            "sync> adding \"%{public}s\" to selected music playlists",&local_58,0xc)
              ;
            }
            FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x152f8),*(undefined8 *)(param_2 + 0x18));
            if (local_60 != (byte *)0x0) {
              local_60[1] = local_60[1] | 4;
            }
LAB_1004372d8:
            if (local_68 != (byte *)0x0) {
              *local_68 = *local_68 | 0x20;
            }
          }
        }
        if ((char)local_6c == '\0') {
          if (*(char *)(param_1 + 0x34e) != '\0') {
            cVar2 = FUN_1002bdfcb(param_2,*(undefined1 *)(param_1 + 0x372),1,2,0x402,0x218004);
            if (cVar2 == '\0') {
              if (((short)param_2[4] == 2) &&
                 (FUN_100439f7e(param_1,local_60), *(char *)(param_1 + 0x14d69) != '\x01')) {
                *(undefined1 *)(param_1 + 0x14d69) = 1;
                if (local_60 != (byte *)0x0) {
                  *local_60 = *local_60 | 8;
                }
                goto LAB_10043746a;
              }
            }
            else {
              FUN_100439f7e(param_1,local_60);
              if ((*(char *)(param_1 + 0x14d69) != '\x01') &&
                 (cVar2 = FUN_1002be216(*(undefined8 *)(param_1 + 0x15338),
                                        *(undefined8 *)(param_2 + 0x18)), cVar2 == '\0')) {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar4 = DAT_1008c75b8;
                cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar2 != '\0') {
                  local_54 = (char *)FUN_1001b83ae(local_80);
                  local_58 = 0x8220102;
                  __os_log_impl(0x100000000,uVar4,1,
                                "sync> adding \"%{public}s\" to selected movie playlists",&local_58,
                                0xc);
                }
                FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x15338),*(undefined8 *)(param_2 + 0x18));
                if (local_60 != (byte *)0x0) {
                  local_60[2] = local_60[2] | 0x20;
                }
LAB_10043746a:
                if (local_68 != (byte *)0x0) {
                  *local_68 = *local_68 | 0x40;
                }
              }
            }
          }
          if (*(char *)(param_1 + 0x34f) != '\0') {
            cVar2 = FUN_1002bdfcb(param_2,*(undefined1 *)(param_1 + 0x372),1,2,0x40,0x18000);
            if (cVar2 == '\0') {
              if (((short)param_2[4] == 3) &&
                 (((FUN_10043a039(param_1,local_60), *(char *)(param_1 + 0x14d79) != '\x01' ||
                   (*(char *)(param_1 + 0x14d7a) != '\0')) || (*(char *)(param_1 + 0x14d7b) != '\0')
                  ))) {
                *(undefined2 *)(param_1 + 0x14d79) = 1;
                *(undefined1 *)(param_1 + 0x14d7b) = 0;
                if (local_60 != (byte *)0x0) {
                  *local_60 = *local_60 | 8;
                }
                goto LAB_1004375d4;
              }
            }
            else {
              FUN_10043a039(param_1,local_60);
              if ((((*(char *)(param_1 + 0x14d79) != '\x01') ||
                   (*(char *)(param_1 + 0x14d7a) != '\0')) || (*(char *)(param_1 + 0x14d7b) != '\0')
                  ) && (cVar2 = FUN_1002be216(*(undefined8 *)(param_1 + 0x15358),
                                              *(undefined8 *)(param_2 + 0x18)), cVar2 == '\0')) {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar4 = DAT_1008c75b8;
                cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar2 != '\0') {
                  local_54 = (char *)FUN_1001b83ae(local_80);
                  local_58 = 0x8220102;
                  __os_log_impl(0x100000000,uVar4,1,
                                "sync> adding \"%{public}s\" to selected TV show playlists",
                                &local_58,0xc);
                }
                FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x15358),*(undefined8 *)(param_2 + 0x18));
                if (local_60 != (byte *)0x0) {
                  local_60[3] = local_60[3] | 2;
                }
LAB_1004375d4:
                if (local_68 != (byte *)0x0) {
                  *local_68 = *local_68 | 0x80;
                }
              }
            }
          }
          if (*(char *)(param_1 + 0x365) != '\0') {
            cVar2 = FUN_1002bdfcb(param_2,*(undefined1 *)(param_1 + 0x372),1,8,8,0);
            if (cVar2 == '\0') {
              if (((short)param_2[4] == 5) &&
                 (FUN_10043a11c(param_1,local_60), *(char *)(param_1 + 0x14ded) != '\x01')) {
                *(undefined1 *)(param_1 + 0x14ded) = 1;
                if (local_60 != (byte *)0x0) {
                  *local_60 = *local_60 | 8;
                }
                goto LAB_100437704;
              }
            }
            else {
              FUN_10043a11c(param_1,local_60);
              if ((*(char *)(param_1 + 0x14ded) == '\x02') &&
                 (cVar2 = FUN_1002be216(*(undefined8 *)(param_1 + 0x15368),
                                        *(undefined8 *)(param_2 + 0x18)), cVar2 == '\0')) {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar4 = DAT_1008c75b8;
                cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar2 != '\0') {
                  local_54 = (char *)FUN_1001b83ae(local_80);
                  local_58 = 0x8220102;
                  __os_log_impl(0x100000000,uVar4,1,
                                "sync> adding \"%{public}s\" to selected audiobook playlists",
                                &local_58,0xc);
                }
                FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x15368),*(undefined8 *)(param_2 + 0x18));
                if (local_60 != (byte *)0x0) {
                  local_60[3] = local_60[3] | 0x10;
                }
LAB_100437704:
                if (local_68 != (byte *)0x0) {
                  local_68[1] = local_68[1] | 8;
                }
              }
            }
          }
          if (*(char *)(param_1 + 0x39c) != '\0') {
            cVar2 = FUN_1002bdfcb(param_2,*(undefined1 *)(param_1 + 0x372),1,8,0xc00000,0);
            if (cVar2 == '\0') {
              if (((short)param_2[4] == 0x3c) &&
                 (FUN_10043a1e7(param_1,local_60), *(char *)(param_1 + 0x14def) != '\x01')) {
                *(undefined1 *)(param_1 + 0x14def) = 1;
                if (local_60 != (byte *)0x0) {
                  *local_60 = *local_60 | 8;
                }
                if (local_68 != (byte *)0x0) {
                  local_68[1] = local_68[1] | 0x10;
                }
              }
            }
            else {
              FUN_10043a1e7(param_1,local_60);
              if ((*(char *)(param_1 + 0x14def) == '\x02') &&
                 (lVar5 = FUN_100485529(param_2), lVar5 != 0)) {
                do {
                  lVar6 = FUN_100242590(lVar5);
                  if (lVar6 == 0) {
                    uVar4 = FUN_1001cc310();
                    cVar2 = _os_log_type_enabled(uVar4,0x10);
                    if (cVar2 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x822;
                      local_4a = "trackInfo != nullptr";
                      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  else {
                    cVar2 = FUN_1002bd03f(lVar6,*(undefined1 *)(param_1 + 0x39e),
                                          *(undefined1 *)(param_1 + 0x39d));
                    if ((cVar2 != '\0') &&
                       (iVar3 = FUN_10043649f(param_1,lVar6,1,local_68,local_60), iVar3 != 0)) {
                      uVar4 = FUN_1001cc310();
                      cVar2 = _os_log_type_enabled(uVar4,0x10);
                      if (cVar2 != '\0') {
                        local_58 = 0x8220202;
                        local_54 = "Assertion failure";
                        local_4c = 0x400;
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
                      goto LAB_1004379c4;
                    }
                  }
                  lVar5 = *(long *)(lVar5 + 0x18);
                } while (lVar5 != 0);
                goto LAB_100437846;
              }
            }
          }
          goto LAB_100437850;
        }
      }
    }
  }
  else {
    lVar5 = *(long *)(param_2 + 0x12);
    if (lVar5 == 0) {
      iVar3 = 0;
    }
    else {
      uVar1 = (char)local_6c;
      do {
        iVar3 = FUN_100436fb2(param_1,lVar5,uVar1,param_4,local_60);
        if (iVar3 != 0) {
          if (iVar3 != -0x80) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          break;
        }
        lVar5 = *(long *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
  }
LAB_1004379c4:
  FUN_1001b7a50(local_80);
LAB_1004379cd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

