// name: FUN_1001b657a
// address: 1001b657a

void FUN_1001b657a(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 local_38 [16];
  undefined8 local_28;
  long *plStack_20;
  
  local_28 = 0;
  plStack_20 = (long *)0x0;
  FUN_1001b7a44(local_38);
  FUN_1001b6610(param_1,0,param_2,&local_28,local_38);
  FUN_1001b7a50(local_38);
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

