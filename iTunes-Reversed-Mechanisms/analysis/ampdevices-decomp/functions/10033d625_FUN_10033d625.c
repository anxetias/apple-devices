// name: FUN_10033d625
// address: 10033d625

void FUN_10033d625(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined ***local_78;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001705fc(param_3);
  local_98 = &PTR_FUN_1008545e0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_59 = 0;
  uStack_58 = 0;
  uStack_56 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (long *)0x0;
  uStack_57 = 1;
  local_90 = param_2;
  local_88 = param_3;
  local_80 = param_1;
  local_78 = &local_98;
  FUN_10017869a(&local_98);
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
  if (local_78 == &local_98) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_78 == (undefined ***)0x0) goto LAB_10033d6e6;
  }
  (**(code **)((long)*local_78 + lVar2))();
LAB_10033d6e6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

