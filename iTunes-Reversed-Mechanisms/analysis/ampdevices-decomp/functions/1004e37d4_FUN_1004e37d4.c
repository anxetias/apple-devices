// name: FUN_1004e37d4
// address: 1004e37d4

void FUN_1004e37d4(undefined8 param_1,int param_2)

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
  lVar2 = FUN_1004de449();
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(int *)(lVar2 + 0x67b4) == param_2) {
    if (param_2 == 0x696d7074) {
      *(undefined1 *)(lVar2 + 0x6acd) = 1;
    }
    else if (((param_2 == 0x626b7570) && (lVar2 = *(long *)(lVar2 + 0x6750), lVar2 != 0)) &&
            (*(code **)(lVar2 + 0x8a0) != (code *)0x0)) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
                    /* WARNING: Could not recover jumptable at 0x0001004e3848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x8a0))(lVar2,*(undefined8 *)(lVar2 + 0x8a8));
        return;
      }
      goto LAB_1004e38d7;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
LAB_1004e38d7:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

