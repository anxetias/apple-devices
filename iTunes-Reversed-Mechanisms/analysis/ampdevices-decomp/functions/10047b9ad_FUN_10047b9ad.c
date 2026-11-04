// name: FUN_10047b9ad
// address: 10047b9ad

int FUN_10047b9ad(long param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined2 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "copyright != nullptr";
LAB_10047bb1b:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    *param_2 = 0;
    if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
      iVar2 = FUN_1001de41f(*(long *)(param_1 + 0x10) + 0x2340,
                            *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x2c));
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x400;
          local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
        }
      }
      goto LAB_10047badc;
    }
    uVar3 = FUN_1001cc310(param_1,param_2,param_2);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackInfoIsValid(trackInfo)";
      goto LAB_10047bb1b;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10047badc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

