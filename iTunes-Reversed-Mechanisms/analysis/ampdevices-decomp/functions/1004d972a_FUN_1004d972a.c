// name: FUN_1004d972a
// address: 1004d972a

void FUN_1004d972a(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001ee056();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "JRIsCurrentThreadCooperative()";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,1);
    goto LAB_1004d984a;
  }
  LOCK();
  bVar5 = *(char *)(param_1 + 0x79) == '\0';
  if (bVar5) {
    *(char *)(param_1 + 0x79) = '\x01';
  }
  UNLOCK();
  if (bVar5) {
LAB_1004d9786:
    if (DAT_1008c7660 != -1) {
      _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
    }
    uVar2 = DAT_1008c7658;
    cVar1 = _os_log_type_enabled(DAT_1008c7658,1);
    if (cVar1 == '\0') goto LAB_1004d984a;
    pcVar3 = "ch> Starting processing changes.";
    uVar4 = 1;
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure (expected to be true)";
      local_2c = 0x822;
      local_2a = "mProcessingChanges.compare_exchange_strong(currentValue, true)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 != '\0') goto LAB_1004d9786;
    if (DAT_1008c7660 != -1) {
      _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
    }
    uVar2 = DAT_1008c7658;
    cVar1 = _os_log_type_enabled(DAT_1008c7658,0x10);
    if (cVar1 == '\0') goto LAB_1004d984a;
    pcVar3 = "ch> **ERROR** BeginProcessingChanges - Already processing changes!";
    uVar4 = 0x10;
  }
  local_38 = local_38 & 0xffff0000;
  __os_log_impl(0x100000000,uVar2,uVar4,pcVar3,&local_38,2);
LAB_1004d984a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

