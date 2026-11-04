// name: FUN_10053e92c
// address: 10053e92c

void FUN_10053e92c(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  *param_1 = &PTR_FUN_1008699c0;
  FUN_100175848(param_1[0xa1]);
  FUN_100175848(param_1[0xa0]);
  if (param_1[0xa3] != 0) {
    piVar1 = (int *)(param_1[0xa3] + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1005d3cba();
    }
  }
  if (param_1[0xa4] != 0) {
    piVar1 = (int *)(param_1[0xa4] + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1005d3cba();
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  plVar4 = (long *)param_1[0x1fa];
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}

