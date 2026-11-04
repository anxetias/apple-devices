// name: FUN_1003c2f54
// address: 1003c2f54

void FUN_1003c2f54(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *local_28;
  long *local_20;
  
  (**(code **)(*param_1 + 0x220))(&local_28,param_1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x10))(local_28,param_1);
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
  return;
}

