// name: FUN_1003bb580
// address: 1003bb580

void FUN_1003bb580(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long local_58;
  long *local_50;
  undefined8 local_48;
  long *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_1001b5f9c(&local_58);
  if (local_58 != 0) {
    local_48 = 0;
    plStack_40 = (long *)0x0;
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    if (*(long *)(param_2 + 2) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_2 + 2) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    FUN_1001b6a1e(local_58,&local_48,param_1,&local_38);
    plVar1 = (long *)CONCAT44(uStack_2c,uStack_30);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_40 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_50 + 0x10))(local_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

