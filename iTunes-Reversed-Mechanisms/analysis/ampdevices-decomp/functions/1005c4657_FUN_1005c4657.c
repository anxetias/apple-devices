// name: FUN_1005c4657
// address: 1005c4657

undefined8 FUN_1005c4657(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "cloudBackupInfo != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    FUN_1001c62d9(param_2,0x10);
    cVar1 = FUN_1001ee068();
    if (cVar1 != '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        uVar3 = FUN_1005ba4e2(param_1,7,0,param_2);
        return uVar3;
      }
      goto LAB_1005c4768;
    }
    uVar2 = FUN_1005c4431(param_1);
    *param_2 = uVar2;
    uVar3 = FUN_1005c4527(param_1);
    *(undefined8 *)(param_2 + 8) = uVar3;
    uVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
LAB_1005c4768:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

