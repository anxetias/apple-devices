// name: FUN_10013491a
// address: 10013491a

void FUN_10013491a(long param_1)

{
  long *plVar1;
  long lVar2;
  long local_98 [4];
  long *local_78;
  long local_68 [4];
  long *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10028593a(local_98);
  local_48 = (long *)0x0;
  plVar1 = operator_new(0x50);
  *plVar1 = (long)&PTR_FUN_1008395f0;
  plVar1[2] = param_1;
  if (local_78 == (long *)0x0) {
    lVar2 = 0;
LAB_100134992:
    plVar1[8] = lVar2;
  }
  else {
    if (local_78 != local_98) {
      lVar2 = (**(code **)(*local_78 + 0x10))();
      goto LAB_100134992;
    }
    plVar1[8] = (long)(plVar1 + 4);
    (**(code **)(*local_78 + 0x18))();
  }
  local_48 = plVar1;
  FUN_10014415a(param_1,local_68);
  if (local_48 == local_68) {
    lVar2 = 0x20;
LAB_1001349d7:
    (**(code **)(*local_48 + lVar2))();
  }
  else {
    lVar2 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_1001349d7;
  }
  if (local_78 == local_98) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_78 == (long *)0x0) goto LAB_1001349fd;
  }
  (**(code **)(*local_78 + lVar2))();
LAB_1001349fd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

