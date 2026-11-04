// name: FUN_1002b16f5
// address: 1002b16f5

byte FUN_1002b16f5(long param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    bVar1 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    bVar1 = FUN_1002b1255(param_1,0);
    bVar1 = bVar1 >> 3 & 1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

