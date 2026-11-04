// name: FUN_1005f0e29
// address: 1005f0e29

/* WARNING: Type propagation algorithm not settling */

int FUN_1005f0e29(undefined4 *param_1,undefined1 param_2,undefined1 *param_3,uint *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_ac [2];
  char *local_a4;
  undefined2 local_9c;
  char *local_9a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_ac[1] = 0x8220202;
      local_a4 = "Assertion failure";
      local_9c = 0x822;
      local_9a = "outEntitlementLevelIsSufficient != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",local_ac + 1,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_3 = 1;
    if (param_4 != (uint *)0x0) {
      *param_4 = 0xffffffff;
      FUN_100249cb6(local_ac + 1,param_1[0xba],param_1[0xbd],param_1[0xbe],param_1[0xbf],*param_1,
                    param_1[0x111]);
      iVar2 = FUN_1005f2b70(param_2,local_ac + 1,local_ac);
      FUN_100249ea6(local_ac + 1);
      if ((iVar2 == 0x664) || (iVar2 == 0x5c6)) {
        iVar2 = FUN_1005f09c2(param_1);
        if (iVar2 == -0x80) goto LAB_1005f1081;
        if (iVar2 == 0) {
          FUN_100249cb6(local_ac + 1,param_1[0xba],param_1[0xbd],param_1[0xbe],param_1[0xbf],
                        *param_1,param_1[0x111]);
          iVar2 = FUN_1005f2b70(param_2,local_ac + 1,local_ac);
          FUN_100249ea6(local_ac + 1);
          if (iVar2 == 0) {
            iVar2 = 0;
            goto LAB_1005f106c;
          }
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') goto LAB_1005f1081;
          local_9a = (char *)CONCAT44(local_9a._4_4_,iVar2);
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 == '\0') goto LAB_1005f1081;
          local_9a = (char *)CONCAT44(local_9a._4_4_,iVar2);
        }
        local_9c = 0x400;
        local_a4 = "Assertion failure";
        local_ac[1] = 0x8220202;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",local_ac + 1,0x12);
      }
      else {
LAB_1005f106c:
        *param_4 = local_ac[0];
        *param_3 = (uint)param_1[0xbf] <= local_ac[0];
      }
      goto LAB_1005f1081;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_ac[1] = 0x8220202;
      local_a4 = "Assertion failure";
      local_9c = 0x822;
      local_9a = "outEntitledSecurityEpoch != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",local_ac + 1,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = -0x32;
LAB_1005f1081:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

