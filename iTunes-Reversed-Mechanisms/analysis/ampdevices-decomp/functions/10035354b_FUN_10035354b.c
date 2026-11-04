// name: FUN_10035354b
// address: 10035354b

void FUN_10035354b(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100351ae9(param_1 + 0x20,1,0,1);
  piVar4 = *(int **)(param_2 + 0x28);
  if (piVar4 == (int *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "currentField != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    iVar1 = *piVar4;
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      FUN_100351ae9(param_1 + 0x20,iVar1,0,0);
      iVar1 = *piVar4;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

