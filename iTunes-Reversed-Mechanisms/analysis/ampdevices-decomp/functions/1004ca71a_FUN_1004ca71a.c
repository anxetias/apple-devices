// name: FUN_1004ca71a
// address: 1004ca71a

void FUN_1004ca71a(long param_1)

{
  long lVar1;
  undefined1 local_98 [16];
  undefined **local_88;
  long local_80;
  undefined ***local_68;
  undefined **local_58;
  undefined ***local_50;
  undefined ***local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001a8d5a(local_98,*(undefined8 *)(param_1 + 0x20),1);
  local_88 = &PTR_FUN_10085e5a0;
  local_58 = &PTR_FUN_10085e520;
  local_80 = param_1;
  local_68 = &local_88;
  local_50 = &local_88;
  local_38 = &local_58;
  FUN_1001a96bc(local_98,&local_58);
  if (local_38 == &local_58) {
    lVar1 = 0x20;
LAB_1004ca7a2:
    (**(code **)((long)*local_38 + lVar1))();
  }
  else {
    lVar1 = 0x28;
    if (local_38 != (undefined ***)0x0) goto LAB_1004ca7a2;
  }
  if (local_68 == &local_88) {
    lVar1 = 0x20;
  }
  else {
    lVar1 = 0x28;
    if (local_68 == (undefined ***)0x0) goto LAB_1004ca7cc;
  }
  (**(code **)((long)*local_68 + lVar1))();
LAB_1004ca7cc:
  FUN_1001a8fac(local_98);
  FUN_1001a7bd2(param_1 + 0x20,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

