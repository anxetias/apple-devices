// name: FUN_100238d72
// address: 100238d72

undefined8 * FUN_100238d72(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (param_3 != 0) {
    LOCK();
    *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 1;
    UNLOCK();
  }
  *param_1 = param_2;
  plVar3 = (long *)param_1[1];
  param_1[1] = param_3;
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
  return param_1;
}

