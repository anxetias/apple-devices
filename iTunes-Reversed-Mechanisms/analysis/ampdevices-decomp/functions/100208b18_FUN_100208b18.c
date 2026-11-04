// name: FUN_100208b18
// address: 100208b18

void FUN_100208b18(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  
  pcVar3 = *(code **)(param_1 + 8);
  plVar4 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar3)();
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

