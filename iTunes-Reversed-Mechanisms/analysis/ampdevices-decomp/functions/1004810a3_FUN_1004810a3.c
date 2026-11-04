// name: FUN_1004810a3
// address: 1004810a3

void FUN_1004810a3(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long local_28;
  long *local_20;
  
  FUN_100480e23(&local_28,param_1,0);
  if (local_28 != 0) {
    *(undefined1 *)(local_28 + 0x28) = 0;
    FUN_10020e39a(local_28 + 0x30,*(undefined8 *)(local_28 + 0x38));
    *(long *)(local_28 + 0x30) = local_28 + 0x38;
    *(undefined8 *)(local_28 + 0x38) = 0;
    *(undefined8 *)(local_28 + 0x40) = 0;
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
      return;
    }
  }
  return;
}

