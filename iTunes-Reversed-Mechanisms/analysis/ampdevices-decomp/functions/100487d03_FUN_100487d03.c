// name: FUN_100487d03
// address: 100487d03

void FUN_100487d03(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long local_30;
  long *local_28;
  
  FUN_100483533(&local_30,param_2,0);
  if (local_30 == 0) {
    FUN_1001b7a44(param_1);
  }
  else {
    FUN_1004c59d0(param_1,local_30,param_3);
  }
  if (local_28 != (long *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_28 + 0x10))(local_28);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}

