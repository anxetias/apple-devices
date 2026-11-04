// name: FUN_10047c4cc
// address: 10047c4cc

undefined8 FUN_10047c4cc(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "description != nullptr";
LAB_10047c5d4:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    *param_2 = 0;
    if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        uVar2 = FUN_1001de499(*(long *)(param_1 + 0x10) + 0x2020,
                              *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x24));
        return uVar2;
      }
      goto LAB_10047c5fb;
    }
    uVar2 = FUN_1001cc310(param_1,param_2,param_2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackInfoIsValid(trackInfo)";
      goto LAB_10047c5d4;
    }
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return 0xffffffce;
  }
LAB_10047c5fb:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

