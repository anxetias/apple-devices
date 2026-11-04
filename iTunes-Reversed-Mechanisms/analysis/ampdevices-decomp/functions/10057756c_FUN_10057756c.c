// name: FUN_10057756c
// address: 10057756c

void FUN_10057756c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_1[2] != 0) {
    plVar5 = (long *)param_1[1];
    plVar2 = *(long **)(*param_1 + 8);
    lVar3 = *plVar5;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    param_1[2] = 0;
    while (plVar5 != param_1) {
      plVar2 = (long *)plVar5[1];
      plVar4 = (long *)plVar5[3];
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          std::__shared_weak_count::__release_weak();
        }
      }
      operator_delete(plVar5);
      plVar5 = plVar2;
    }
  }
  return;
}

