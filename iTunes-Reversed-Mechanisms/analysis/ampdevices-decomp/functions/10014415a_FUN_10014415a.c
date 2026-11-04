// name: FUN_10014415a
// address: 10014415a

void FUN_10014415a(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long local_c8 [4];
  long *local_a8;
  long local_98 [4];
  long *local_78;
  long local_68 [4];
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) != '\0') goto LAB_1001442e8;
  if (*(long *)(param_2 + 0x20) == 0) {
    local_a8 = *(long **)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (local_a8 != (long *)(param_1 + 0x90)) goto LAB_1001442d8;
LAB_1001441f4:
    lVar2 = 0x20;
  }
  else {
    FUN_10028593a(local_c8,param_2);
    if (local_a8 == (long *)0x0) {
      local_78 = (long *)0x0;
    }
    else if (local_a8 == local_c8) {
      local_78 = local_98;
      (**(code **)(*local_a8 + 0x18))();
    }
    else {
      local_78 = (long *)(**(code **)(*local_a8 + 0x10))();
    }
    plVar1 = operator_new(0x40);
    *plVar1 = (long)&PTR_FUN_10083aaa0;
    if (local_78 == (long *)0x0) {
      lVar2 = 0;
LAB_10014424e:
      plVar1[6] = lVar2;
    }
    else {
      if (local_78 != local_98) {
        lVar2 = (**(code **)(*local_78 + 0x10))();
        goto LAB_10014424e;
      }
      plVar1[6] = (long)(plVar1 + 2);
      (**(code **)(*local_78 + 0x18))();
    }
    local_48 = plVar1;
    FUN_100148b5e(local_68,param_1 + 0x90);
    if (local_48 == local_68) {
      lVar2 = 0x20;
LAB_10014429b:
      (**(code **)(*local_48 + lVar2))();
    }
    else {
      lVar2 = 0x28;
      if (local_48 != (long *)0x0) goto LAB_10014429b;
    }
    if (local_78 == local_98) {
      lVar2 = 0x20;
LAB_1001442c2:
      (**(code **)(*local_78 + lVar2))();
    }
    else {
      lVar2 = 0x28;
      if (local_78 != (long *)0x0) goto LAB_1001442c2;
    }
    if (local_a8 == local_c8) goto LAB_1001441f4;
LAB_1001442d8:
    lVar2 = 0x28;
    if (local_a8 == (long *)0x0) goto LAB_1001442e8;
  }
  (**(code **)(*local_a8 + lVar2))();
LAB_1001442e8:
  std::mutex::unlock();
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

