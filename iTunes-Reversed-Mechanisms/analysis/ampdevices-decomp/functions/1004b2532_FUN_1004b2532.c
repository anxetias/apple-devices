// name: FUN_1004b2532
// address: 1004b2532

void FUN_1004b2532(int *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  piVar1 = param_1 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    if (*param_1 == 0x64777469) {
      *param_1 = 0;
      plVar2 = *(long **)(param_1 + 0x10);
      if (plVar2 == (long *)(param_1 + 8)) {
        lVar4 = 0x20;
LAB_1004b25b9:
        (**(code **)(*plVar2 + lVar4))();
      }
      else {
        lVar4 = 0x28;
        if (plVar2 != (long *)0x0) goto LAB_1004b25b9;
      }
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        operator_delete(param_1);
        return;
      }
      goto LAB_1004b262b;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inWorkTaskInfo->magic == \'dwti\'";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
LAB_1004b262b:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

