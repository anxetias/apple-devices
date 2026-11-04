// name: FUN_1003df1ea
// address: 1003df1ea

undefined8 FUN_1003df1ea(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(int *)(param_1 + 0x28) == 0x53485244) || (*(int *)(param_1 + 0x28) == 0x48545450)) {
    lVar2 = (**(code **)(**(long **)(param_1 + 0x568) + 0x160))();
    if (lVar2 != 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        uVar3 = FUN_100467173(lVar2,param_2);
        return uVar3;
      }
      goto LAB_1003df2d8;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "stream != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return 0xffffffce;
  }
LAB_1003df2d8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

