// name: FUN_10051d103
// address: 10051d103

undefined4 FUN_10051d103(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
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
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = *param_2;
  local_88 = &PTR_FUN_100852528;
  local_58 = 0;
  uStack_50 = 0;
  uStack_49 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (long *)0x0;
  local_80 = param_1;
  local_68 = &local_88;
  uVar2 = FUN_10017869a(&local_88);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_30 + 0x10))(local_30);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_68 == &local_88) {
    lVar3 = 0x20;
  }
  else {
    lVar3 = 0x28;
    if (local_68 == (undefined ***)0x0) goto LAB_10051d1b1;
  }
  (**(code **)((long)*local_68 + lVar3))();
LAB_10051d1b1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

