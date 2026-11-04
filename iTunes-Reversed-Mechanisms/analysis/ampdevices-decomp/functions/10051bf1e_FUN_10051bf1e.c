// name: FUN_10051bf1e
// address: 10051bf1e

void FUN_10051bf1e(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  undefined **local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined ***local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = &PTR_FUN_10083ef58;
  uStack_50 = 0;
  uStack_49 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (long *)0x0;
  local_58 = 0xfffffffe;
  local_80 = param_1;
  local_78 = param_2;
  local_68 = &local_88;
  FUN_10017869a(&local_88);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_30 + 0x10))(local_30);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 == &local_88) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_68 == (undefined ***)0x0) goto LAB_10051bfc9;
  }
  (**(code **)((long)*local_68 + lVar2))();
LAB_10051bfc9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

