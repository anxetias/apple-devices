// name: FUN_100519dd0
// address: 100519dd0

void FUN_100519dd0(long param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  ulong uVar10;
  void *local_2a8;
  void *pvStack_2a0;
  undefined8 local_298;
  void *local_288;
  void *pvStack_280;
  undefined8 local_278;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined2 uStack_25c;
  undefined2 uStack_25a;
  undefined6 uStack_258;
  undefined2 uStack_252;
  undefined **local_68;
  long local_60;
  void **local_58;
  undefined ***local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar2 = *(byte *)(param_1 + 0x14de7);
  if (((bVar2 & 1) == 0) && (*(char *)(param_1 + 0x6abf) != '\0')) {
    if (*(char *)(param_1 + 0x14d6c) != '\0') {
      lVar5 = FUN_1004e0c3f(param_1,1);
      if (lVar5 == 0) {
LAB_100519e6c:
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_268 = 0x8220202;
          uStack_264 = 0x7a0a90;
          uStack_260 = 1;
          uStack_25c = 0x822;
          uStack_25a = 0xe894;
          uStack_258 = 0x1007a;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_268,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (*(int *)(lVar5 + 0x80) != 0x74646174) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_268 = 0x8220202;
          uStack_264 = 0x7ab58c;
          uStack_260 = 1;
          uStack_25c = 0x822;
          uStack_25a = 0xec03;
          uStack_258 = 0x1007a;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_268,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') goto LAB_100519e6c;
      }
      FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15328));
      if (*(char *)(param_1 + 0x14cdb) == '\x02') {
        uVar4 = FUN_1002c0e84(*(undefined8 *)(param_1 + 0x152f8));
        if (uVar4 != 0) {
          uVar10 = 0;
          do {
            uVar6 = *(undefined8 *)(**(long **)(param_1 + 0x152f8) + uVar10 * 8);
            lVar7 = FUN_10048b5ec(lVar5,uVar6);
            if ((lVar7 != 0) &&
               (cVar1 = FUN_1002bdfcb(lVar7,*(undefined1 *)(param_1 + 0x372),
                                      *(undefined1 *)(param_1 + 0x346),4,4,0x200000), cVar1 != '\0')
               ) {
              FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x15328),uVar6);
            }
            uVar10 = uVar10 + 1;
          } while (uVar4 != uVar10);
        }
      }
      else if (*(char *)(param_1 + 0x14cdb) == '\x01') {
        for (lVar5 = FUN_100315ede(lVar5); lVar5 != 0; lVar5 = FUN_100316031(lVar5)) {
          cVar1 = FUN_1002bdfcb(lVar5,*(undefined1 *)(param_1 + 0x372),
                                *(undefined1 *)(param_1 + 0x346),4,4,0x200000);
          if (cVar1 != '\0') {
            FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x15328),*(undefined8 *)(lVar5 + 0x60));
          }
        }
      }
      iVar3 = FUN_1002c0e84(*(undefined8 *)(param_1 + 0x15328));
      if (iVar3 != 0) {
        if (*(char *)(param_1 + 0x14d2a) == '\0') {
          *(undefined2 *)(param_1 + 0x14d29) = 0x104;
        }
        else if (*(char *)(param_1 + 0x14d29) == '\x02') {
          *(undefined1 *)(param_1 + 0x14d29) = 6;
        }
      }
    }
    bVar2 = *(byte *)(param_1 + 0x14de7) | 1;
    *(byte *)(param_1 + 0x14de7) = bVar2;
  }
  if ((bVar2 & 2) == 0) {
    bVar9 = *(char *)(param_1 + 0x14d69) - 5;
    if (bVar9 < 5) {
      *(char *)(param_1 + 0x14d69) = (char)(0x1303140412 >> (bVar9 * '\b' & 0x3f));
    }
    bVar2 = bVar2 | 2;
    *(byte *)(param_1 + 0x14de7) = bVar2;
  }
  if (((bVar2 & 4) == 0) && (*(char *)(param_1 + 0x6abf) != '\0')) {
    *(undefined1 *)(param_1 + 0x14dec) = 0;
    FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15360));
    FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15368));
    if (*(char *)(param_1 + 0x14d6c) != '\0') {
      lVar5 = FUN_1004e0c3f(param_1,1);
      if (lVar5 == 0) {
LAB_10051a084:
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_268 = 0x8220202;
          uStack_264 = 0x7a0a90;
          uStack_260 = 1;
          uStack_25c = 0x822;
          uStack_25a = 0xe894;
          uStack_258 = 0x1007a;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_268,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (*(int *)(lVar5 + 0x80) != 0x74646174) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_268 = 0x8220202;
          uStack_264 = 0x7ab58c;
          uStack_260 = 1;
          uStack_25c = 0x822;
          uStack_25a = 0xec03;
          uStack_258 = 0x1007a;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_268,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') goto LAB_10051a084;
      }
      if (*(char *)(param_1 + 0x14cdb) == '\x02') {
        local_288 = (void *)((ulong)local_288 & 0xffffffffffffff00);
        uVar4 = FUN_1002c0e84(*(undefined8 *)(param_1 + 0x152f8));
        if (uVar4 != 0) {
          uVar10 = (ulong)uVar4;
          do {
            uVar6 = *(undefined8 *)(**(long **)(param_1 + 0x152f8) + -8 + uVar10 * 8);
            lVar7 = FUN_10048b5ec(lVar5,uVar6);
            if (lVar7 != 0) {
              if (*(short *)(lVar7 + 0x10) == 5) {
                local_288 = (void *)CONCAT71(local_288._1_7_,1);
              }
              else {
                cVar1 = FUN_1002bdfcb(lVar7,*(undefined1 *)(param_1 + 0x372),1,8,8,0);
                if (cVar1 != '\0') {
                  if ((char)local_288 != '\x01') {
                    local_288 = (void *)CONCAT71(local_288._1_7_,2);
                  }
                  FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x15368),uVar6);
                  cVar1 = FUN_1002bdfcb(lVar7,*(undefined1 *)(param_1 + 0x372),1,1,0xfe182321,
                                        (uint)(*(char *)(param_1 + 0x39b) == '\0') << 0x10 |
                                        0xe61cde);
                  if (cVar1 == '\0') {
                    FUN_1002c10ef(*(undefined8 *)(param_1 + 0x152f8),uVar6);
                  }
                }
              }
            }
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        uVar4 = FUN_1002c0e84(*(undefined8 *)(param_1 + 0x15300));
        if (uVar4 != 0) {
          uVar10 = 0;
          do {
            lVar7 = FUN_1004cfdd1(lVar5,*(undefined8 *)(**(long **)(param_1 + 0x15300) + uVar10 * 8)
                                 );
            if (lVar7 != 0) {
              local_68 = &PTR_FUN_10085f918;
              local_58 = &local_288;
              local_60 = param_1;
              local_48 = &local_68;
              FUN_1005e405e(lVar7,1,&local_68);
              if (local_48 == &local_68) {
                lVar7 = 0x20;
              }
              else {
                lVar7 = 0x28;
                if (local_48 == (undefined ***)0x0) goto LAB_10051a242;
              }
              (**(code **)((long)*local_48 + lVar7))();
            }
LAB_10051a242:
            uVar10 = uVar10 + 1;
          } while (uVar4 != uVar10);
        }
        lVar5 = FUN_10048bbac(lVar5,5,0);
        if (lVar5 != 0) {
          lVar7 = FUN_100485529(lVar5);
          if (lVar7 != 0) {
            do {
              lVar8 = FUN_100242590(lVar7);
              if (lVar8 == 0) {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_268 = 0x8220202;
                  uStack_264 = 0x7a0a90;
                  uStack_260 = 1;
                  uStack_25c = 0x822;
                  uStack_25a = 0x581f;
                  uStack_258 = 0x1007b;
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_268,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                uVar4 = FUN_1004744bf(lVar8,0);
                if (((((uVar4 & 0x21800c) == 8) && (iVar3 = FUN_10047a7b5(lVar8), iVar3 == 0)) &&
                    (cVar1 = FUN_1002c16fa(*(undefined8 *)(param_1 + 0x15310)), cVar1 != '\0')) &&
                   (cVar1 = FUN_1002be216(*(undefined8 *)(param_1 + 0x15360)), cVar1 == '\0')) {
                  if ((char)local_288 != '\x01') {
                    local_288 = (void *)CONCAT71(local_288._1_7_,2);
                  }
                  FUN_1002c0f3a(*(undefined8 *)(param_1 + 0x15360));
                }
              }
              lVar7 = *(long *)(lVar7 + 0x18);
            } while (lVar7 != 0);
          }
          FUN_1002c10ef(*(undefined8 *)(param_1 + 0x152f8),*(undefined8 *)(lVar5 + 0x60));
        }
        if ((char)local_288 != '\0') {
          *(undefined1 *)(param_1 + 0x14dec) = 1;
          *(char *)(param_1 + 0x14ded) = (char)local_288;
        }
      }
      else if (*(char *)(param_1 + 0x14cdb) == '\x01') {
        *(undefined2 *)(param_1 + 0x14dec) = 0x101;
      }
    }
    bVar2 = *(byte *)(param_1 + 0x14de7) | 4;
    *(byte *)(param_1 + 0x14de7) = bVar2;
  }
  if (((bVar2 & 8) != 0) || (*(char *)(param_1 + 0x6ac2) == '\0')) goto LAB_10051a665;
  if (*(char *)(param_1 + 0x14de1) != '\0') {
    local_268 = 0;
    uStack_264 = 0;
    uStack_260 = 0;
    uStack_25c = 0;
    uStack_25a = 0;
    uStack_258 = 0;
    uStack_252 = 0;
    local_278 = 0;
    local_288 = (void *)0x0;
    pvStack_280 = (void *)0x0;
    local_298 = 0;
    local_2a8 = (void *)0x0;
    pvStack_2a0 = (void *)0x0;
    lVar5 = FUN_10016aa8e(DAT_1008c4d90,param_1 + 0x75e0,"iTunesPrefs.plist",0,0);
    if (lVar5 != 0) {
      FUN_1005ce86a(&local_268,lVar5,&cf_iTunesUChannelIDs);
      FUN_1005ce86a(&local_288,lVar5,&cf_iTunesUTrackIDs);
      FUN_1005ce86a(&local_2a8,lVar5,&cf_iTunesUPlaylistIDs);
    }
    if (*(char *)(param_1 + 0x14d2a) == '\0') {
      *(undefined1 *)(param_1 + 0x14d2a) = 1;
      *(undefined1 *)(param_1 + 0x14d29) = *(undefined1 *)(param_1 + 0x14de0);
      *(undefined1 *)(param_1 + 0x14d2b) = *(undefined1 *)(param_1 + 0x14de2);
      *(undefined1 *)(param_1 + 0x14d6b) = *(undefined1 *)(param_1 + 0x14de3);
      FUN_1002c0ca0(&local_268,*(undefined8 *)(param_1 + 0x15318));
      FUN_1002c0ca0(&local_288,*(undefined8 *)(param_1 + 0x15320));
      FUN_1002c0ca0(&local_2a8,*(undefined8 *)(param_1 + 0x15328));
    }
    else {
      bVar2 = *(byte *)(param_1 + 0x14d29);
      bVar9 = *(byte *)(param_1 + 0x14de0);
      if (bVar2 == 1) {
        if (bVar9 == 1) goto LAB_10051a5fd;
        *(undefined1 *)(param_1 + 0x14d29) = 0;
        FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15318));
        FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15328));
        bVar2 = *(byte *)(param_1 + 0x14de0);
        if ((bVar2 & 2) != 0) {
          *(byte *)(param_1 + 0x14d29) = *(byte *)(param_1 + 0x14d29) | 2;
          FUN_10051ce0d(param_1,*(undefined8 *)(param_1 + 0x15318),0);
          FUN_1002c0ff4(*(undefined8 *)(param_1 + 0x15318),&local_268);
          bVar2 = *(byte *)(param_1 + 0x14de0);
        }
        if ((bVar2 & 4) != 0) {
          *(byte *)(param_1 + 0x14d29) = *(byte *)(param_1 + 0x14d29) | 4;
          FUN_10051ceaa(param_1,*(undefined8 *)(param_1 + 0x15328));
          goto LAB_10051a5d4;
        }
      }
      else {
        if (bVar9 == 1) {
          *(byte *)(param_1 + 0x14d29) = bVar2 | 2;
          FUN_10051ce0d(param_1,*(undefined8 *)(param_1 + 0x15318),1);
        }
        else if ((bVar9 & 2) != 0) {
          *(byte *)(param_1 + 0x14d29) = bVar2 | 2;
          FUN_1002c0ff4(*(undefined8 *)(param_1 + 0x15318),&local_268);
        }
        if ((*(byte *)(param_1 + 0x14de0) & 4) != 0) {
          *(byte *)(param_1 + 0x14d29) = *(byte *)(param_1 + 0x14d29) | 4;
LAB_10051a5d4:
          FUN_1002c0ff4(*(undefined8 *)(param_1 + 0x15328),&local_2a8);
        }
      }
      FUN_1002c0ff4(*(undefined8 *)(param_1 + 0x15320),&local_288);
    }
LAB_10051a5fd:
    *(undefined4 *)(param_1 + 0x14de0) = 0;
    FUN_10017060f(lVar5);
    if (local_2a8 != (void *)0x0) {
      pvStack_2a0 = local_2a8;
      operator_delete(local_2a8);
    }
    if (local_288 != (void *)0x0) {
      pvStack_280 = local_288;
      operator_delete(local_288);
    }
    if ((void *)CONCAT44(uStack_264,local_268) != (void *)0x0) {
      uStack_260 = local_268;
      uStack_25c = (undefined2)uStack_264;
      uStack_25a = (undefined2)((uint)uStack_264 >> 0x10);
      operator_delete((void *)CONCAT44(uStack_264,local_268));
    }
    bVar2 = *(byte *)(param_1 + 0x14de7);
  }
  *(byte *)(param_1 + 0x14de7) = bVar2 | 8;
LAB_10051a665:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

