// name: FUN_10023e45a
// address: 10023e45a

void FUN_10023e45a(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = operator_new(0x20);
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)&PTR_FUN_10083ea80;
  plVar2[3] = param_2;
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x10) == 0) {
      LOCK();
      plVar2[1] = plVar2[1] + 1;
      UNLOCK();
      LOCK();
      plVar2[2] = plVar2[2] + 1;
      UNLOCK();
      *(long *)(param_2 + 8) = param_2;
      *(long **)(param_2 + 0x10) = plVar2;
    }
    else {
      if (*(long *)(*(long *)(param_2 + 0x10) + 8) != -1) goto LAB_10023e4f8;
      LOCK();
      plVar2[1] = plVar2[1] + 1;
      UNLOCK();
      LOCK();
      plVar2[2] = plVar2[2] + 1;
      UNLOCK();
      *(long *)(param_2 + 8) = param_2;
      *(long **)(param_2 + 0x10) = plVar2;
      std::__shared_weak_count::__release_weak();
    }
    plVar3 = plVar2 + 1;
    LOCK();
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10023e4f8:
  *param_1 = param_2;
  plVar3 = (long *)param_1[1];
  param_1[1] = (long)plVar2;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}

