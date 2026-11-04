// name: FUN_1005a99fa
// address: 1005a99fa

long FUN_1005a99fa(long *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  uint uVar11;
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
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    lVar10 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (((*(uint *)((long)param_1 + 0x15b4) & *(uint *)(param_1 + 0x2b7) & 2) == 0) ||
       (iVar2 = FUN_100476928(param_2,&local_238), iVar2 != 0)) {
      lVar10 = 0;
    }
    else {
      if ((char)param_1[0x2cb] == '\0') {
        uVar6 = *param_2;
        uVar9 = 3;
      }
      else {
        uVar6 = FUN_1005a98e6(&local_238);
        uVar9 = 5;
      }
      lVar10 = FUN_1005a9ec4(param_1,uVar9,uVar6,&local_238);
    }
    uVar3 = *(uint *)((long)param_1 + 0x15b4);
    uVar11 = *(uint *)(param_1 + 0x2b7);
    if ((uVar3 & uVar11 & 4) != 0) {
      FUN_1005aa188(param_2,&local_238);
      lVar5 = FUN_1005a9ec4(param_1,2,*param_2,&local_238);
      lVar10 = lVar10 + lVar5;
      uVar3 = *(uint *)((long)param_1 + 0x15b4);
      uVar11 = *(uint *)(param_1 + 0x2b7);
    }
    if ((((uVar11 & uVar3 & 0x10) != 0) ||
        (((*(char *)((long)param_1 + 0x15a2) != '\0' && (*(char *)((long)param_1 + 0x15a3) == '\0'))
         && (uVar8 = FUN_100474dd0(param_2,0), (uVar8 & 0x200004) != 0)))) &&
       (((*(byte *)(param_1 + 0x2af) & 1) != 0 &&
        (iVar2 = FUN_1004772c4(param_2,&local_238), iVar2 == 0)))) {
      uVar6 = FUN_1005a98e6(&local_238);
      lVar5 = FUN_1005a9ec4(param_1,5,uVar6,&local_238);
      lVar10 = lVar10 + lVar5;
    }
    if ((*(uint *)((long)param_1 + 0x15b4) & *(uint *)(param_1 + 0x2b7) & 0x10) != 0) {
      if (((*(byte *)(param_1 + 0x2af) & 4) != 0) &&
         (iVar2 = FUN_1004779ac(param_2,&local_238), iVar2 == 0)) {
        uVar6 = FUN_1005a98e6(&local_238);
        lVar5 = FUN_1005a9ec4(param_1,5,uVar6,&local_238);
        lVar10 = lVar10 + lVar5;
      }
      if (((*(byte *)(param_1 + 0x2af) & 2) != 0) &&
         (iVar2 = FUN_100478022(param_2,&local_238), iVar2 == 0)) {
        uVar6 = FUN_1005a98e6(&local_238);
        lVar5 = FUN_1005a9ec4(param_1,5,uVar6,&local_238);
        lVar10 = lVar10 + lVar5;
      }
      if (((*(byte *)(param_1 + 0x2af) & 0x10) != 0) &&
         (iVar2 = FUN_10047a0d2(param_2,&local_238), iVar2 == 0)) {
        uVar6 = FUN_1005a98e6(&local_238);
        lVar5 = FUN_1005a9ec4(param_1,5,uVar6,&local_238);
        lVar10 = lVar10 + lVar5;
      }
      if (((*(byte *)(param_1 + 0x2af) & 0x20) != 0) &&
         (iVar2 = FUN_10047a7b5(param_2,&local_238), iVar2 == 0)) {
        uVar6 = FUN_1005a98e6(&local_238);
        lVar5 = FUN_1005a9ec4(param_1,5,uVar6,&local_238);
        lVar10 = lVar10 + lVar5;
      }
      if (((*(byte *)(param_1 + 0x2af) & 8) != 0) &&
         (lVar5 = FUN_1002af284(param_2[0xb]), lVar5 != 0)) {
        uVar3 = FUN_100176d97(lVar5);
        if (uVar3 != 0) {
          uVar11 = 1;
          do {
            uVar4 = FUN_100176de6(lVar5,uVar11);
            iVar2 = FUN_1001767b3(lVar5,uVar4,4,0x200,&local_238);
            if (iVar2 != -0x80) {
              if (iVar2 == 0) {
                uVar6 = FUN_1005a98e6(&local_238);
                lVar7 = FUN_1005a9ec4(param_1,5,uVar6,&local_238);
                lVar10 = lVar10 + lVar7;
              }
              else {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_258 = 0x8220202;
                  local_254 = "Assertion failure";
                  local_24c = 0x400;
                  local_24a = iVar2;
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_258,
                                      0x12);
                }
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 <= uVar3);
        }
        FUN_100175848(lVar5);
      }
    }
    if ((*(char *)(*param_1 + 0x391) != '\0') &&
       (uVar8 = FUN_1004744bf(param_2,0), (uVar8 & 8) != 0)) {
      FUN_1004772c4(param_2,&local_238);
      if ((short)local_238 == 0) {
        FUN_100476928(param_2,&local_238);
      }
      uVar6 = FUN_1005a98e6(&local_238);
      lVar5 = FUN_1005a9ec4(param_1,4,uVar6,&local_238);
      lVar10 = lVar10 + lVar5;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar10;
}

