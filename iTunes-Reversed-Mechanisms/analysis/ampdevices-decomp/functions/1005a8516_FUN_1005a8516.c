// name: FUN_1005a8516
// address: 1005a8516

undefined8 FUN_1005a8516(long param_1,undefined8 *param_2,undefined1 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 local_868;
  char *local_864;
  undefined2 local_85c;
  int local_85a;
  undefined1 local_848 [512];
  undefined1 local_648;
  undefined1 local_638 [512];
  undefined1 local_438 [512];
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
      FUN_100476928(param_2,&local_238);
      FUN_1004779ac(param_2,local_638);
      FUN_1004772c4(param_2,local_438);
      local_648 = 0;
      uVar5 = FUN_1005ab32a(*(undefined1 *)(param_1 + 0x15a2),&local_238,local_638,local_438);
      if ((*(uint *)(param_1 + 0x15b4) & *(uint *)(param_1 + 0x15b8) & 2) != 0) {
        FUN_1001e1c39(&local_238,local_848);
        if (*(char *)(param_1 + 0x15a3) != '\0') {
          FUN_1005ab3d6(local_848,local_638);
        }
        if (*(char *)(param_1 + 0x1658) == '\0') {
          uVar6 = *param_2;
          uVar9 = 3;
        }
        else {
          uVar6 = FUN_1005a98e6(local_848);
          uVar9 = 5;
        }
        FUN_1005ab648(param_1,uVar9,uVar6,local_848,4,param_3,uVar5);
      }
      uVar3 = *(uint *)(param_1 + 0x15b4);
      uVar10 = *(uint *)(param_1 + 0x15b8);
      if ((uVar3 & uVar10 & 4) != 0) {
        FUN_1001e1c39(&local_238,local_848);
        FUN_1005ab3d6(local_848,local_638);
        FUN_1005ab648(param_1,2,*param_2,local_848,4,param_3,uVar5);
        uVar3 = *(uint *)(param_1 + 0x15b4);
        uVar10 = *(uint *)(param_1 + 0x15b8);
      }
      if ((((uVar10 & uVar3 & 0x10) != 0) ||
          (((*(char *)(param_1 + 0x15a2) != '\0' && (*(char *)(param_1 + 0x15a3) == '\0')) &&
           (uVar8 = FUN_100474dd0(param_2,0), (uVar8 & 0x200004) != 0)))) &&
         ((*(byte *)(param_1 + 0x1578) & 1) != 0)) {
        uVar6 = FUN_1005a98e6(local_438);
        FUN_1005ab648(param_1,5,uVar6,local_438,2,param_3,uVar5);
      }
      if ((*(uint *)(param_1 + 0x15b4) & *(uint *)(param_1 + 0x15b8) & 0x10) != 0) {
        uVar3 = *(uint *)(param_1 + 0x1578);
        if ((uVar3 & 4) != 0) {
          uVar6 = FUN_1005a98e6(local_638);
          FUN_1005ab648(param_1,5,uVar6,local_638,1,param_3,uVar5);
          uVar3 = *(uint *)(param_1 + 0x1578);
        }
        if (((uVar3 & 2) != 0) && (iVar2 = FUN_100478022(param_2,local_848), iVar2 == 0)) {
          uVar6 = FUN_1005a98e6(local_848);
          FUN_1005ab648(param_1,5,uVar6,local_848,1,param_3,uVar5);
        }
        if (((*(byte *)(param_1 + 0x1578) & 0x10) != 0) &&
           (iVar2 = FUN_10047a0d2(param_2,local_848), iVar2 == 0)) {
          uVar6 = FUN_1005a98e6(local_848);
          FUN_1005ab648(param_1,5,uVar6,local_848,8,param_3,uVar5);
        }
        if (((*(byte *)(param_1 + 0x1578) & 0x20) != 0) &&
           (iVar2 = FUN_10047a7b5(param_2,local_848), iVar2 == 0)) {
          uVar6 = FUN_1005a98e6(local_848);
          FUN_1005ab648(param_1,5,uVar6,local_848,0x10,param_3,uVar5);
        }
        if (((*(byte *)(param_1 + 0x1578) & 8) != 0) &&
           (lVar7 = FUN_1002af284(param_2[0xb]), lVar7 != 0)) {
          uVar3 = FUN_100176d97(lVar7);
          if (uVar3 != 0) {
            uVar10 = 1;
            do {
              uVar4 = FUN_100176de6(lVar7,uVar10);
              iVar2 = FUN_1001767b3(lVar7,uVar4,4,0x200,local_848);
              if (iVar2 != -0x80) {
                if (iVar2 == 0) {
                  uVar6 = FUN_1005a98e6(local_848);
                  FUN_1005ab648(param_1,5,uVar6,local_848,4,param_3,uVar5);
                }
                else {
                  uVar6 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar1 != '\0') {
                    local_868 = 0x8220202;
                    local_864 = "Assertion failure";
                    local_85c = 0x400;
                    local_85a = iVar2;
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_868,
                                        0x12);
                  }
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 <= uVar3);
          }
          FUN_100175848(lVar7);
        }
      }
      FUN_1005a4ae0(param_1);
      FUN_10017060f(uVar5);
      uVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

