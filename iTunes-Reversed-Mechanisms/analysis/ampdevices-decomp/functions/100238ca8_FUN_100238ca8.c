// name: FUN_100238ca8
// address: 100238ca8

void FUN_100238ca8(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  iVar2 = FUN_1001e9de0(param_2);
  *(int *)(param_1 + 1) = iVar2;
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x400;
      local_2a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

