// name: FUN_100467338
// address: 100467338

void FUN_100467338(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 local_28;
  long *plStack_20;
  
  local_28 = 0;
  plStack_20 = (long *)0x0;
  FUN_100217418(param_1,&local_28);
  if (plStack_20 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_20 + 0x10))(plStack_20);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_100205d70(param_1);
  return;
}

