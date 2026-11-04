// name: FUN_1005f5e59
// address: 1005f5e59

void FUN_1005f5e59(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long local_88 [4];
  long *local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = operator_new(0x28);
  *local_68 = (long)&PTR_FUN_100870128;
  local_68[1] = (long)FUN_1005f4ae4;
  local_68[2] = param_1;
  local_68[3] = param_2;
  local_68[4] = param_3;
  local_58 = 0;
  uStack_50 = 0;
  uStack_49 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = (long *)0x0;
  FUN_10017869a(local_88);
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
  if (local_68 == local_88) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (local_68 == (long *)0x0) goto LAB_1005f5f1e;
  }
  (**(code **)(*local_68 + lVar2))();
LAB_1005f5f1e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

