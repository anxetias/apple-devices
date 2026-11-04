// name: FUN_100492f17
// address: 100492f17

undefined8 FUN_100492f17(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long local_28;
  long *local_20;
  
  FUN_100483533(&local_28,param_2,0);
  if (local_28 == 0) {
    FUN_10032f0f2(param_1);
  }
  else {
    FUN_1004c5132(param_1);
  }
  if (local_20 != (long *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_20 + 0x10))(local_20);
      std::__shared_weak_count::__release_weak();
    }
  }
  return param_1;
}

