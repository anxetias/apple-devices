// name: FUN_10046f12e
// address: 10046f12e

void FUN_10046f12e(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 local_68 [8];
  long *local_60;
  undefined **local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined ***local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x28) == 0) {
    local_58 = &PTR_FUN_10085c450;
    local_50 = 0x31;
    local_48 = 0;
    local_40 = param_1;
    local_38 = &local_58;
    FUN_1001bdcc2(DAT_100700458,(int)DAT_100700458,0,local_68,&local_58);
    FUN_100217418(param_1 + 0x28,local_68);
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_38 == &local_58) {
      lVar2 = 0x20;
    }
    else {
      lVar2 = 0x28;
      if (local_38 == (undefined ***)0x0) goto LAB_10046f1f6;
    }
    (**(code **)((long)*local_38 + lVar2))();
  }
LAB_10046f1f6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

