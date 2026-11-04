// name: FUN_100571e20
// address: 100571e20

void FUN_100571e20(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x50);
  if (plVar3 != (long *)0x0) {
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
  FUN_10021e316(param_1 + 0x38);
  FUN_10021e316(param_1 + 0x28);
  FUN_10021e316(param_1 + 0x18);
  return;
}

