// name: FUN_100414057
// address: 100414057

undefined8 FUN_100414057(long *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    uVar4 = 0xffffffce;
    if (cVar1 != '\0') {
      local_2a = "limiter != nullptr";
LAB_100414147:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    FUN_1001c62d9(param_1,0x40);
    *(undefined4 *)(param_1 + 1) = 0x4000;
    lVar2 = FUN_1001c64dc(0x10000);
    *param_1 = lVar2;
    uVar4 = 0;
    if (lVar2 != 0) goto LAB_100414108;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    uVar4 = 0xffffff94;
    if (cVar1 != '\0') {
      local_2a = "limiter->delayBuffer != nullptr";
      goto LAB_100414147;
    }
  }
  FUN_1001782e9(0,0);
LAB_100414108:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

