// name: FUN_1001b24c7
// address: 1001b24c7

void FUN_1001b24c7(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  puVar1 = PTR__objc_release_10082c7b0;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    do {
      if (*plVar4 != param_1) {
        uVar3 = FUN_1001cc310();
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "fiber->mQueue == queue";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        (*(code *)puVar1)(uVar3);
        FUN_1001782e9(0,0);
      }
      FUN_1001b0756(param_1,plVar4);
      FUN_1001b01f4(plVar4);
      operator_delete(plVar4);
      plVar4 = *(long **)(param_1 + 8);
    } while (plVar4 != (long *)0x0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

