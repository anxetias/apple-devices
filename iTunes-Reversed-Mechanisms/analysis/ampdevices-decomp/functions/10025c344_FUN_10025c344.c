// name: FUN_10025c344
// address: 10025c344

void FUN_10025c344(undefined4 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 local_28;
  long *plStack_20;
  
  *param_1 = 0;
  FUN_1001b811c(param_1 + 1);
  FUN_1001a7bd2(param_1 + 5,0);
  local_28 = 0;
  plStack_20 = (long *)0x0;
  FUN_100217418(param_1 + 0xd,&local_28);
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
  FUN_1001a7bd2(param_1 + 9,0);
  return;
}

