// name: FUN_1002ac044
// address: 1002ac044

void FUN_1002ac044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  long local_98 [4];
  long *local_78;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a5c(local_c8,param_1);
  FUN_1001b7a5c(local_b8,param_2);
  FUN_1001b7a88(local_a8,param_3);
  plVar1 = operator_new(0x40);
  *plVar1 = (long)&PTR_FUN_100845940;
  plVar1[1] = (long)FUN_100450ae1;
  FUN_1002ac916(plVar1 + 2,local_c8);
  local_78 = plVar1;
  FUN_1001b7a50(local_a8);
  FUN_1001b7a50(local_b8);
  FUN_1001b7a50(local_c8);
  local_68 = 0;
  uStack_60 = 0;
  uStack_59 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (long *)0x0;
  FUN_10017869a(local_98);
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 == local_98) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_78 == (long *)0x0) goto LAB_1002ac173;
  }
  (**(code **)(*local_78 + lVar2))();
LAB_1002ac173:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

