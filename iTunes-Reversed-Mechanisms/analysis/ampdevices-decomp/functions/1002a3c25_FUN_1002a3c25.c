// name: FUN_1002a3c25
// address: 1002a3c25

void FUN_1002a3c25(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "element != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (*param_2 != 0) {
      uVar3 = FUN_1001cc310();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "element->*PNEXT == nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
      FUN_1001782e9(0,0);
    }
    if (puVar1 == (undefined8 *)0x0) {
      *param_2 = 0;
      *param_1 = param_2;
    }
    else {
      do {
        puVar4 = puVar1;
        puVar1 = (undefined8 *)*puVar4;
      } while (puVar1 != (undefined8 *)0x0);
      *param_2 = 0;
      *puVar4 = param_2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

