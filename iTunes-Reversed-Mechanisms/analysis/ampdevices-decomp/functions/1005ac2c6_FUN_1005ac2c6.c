// name: FUN_1005ac2c6
// address: 1005ac2c6

undefined8 FUN_1005ac2c6(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == (undefined8 *)0x0) || (param_2[2] == 0)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    cVar1 = FUN_10030e2f7();
    uVar5 = 0;
    if ((cVar1 == '\0') && ((*(uint *)(param_1 + 0x15b4) & *(uint *)(param_1 + 0x15b8) & 0x16) != 0)
       ) {
      FUN_1005a4672(param_1);
      if (((*(uint *)(param_1 + 0x15b4) & *(uint *)(param_1 + 0x15b8) & 2) != 0) &&
         (iVar2 = FUN_100476928(param_2,&local_238), iVar2 == 0)) {
        if (*(char *)(param_1 + 0x1658) == '\0') {
          uVar5 = *param_2;
          uVar8 = 3;
        }
        else {
          uVar5 = FUN_1005a98e6(&local_238);
          uVar8 = 5;
        }
        FUN_1005ac748(param_1,uVar8,uVar5,&local_238);
      }
      uVar3 = *(uint *)(param_1 + 0x15b4);
      uVar9 = *(uint *)(param_1 + 0x15b8);
      if ((uVar3 & uVar9 & 4) != 0) {
        FUN_1005aa188(param_2,&local_238);
        FUN_1005ac748(param_1,2,*param_2,&local_238);
        uVar3 = *(uint *)(param_1 + 0x15b4);
        uVar9 = *(uint *)(param_1 + 0x15b8);
      }
      if ((((uVar9 & uVar3 & 0x10) != 0) ||
          (((*(char *)(param_1 + 0x15a2) != '\0' && (*(char *)(param_1 + 0x15a3) == '\0')) &&
           (uVar7 = FUN_100474dd0(param_2,0), (uVar7 & 0x200004) != 0)))) &&
         (((*(byte *)(param_1 + 0x1578) & 1) != 0 &&
          (iVar2 = FUN_1004772c4(param_2,&local_238), iVar2 == 0)))) {
        uVar5 = FUN_1005a98e6(&local_238);
        FUN_1005ac748(param_1,5,uVar5,&local_238);
      }
      if ((*(uint *)(param_1 + 0x15b4) & *(uint *)(param_1 + 0x15b8) & 0x10) != 0) {
        if (((*(byte *)(param_1 + 0x1578) & 4) != 0) &&
           (iVar2 = FUN_1004779ac(param_2,&local_238), iVar2 == 0)) {
          uVar5 = FUN_1005a98e6(&local_238);
          FUN_1005ac748(param_1,5,uVar5,&local_238);
        }
        if (((*(byte *)(param_1 + 0x1578) & 2) != 0) &&
           (iVar2 = FUN_100478022(param_2,&local_238), iVar2 == 0)) {
          uVar5 = FUN_1005a98e6(&local_238);
          FUN_1005ac748(param_1,5,uVar5,&local_238);
        }
        if (((*(byte *)(param_1 + 0x1578) & 0x10) != 0) &&
           (iVar2 = FUN_10047a0d2(param_2,&local_238), iVar2 == 0)) {
          uVar5 = FUN_1005a98e6(&local_238);
          FUN_1005ac748(param_1,5,uVar5,&local_238);
        }
        if (((*(byte *)(param_1 + 0x1578) & 0x20) != 0) &&
           (iVar2 = FUN_10047a7b5(param_2,&local_238), iVar2 == 0)) {
          uVar5 = FUN_1005a98e6(&local_238);
          FUN_1005ac748(param_1,5,uVar5,&local_238);
        }
        if (((*(byte *)(param_1 + 0x1578) & 8) != 0) &&
           (lVar6 = FUN_1002af284(param_2[0xb]), lVar6 != 0)) {
          uVar3 = FUN_100176d97(lVar6);
          if (uVar3 != 0) {
            uVar9 = 1;
            do {
              uVar4 = FUN_100176de6(lVar6,uVar9);
              iVar2 = FUN_1001767b3(lVar6,uVar4,4,0x200,&local_238);
              if (iVar2 != -0x80) {
                if (iVar2 == 0) {
                  uVar5 = FUN_1005a98e6(&local_238);
                  FUN_1005ac748(param_1,5,uVar5,&local_238);
                }
                else {
                  uVar5 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar1 != '\0') {
                    local_258 = 0x8220202;
                    local_254 = "Assertion failure";
                    local_24c = 0x400;
                    local_24a = iVar2;
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_258,
                                        0x12);
                  }
                }
              }
              uVar9 = uVar9 + 1;
            } while (uVar9 <= uVar3);
          }
          FUN_100175848(lVar6);
        }
      }
      uVar5 = 0;
      FUN_1005a4ae0(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

