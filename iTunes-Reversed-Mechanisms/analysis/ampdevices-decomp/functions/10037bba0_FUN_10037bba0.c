// name: FUN_10037bba0
// address: 10037bba0

void FUN_10037bba0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 local_28;
  long *plStack_20;
  
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_1001c62d9(param_1 + 0x10,0x20);
  local_28 = 0;
  plStack_20 = (long *)0x0;
  FUN_100217418(param_1 + 0x30,&local_28);
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
  local_28 = 0;
  plStack_20 = (long *)0x0;
  FUN_100217418(param_1 + 0x40,&local_28);
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
  return;
}

