// name: FUN_10013ba0a
// address: 10013ba0a

undefined8 FUN_10013ba0a(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long local_30;
  long *local_28;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    FUN_10013b92a(&local_30);
    lVar3 = local_30;
    if (local_30 != 0) {
      FUN_10013b608(local_30,param_2,param_3);
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    FUN_10013b859(&local_30);
    lVar3 = local_30;
    if (local_30 != 0) {
      FUN_10013b608(local_30,param_2,param_3);
    }
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
  if (lVar3 == 0) {
    return 0;
  }
  return 1;
}

