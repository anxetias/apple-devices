// name: FUN_1003c581e
// address: 1003c581e

void FUN_1003c581e(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
    LOCK();
    plVar1 = param_1 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*param_1 + 0x10))(param_1);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}

