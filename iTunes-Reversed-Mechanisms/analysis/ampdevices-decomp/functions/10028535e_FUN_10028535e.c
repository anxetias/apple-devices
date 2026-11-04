// name: FUN_10028535e
// address: 10028535e

void FUN_10028535e(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if ((param_2 != (undefined8 *)0x0) &&
     ((lVar3 = param_2[1], lVar3 == 0 || (*(long *)(lVar3 + 8) == -1)))) {
    plVar2 = *(long **)(param_1 + 8);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar2[1] = plVar2[1] + 1;
      UNLOCK();
      LOCK();
      plVar2[2] = plVar2[2] + 1;
      UNLOCK();
      lVar3 = param_2[1];
    }
    *param_2 = param_3;
    param_2[1] = plVar2;
    if (lVar3 != 0) {
      std::__shared_weak_count::__release_weak();
    }
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__shared_weak_count::__release_weak();
        return;
      }
    }
  }
  return;
}

