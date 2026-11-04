// name: FUN_1003cba40
// address: 1003cba40

int FUN_1003cba40(long param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int local_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined2 uStack_4cc;
  undefined2 uStack_4ca;
  undefined1 uStack_4c8;
  undefined1 uStack_4c7;
  undefined4 uStack_4c6;
  undefined2 uStack_4c2;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_478 = 0;
  uStack_470 = 0;
  local_488 = 0;
  uStack_480 = 0;
  local_498 = 0;
  uStack_490 = 0;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_4b8 = 0;
  uStack_4b0 = 0;
  uStack_4c8 = 0;
  uStack_4c7 = 0;
  uStack_4c6 = 0;
  uStack_4c2 = 0;
  uStack_4c0 = 0;
  local_4d8 = 0;
  uStack_4d4 = 0;
  uStack_4d0 = 0;
  uStack_4cc = 0;
  uStack_4ca = 0;
  local_468 = 0;
  FUN_1002ecb9c();
  *(undefined1 *)(param_3 + 4) = uStack_4c8;
  *param_3 = local_4d8;
  param_3[1] = uStack_4d4;
  param_3[2] = uStack_4d0;
  param_3[3] = CONCAT22(uStack_4ca,uStack_4cc);
  FUN_1001b80b2(param_3 + 6,&uStack_4c0);
  FUN_1001b80b2(param_3 + 10,&uStack_4b0);
  FUN_1001b80b2(param_3 + 0xe,&uStack_4a0);
  FUN_1001b80b2(param_3 + 0x12,&uStack_490);
  FUN_1001b80b2(param_3 + 0x16,&uStack_480);
  FUN_1001b80b2(param_3 + 0x1a,&uStack_470);
  FUN_1001b7a50(&uStack_470);
  FUN_1001b7a50(&uStack_480);
  FUN_1001b7a50(&uStack_490);
  FUN_1001b7a50(&uStack_4a0);
  FUN_1001b7a50(&uStack_4b0);
  FUN_1001b7a50(&uStack_4c0);
  if (param_1 == 0) {
LAB_1003cbc01:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4d8 = 0x8220202;
      uStack_4d4 = 0x7a0a90;
      uStack_4d0 = 1;
      uStack_4cc = 0x822;
      uStack_4ca = 0xd2b2;
      uStack_4c8 = 0x7a;
      uStack_4c7 = 0;
      uStack_4c6 = 1;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_4d8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4d8 = 0x8220202;
        uStack_4d4 = 0x7ab58c;
        uStack_4d0 = 1;
        uStack_4cc = 0x822;
        uStack_4ca = 0xd710;
        uStack_4c8 = 0x7a;
        uStack_4c7 = 0;
        uStack_4c6 = 1;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_4d8,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1003cbc01;
    }
    if (*(char *)(param_1 + 0x37c) == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4d8 = 0x8220202;
        uStack_4d4 = 0x7a0a90;
        uStack_4d0 = 1;
        uStack_4cc = 0x822;
        uStack_4ca = 0x9a64;
        uStack_4c8 = 0x7c;
        uStack_4c7 = 0;
        uStack_4c6 = 1;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_4d8,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      cVar1 = FUN_1003ca4e0(param_2);
      if (cVar1 != '\0') {
        uVar4 = FUN_100474dd0(param_2,0);
        if ((uVar4 & 0x200004) == 0) {
          uVar3 = *(undefined8 *)(param_2 + 0x58);
          iVar2 = FUN_1002b0559(uVar3,0xc2);
          local_4dc = iVar2;
          if (iVar2 == -0x80) {
LAB_1003cc012:
            lVar5 = 0;
          }
          else {
            if (iVar2 != 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                uStack_4ca = (undefined2)iVar2;
                uStack_4c8 = (undefined1)((uint)iVar2 >> 0x10);
                uStack_4c7 = (undefined1)((uint)iVar2 >> 0x18);
LAB_1003cbf51:
                uStack_4cc = 0x400;
                uStack_4d0 = 1;
                uStack_4d4 = 0x7a0a90;
                local_4d8 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_4d8,0x12
                                   );
              }
              goto LAB_1003cc012;
            }
            iVar2 = FUN_1002b1039(uVar3,local_458);
            local_4dc = iVar2;
            if (iVar2 == -0x80) goto LAB_1003cc012;
            if (iVar2 != 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                uStack_4ca = (undefined2)iVar2;
                uStack_4c8 = (undefined1)((uint)iVar2 >> 0x10);
                uStack_4c7 = (undefined1)((uint)iVar2 >> 0x18);
                goto LAB_1003cbf51;
              }
              goto LAB_1003cc012;
            }
            cVar1 = FUN_1002bd03f(param_2,*(undefined1 *)(param_1 + 0x39e),
                                  *(undefined1 *)(param_1 + 0x39d));
            if (cVar1 == '\0') {
              lVar5 = FUN_1003cc68c(param_1,local_458,0);
              if (lVar5 == 0) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_4d8 = 0x8220202;
                  uStack_4d4 = 0x7a0a90;
                  uStack_4d0 = 1;
                  uStack_4cc = 0x822;
                  uStack_4ca = 799;
                  uStack_4c8 = 0x7c;
                  uStack_4c7 = 0;
                  uStack_4c6 = 1;
                  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_4d8,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                lVar5 = FUN_1003ce0ca(lVar5,param_1 + 0x159c8,&local_4dc);
                if (lVar5 != 0) goto LAB_1003cbfa0;
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_4d8 = 0x8220202;
                  uStack_4d4 = 0x7a0a90;
                  uStack_4d0 = 1;
                  uStack_4cc = 0x822;
                  uStack_4ca = 0xd88e;
                  uStack_4c8 = 0x7b;
                  uStack_4c7 = 0;
                  uStack_4c6 = 1;
                  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_4d8,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
LAB_1003cc008:
              local_4dc = -0x2b;
              goto LAB_1003cc012;
            }
            cVar1 = FUN_10017fbfb(local_458);
            if (cVar1 == '\0') {
              iVar2 = 0;
              goto LAB_1003cbc54;
            }
            lVar5 = FUN_10016aa8e(DAT_1008c4d90,local_458,"iTunesMetadata.plist",0,0);
            if (lVar5 == 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_4d8 = 0x8220202;
                uStack_4d4 = 0x7a0a90;
                uStack_4d0 = 1;
                uStack_4cc = 0x822;
                uStack_4ca = 0xd88e;
                uStack_4c8 = 0x7b;
                uStack_4c7 = 0;
                uStack_4c6 = 1;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_4d8,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_1003cc008;
            }
LAB_1003cbfa0:
            local_4dc = FUN_1003ce1b2(lVar5,param_3);
          }
          FUN_10017060f(lVar5);
          iVar2 = local_4dc;
          goto LAB_1003cbc54;
        }
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4d8 = 0x8220202;
        uStack_4d4 = 0x7a0a90;
        uStack_4d0 = 1;
        uStack_4cc = 0x822;
        uStack_4ca = 0x9eee;
        uStack_4c8 = 0x7c;
        uStack_4c7 = 0;
        uStack_4c6 = 1;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_4d8,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  iVar2 = -0x32;
LAB_1003cbc54:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

