// name: FUN_1002a3b41
// address: 1002a3b41

void FUN_1002a3b41(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "element != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  else {
    puVar4 = param_1;
    puVar1 = (undefined8 *)0x0;
    do {
      puVar5 = puVar1;
      puVar4 = (undefined8 *)*puVar4;
      if (puVar4 == (undefined8 *)0x0) goto LAB_1002a3bbe;
      puVar1 = puVar4;
    } while (puVar4 != param_2);
    if (puVar5 != (undefined8 *)0x0) {
      param_1 = puVar5;
    }
    *param_1 = *param_2;
    *param_2 = 0;
  }
LAB_1002a3bbe:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

