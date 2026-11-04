// name: FUN_1004cbcf6
// address: 1004cbcf6

void FUN_1004cbcf6(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *local_20;
  
  local_20 = param_1;
  if (param_1[1] != 0) {
    plVar3 = (long *)std::__shared_weak_count::lock();
    if (plVar3 != (long *)0x0) {
      if (*param_1 != 0) {
        FUN_1004caa22(*param_1,param_1 + 2,param_1 + 3,param_1[5]);
      }
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  FUN_1004cbcac(&local_20);
  return;
}

