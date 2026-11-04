// name: FUN_10037bab6
// address: 10037bab6

void FUN_10037bab6(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 local_38;
  long *plStack_30;
  
  *param_1 = &PTR_FUN_100855b70;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_38 = 0;
  plStack_30 = (long *)0x0;
  FUN_100217418(param_1 + 6,&local_38);
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
  local_38 = 0;
  plStack_30 = (long *)0x0;
  FUN_100217418(param_1 + 8,&local_38);
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
  FUN_10037bba0(param_1);
  return;
}

