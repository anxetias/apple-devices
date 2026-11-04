// name: FUN_1003b8359
// address: 1003b8359

void FUN_1003b8359(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 != 0x64622020) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure (expected to be true)";
      local_2c = 0x822;
      local_2a = "databaseData->magic == \'db  \'";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = 
        "((databaseData->magic == \'db  \') ? true : HandleAssert(AssertCategory::None, \"Assertion failure (expected to be true)\", \"databaseData->magic == \'db  \'\", \"/AppleInternal/Library/BuildRoots/4~CakmugD0CR2Rb-cGHdD_ypyZft5Sukl8ug0NgCk/Library/Caches/com.apple.xbs/Sources/Devices/iTunes/Application/Plugins.cpp\", 699, true))"
        ;
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1003b8465;
    }
  }
  if ((char)param_1[4] == '\x01') {
    if ((*(long *)(param_1 + 0x20) != 0) && (*(char *)((long)param_1 + 0x12) == '\x01')) {
      FUN_1003152ce();
    }
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    FUN_1003b8036(param_1,0x636c7220,0);
    *(int *)(*(long *)(param_1 + 6) + 0x6c) = *(int *)(*(long *)(param_1 + 6) + 0x6c) + -1;
  }
  if (DAT_1008c75a8 != (int *)0x0) {
    piVar4 = DAT_1008c75a8;
    if (DAT_1008c75a8 == param_1) {
      piVar3 = (int *)0x0;
    }
    else {
      do {
        piVar3 = piVar4;
        piVar4 = *(int **)(piVar3 + 2);
        if (piVar4 == (int *)0x0) goto LAB_1003b8457;
      } while (piVar4 != param_1);
    }
    piVar4 = (int *)&DAT_1008c75a8;
    if (piVar3 != (int *)0x0) {
      piVar4 = piVar3 + 2;
    }
    *(undefined8 *)piVar4 = *(undefined8 *)(param_1 + 2);
    param_1[2] = 0;
    param_1[3] = 0;
  }
LAB_1003b8457:
  *param_1 = 0;
  FUN_1001c64c1(param_1);
LAB_1003b8465:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

