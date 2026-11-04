// name: FUN_1005b752e
// address: 1005b752e

void FUN_1005b752e(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_10086f230;
  param_1[8] = &PTR_FUN_10086f2a0;
  FUN_1002842e4(param_1 + 0x1c);
  FUN_1002842e4(param_1 + 0x17);
  FUN_1001a7a94(param_1 + 0x10);
  FUN_1001a7a94(param_1 + 0xe);
  plVar3 = (long *)param_1[0xd];
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
  FUN_100205d70(param_1 + 9);
  FUN_10053c31a(param_1);
  operator_delete(param_1);
  return;
}

