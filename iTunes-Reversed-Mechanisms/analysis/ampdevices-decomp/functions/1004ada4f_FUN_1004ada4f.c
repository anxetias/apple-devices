// name: FUN_1004ada4f
// address: 1004ada4f

void FUN_1004ada4f(void *param_1)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)((long)param_1 + 4) == 0x646f776e) {
    if (*(long *)((long)param_1 + 0x608) != 0) {
      FUN_1001eed65((undefined8 *)((long)param_1 + 0x608));
      *(undefined8 *)((long)param_1 + 0x608) = 0;
    }
    FUN_1001c72e9((long)param_1 + 0x160);
    if (*(long *)((long)param_1 + 0x150) != 0) {
      piVar1 = (int *)(*(long *)((long)param_1 + 0x150) + 4);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1004b0cc1();
      }
    }
    if (*(long *)((long)param_1 + 0x158) != 0) {
      piVar1 = (int *)(*(long *)((long)param_1 + 0x158) + 4);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1004b0cc1();
      }
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      operator_delete(param_1);
      return;
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inDM->magic == \'down\'";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

