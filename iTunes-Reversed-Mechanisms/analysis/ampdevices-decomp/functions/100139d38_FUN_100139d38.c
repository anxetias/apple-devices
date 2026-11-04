// name: FUN_100139d38
// address: 100139d38

void FUN_100139d38(long param_1)

{
  long *plVar1;
  long lVar2;
  long local_a8 [4];
  long *local_88;
  long local_78;
  long local_68 [4];
  long *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10028593a(local_a8);
  local_48 = (long *)0x0;
  local_78 = param_1;
  plVar1 = operator_new(0x50);
  *plVar1 = (long)&PTR_FUN_100839df8;
  if (local_88 == (long *)0x0) {
    lVar2 = 0;
LAB_100139da5:
    plVar1[6] = lVar2;
  }
  else {
    if (local_88 != local_a8) {
      lVar2 = (**(code **)(*local_88 + 0x10))();
      goto LAB_100139da5;
    }
    plVar1[6] = (long)(plVar1 + 2);
    (**(code **)(*local_88 + 0x18))();
  }
  plVar1[8] = local_78;
  local_48 = plVar1;
  FUN_100144084(param_1,local_68);
  if (local_48 == local_68) {
    lVar2 = 0x20;
LAB_100139df2:
    (**(code **)(*local_48 + lVar2))();
  }
  else {
    lVar2 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_100139df2;
  }
  if (local_88 == local_a8) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_88 == (long *)0x0) goto LAB_100139e18;
  }
  (**(code **)(*local_88 + lVar2))();
LAB_100139e18:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

