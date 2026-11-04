// name: FUN_1003b875b
// address: 1003b875b

void FUN_1003b875b(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = DAT_1008c75a8;
  while (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + 8);
    plVar1 = (long *)(lVar3 + 0x18);
    lVar3 = lVar2;
    if (*plVar1 == param_1) {
      FUN_1003b8359();
    }
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "plugin->numRegisteredDatabases == 0";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

