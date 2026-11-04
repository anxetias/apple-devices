// name: FUN_100203686
// address: 100203686

undefined4 * FUN_100203686(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  if (*(long *)(param_2 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_2 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  plVar1 = *(long **)(param_1 + 2);
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  return param_1;
}

