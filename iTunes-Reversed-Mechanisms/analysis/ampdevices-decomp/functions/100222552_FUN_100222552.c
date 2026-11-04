// name: FUN_100222552
// address: 100222552

undefined4 FUN_100222552(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ushort local_238 [2];
  ushort local_234;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e115f(param_1,local_238);
  if (local_238[0] < 3) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "uString[0] > 2";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    local_238[0] = local_238[0] - 2;
    local_234 = local_238[0];
    uVar2 = FUN_1001e1091();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

