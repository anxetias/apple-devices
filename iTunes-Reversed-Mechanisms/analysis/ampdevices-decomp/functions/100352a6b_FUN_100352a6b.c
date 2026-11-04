// name: FUN_100352a6b
// address: 100352a6b

void FUN_100352a6b(int *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "inHandler != __null";
LAB_100352b67:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*param_1 == 0x63737468) {
      puVar1 = *(undefined8 **)(param_1 + 2);
      while (puVar1 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*puVar1;
        FUN_100352999();
      }
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_100352999(*(undefined8 *)(param_1 + 4));
      param_1[4] = 0;
      param_1[5] = 0;
      *param_1 = 0x234;
      goto LAB_100352b2a;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "inHandler->magic == \'csth\'";
      goto LAB_100352b67;
    }
  }
  FUN_1001782e9(0,0);
LAB_100352b2a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

