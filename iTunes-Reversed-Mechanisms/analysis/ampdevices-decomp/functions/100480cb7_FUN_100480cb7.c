// name: FUN_100480cb7
// address: 100480cb7

undefined4 FUN_100480cb7(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long local_30;
  long *local_28;
  
  uVar3 = 0;
  FUN_100480e23(&local_30,param_1,0);
  if (local_30 != 0) {
    uVar3 = FUN_1004c5428(local_30,param_2,0xff);
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
    }
  }
  return uVar3;
}

