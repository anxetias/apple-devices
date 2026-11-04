// name: FUN_100399136
// address: 100399136

undefined4 FUN_100399136(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  undefined2 local_22;
  char *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 < 0x2f) {
    uVar2 = *(undefined4 *)(&DAT_100746a24 + (ulong)param_1 * 4);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220302;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "0";
      local_22 = 0x822;
      local_20 = "Unrecognized PodUpdater error!";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: %{public}s (%{public}s)",&local_38,
                          0x20);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

