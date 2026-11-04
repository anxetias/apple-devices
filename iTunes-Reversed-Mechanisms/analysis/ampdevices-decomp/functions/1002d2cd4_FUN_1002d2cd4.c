// name: FUN_1002d2cd4
// address: 1002d2cd4

ulong FUN_1002d2cd4(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "ITIPodRefIsValid(iPod)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    bVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    bVar4 = 1;
    if ((((*(char *)(param_1 + 0x9db) != '\0') && (*(char *)(param_1 + 0x3c) == '\0')) &&
        (*(char *)(param_1 + 0x9dd) == '\0')) && (*(char *)(param_1 + 0x9de) == '\0')) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        uVar2 = FUN_100635cec(*(undefined4 *)(param_1 + 0x6d6c));
        return uVar2;
      }
      goto LAB_1002d2dd1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return (ulong)bVar4;
  }
LAB_1002d2dd1:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

