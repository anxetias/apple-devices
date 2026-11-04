// name: FUN_100130484
// address: 100130484

void FUN_100130484(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 local_38;
  long *plStack_30;
  undefined8 local_20;
  long *local_18;
  
  local_20 = *param_2;
  local_18 = (long *)param_2[1];
  if (local_18 != (long *)0x0) {
    LOCK();
    local_18[1] = local_18[1] + 1;
    UNLOCK();
  }
  local_38 = *param_4;
  plStack_30 = (long *)param_4[1];
  *param_4 = 0;
  param_4[1] = 0;
  FUN_100144dfe(local_20,&local_20,param_3,&local_38);
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
  if (local_18 != (long *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_18 + 0x10))(local_18);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

