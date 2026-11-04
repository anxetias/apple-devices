// name: FUN_10027a04e
// address: 10027a04e

void FUN_10027a04e(void)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_1001ce4d7(&DAT_1008b4678);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x400;
      local_2a = iVar3;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
  }
  iVar3 = FUN_1001ce4d7(&DAT_1008b4698);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x400;
      local_2a = iVar3;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
  }
  iVar3 = FUN_1001ce4d7(&DAT_1008b46b8);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x400;
      local_2a = iVar3;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
  }
  iVar3 = FUN_1001ce4d7(&DAT_1008b46d8);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x400;
      local_2a = iVar3;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
  }
  iVar3 = FUN_1001ce4d7(&DAT_1008b46f8);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x400;
      local_2a = iVar3;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
  }
  iVar3 = FUN_1001ce4d7(&DAT_1008b4718);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x400;
      local_2a = iVar3;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
  }
  iVar3 = FUN_1001ce4d7(&DAT_1008b4738);
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x400;
      local_2a = iVar3;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
  }
  pvVar1 = DAT_1008b5ab0;
  if (DAT_1008b5ab0 != (void *)0x0) {
    FUN_1001a85d4((long)DAT_1008b5ab0 + 0xf0);
    FUN_1001b7a50((long)pvVar1 + 0xe0);
    FUN_1001a85d4((long)pvVar1 + 0xd0);
    FUN_1001b7a50((long)pvVar1 + 0x98);
    FUN_1001b7a50((long)pvVar1 + 0x70);
    FUN_1001a85d4((long)pvVar1 + 0x50);
    FUN_1001b7a50((long)pvVar1 + 0x40);
    FUN_1001b7a50((long)pvVar1 + 0x30);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_1008b5ab8;
  DAT_1008b5ab0 = (void *)0x0;
  if (DAT_1008b5ab8 != (void *)0x0) {
    FUN_1001a85d4((long)DAT_1008b5ab8 + 0xf0);
    FUN_1001b7a50((long)pvVar1 + 0xe0);
    FUN_1001a85d4((long)pvVar1 + 0xd0);
    FUN_1001b7a50((long)pvVar1 + 0x98);
    FUN_1001b7a50((long)pvVar1 + 0x70);
    FUN_1001a85d4((long)pvVar1 + 0x50);
    FUN_1001b7a50((long)pvVar1 + 0x40);
    FUN_1001b7a50((long)pvVar1 + 0x30);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_1008b5ac0;
  DAT_1008b5ab8 = (void *)0x0;
  if (DAT_1008b5ac0 != (void *)0x0) {
    FUN_1001a85d4((long)DAT_1008b5ac0 + 0xf0);
    FUN_1001b7a50((long)pvVar1 + 0xe0);
    FUN_1001a85d4((long)pvVar1 + 0xd0);
    FUN_1001b7a50((long)pvVar1 + 0x98);
    FUN_1001b7a50((long)pvVar1 + 0x70);
    FUN_1001a85d4((long)pvVar1 + 0x50);
    FUN_1001b7a50((long)pvVar1 + 0x40);
    FUN_1001b7a50((long)pvVar1 + 0x30);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_1008b5ac8;
  DAT_1008b5ac0 = (void *)0x0;
  if (DAT_1008b5ac8 != (void *)0x0) {
    FUN_1001a85d4((long)DAT_1008b5ac8 + 0xf0);
    FUN_1001b7a50((long)pvVar1 + 0xe0);
    FUN_1001a85d4((long)pvVar1 + 0xd0);
    FUN_1001b7a50((long)pvVar1 + 0x98);
    FUN_1001b7a50((long)pvVar1 + 0x70);
    FUN_1001a85d4((long)pvVar1 + 0x50);
    FUN_1001b7a50((long)pvVar1 + 0x40);
    FUN_1001b7a50((long)pvVar1 + 0x30);
    operator_delete(pvVar1);
  }
  pvVar1 = DAT_1008b5ad0;
  DAT_1008b5ac8 = (void *)0x0;
  if (DAT_1008b5ad0 != (void *)0x0) {
    FUN_1001a85d4((long)DAT_1008b5ad0 + 0xf0);
    FUN_1001b7a50((long)pvVar1 + 0xe0);
    FUN_1001a85d4((long)pvVar1 + 0xd0);
    FUN_1001b7a50((long)pvVar1 + 0x98);
    FUN_1001b7a50((long)pvVar1 + 0x70);
    FUN_1001a85d4((long)pvVar1 + 0x50);
    FUN_1001b7a50((long)pvVar1 + 0x40);
    FUN_1001b7a50((long)pvVar1 + 0x30);
    operator_delete(pvVar1);
  }
  DAT_1008b5ad0 = (void *)0x0;
  FUN_1001a7bd2(&DAT_1008b5b08,0);
  FUN_1001a7bd2(&DAT_1008b5b18,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

