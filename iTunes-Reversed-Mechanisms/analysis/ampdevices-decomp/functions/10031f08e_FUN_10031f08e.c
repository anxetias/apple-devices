// name: FUN_10031f08e
// address: 10031f08e

int FUN_10031f08e(long param_1,ulong param_2,long param_3,undefined4 *param_4,char param_5,
                 undefined4 param_6)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *local_ce8;
  undefined4 local_cd8;
  char *local_cd4;
  undefined2 local_ccc;
  int local_cca;
  short local_cb8 [32];
  undefined1 local_c78 [512];
  undefined4 local_a78;
  char *local_a74;
  undefined2 local_a6c;
  int local_a6a;
  short local_658 [256];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
    goto LAB_10031f14a;
  }
  cVar3 = FUN_1005377e9();
  iVar5 = 0;
  if (cVar3 != '\0') goto LAB_10031f14a;
  uVar8 = *(uint *)(param_1 + 0x48) >> 8 & 3;
  if (uVar8 == 3) goto LAB_10031f14a;
  if (param_5 == '\0') {
    if (uVar8 == 2) goto LAB_10031f14a;
  }
  else if (uVar8 != 1) {
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffffcff;
  }
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar1 + 0x10);
  }
  if (((param_5 == '\0') && (cVar3 = FUN_1002b732e(param_1), cVar3 == '\0')) ||
     (*(int *)(param_1 + 0x3c) != 0x46494c45)) {
    iVar5 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x48);
    if (((param_2 & 0x40c0004d) == 0 && (uVar8 >> 9 & 1) != 0) &&
       ((*(byte *)(param_3 + 4) & 0x41) == 0)) {
      iVar5 = 0;
      iVar6 = FUN_1001cd9a6("file-using-sort-fields",0,0);
      if ((iVar6 == 0) || (iVar5 = 0, (*(ushort *)(param_3 + 5) & 0x5e0) == 0)) goto LAB_10031f663;
      uVar8 = *(uint *)(param_1 + 0x48);
    }
    *(uint *)(param_1 + 0x48) = uVar8 & 0xfffffcff | 0x200;
    iVar5 = FUN_1002b0559(param_1,param_6);
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffffcff | uVar8 & 0x300;
    if (iVar5 != -0x80) {
      if (iVar5 == 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x80);
        local_ce8 = param_4;
        if ((uVar8 & 0x300) == 0) {
          if (param_4 == (undefined4 *)0x0) {
            param_4 = &local_458;
            iVar5 = FUN_10031fe30(param_1,param_4,0);
            if (iVar5 != -0x80) {
              if (iVar5 == 0) goto LAB_10031f2a1;
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                puVar9 = &local_a78;
                local_a78 = 0x8220202;
                local_a74 = "Assertion failure";
                local_a6c = 0x400;
                local_a6a = iVar5;
                goto LAB_10031f350;
              }
            }
            goto LAB_10031f663;
          }
LAB_10031f2a1:
          cVar3 = FUN_100183bb2(param_4,uVar2);
          local_ce8 = param_4;
          if (cVar3 != '\0') goto LAB_10031f2b4;
        }
        else {
LAB_10031f2b4:
          local_658[0] = 0;
          FUN_100476928(lVar1);
          iVar5 = FUN_100317a87(uVar7,param_1,&local_a78);
          if (iVar5 == 0) {
            iVar5 = FUN_10017d489(uVar2,local_c78);
            if (iVar5 != -0x80) {
              if (iVar5 == 0) {
                if ((*(byte *)(lVar1 + 0xc2) & 0x10) == 0) {
                  if (local_658[0] == 0) {
                    FUN_1001e40a7(local_c78,local_658,local_cb8);
                  }
                  else {
                    FUN_1001e222d(local_c78,local_cb8);
                  }
                  if ((local_cb8[0] == 0) && (iVar5 = FUN_1002b1325(param_1), iVar5 != 0)) {
                    FUN_1001e22fc(iVar5,local_cb8);
                  }
                  uVar8 = FUN_1004744bf(lVar1,0);
                  if ((uVar8 >> 0x14 & 1) == 0) {
                    FUN_10030c4f9(param_1,&local_cd8,0x20);
                    FUN_1005363fe(local_658,*(undefined2 *)(lVar1 + 0x13a),
                                  *(undefined2 *)(lVar1 + 0x13c),*(undefined2 *)(lVar1 + 0x136),
                                  *(undefined2 *)(*(long *)(param_1 + 0x18) + 2),&local_cd8,
                                  local_c78);
                  }
                  else {
                    cVar3 = FUN_10032eed2(local_c78);
                    if (cVar3 == '\0') {
                      iVar5 = FUN_10032ec51(param_1,local_c78);
                      if (iVar5 != -0x80) {
                        if (iVar5 == 0) goto LAB_10031f5e3;
                        uVar7 = FUN_1001cc310();
                        cVar3 = _os_log_type_enabled(uVar7,0x10);
                        if (cVar3 != '\0') {
                          puVar9 = &local_cd8;
                          local_cd8 = 0x8220202;
                          local_cd4 = "Assertion failure";
                          local_ccc = 0x400;
                          local_cca = iVar5;
                          goto LAB_10031f350;
                        }
                      }
                      goto LAB_10031f663;
                    }
                    FUN_1001e3e43(local_c78,0);
                  }
                }
                else {
                  FUN_1001e40a7(local_c78,local_c78,local_cb8);
                }
LAB_10031f5e3:
                uVar4 = FUN_1002b458b(param_1);
                iVar5 = FUN_100535910(uVar7,uVar4,local_ce8,uVar2,&local_a78,local_c78,local_cb8,
                                      uVar2);
                if (iVar5 != -0x80) {
                  if (iVar5 == 0) {
                    FUN_1002fc027(param_1);
                    goto LAB_10031f2f1;
                  }
                  uVar7 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar3 != '\0') {
                    puVar9 = &local_cd8;
                    local_cd8 = 0x8220202;
                    local_cd4 = "Assertion failure";
                    local_ccc = 0x400;
                    local_cca = iVar5;
                    goto LAB_10031f350;
                  }
                }
              }
              else {
                uVar7 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar7,0x10);
                if (cVar3 != '\0') {
                  puVar9 = &local_cd8;
                  local_cd8 = 0x8220202;
                  local_cd4 = "Assertion failure";
                  local_ccc = 0x400;
                  local_cca = iVar5;
                  goto LAB_10031f350;
                }
              }
            }
            goto LAB_10031f663;
          }
        }
LAB_10031f2f1:
        iVar5 = 0;
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          puVar9 = &local_458;
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x400;
          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar5);
LAB_10031f350:
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",puVar9,0x12);
        }
      }
    }
  }
LAB_10031f663:
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xfc;
LAB_10031f14a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

