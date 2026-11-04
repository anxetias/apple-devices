// name: FUN_10050b7df
// address: 10050b7df

void FUN_10050b7df(uint param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined **local_88;
  code *local_80;
  uint local_70;
  undefined ***local_68;
  long local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 local_38;
  long *plStack_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = &PTR_FUN_10085f340;
  local_80 = FUN_10050b7d3;
  uStack_50 = 0;
  uStack_49 = 0;
  local_38 = 0;
  plStack_30 = (long *)0x0;
  local_58 = (ulong)param_1 << 0x20;
  local_70 = param_1;
  local_68 = &local_88;
  local_40 = param_2;
  FUN_10017869a(&local_88);
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 == &local_88) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_68 == (undefined ***)0x0) goto LAB_10050b885;
  }
  (**(code **)((long)*local_68 + lVar2))();
LAB_10050b885:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

