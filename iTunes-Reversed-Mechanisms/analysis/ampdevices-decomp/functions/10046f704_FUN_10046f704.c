// name: FUN_10046f704
// address: 10046f704

undefined8 FUN_10046f704(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mDataHandler != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      return 0;
    }
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
    uVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      uVar3 = FUN_1003d0a4e(param_2,uVar2,uVar3,1);
      return uVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

