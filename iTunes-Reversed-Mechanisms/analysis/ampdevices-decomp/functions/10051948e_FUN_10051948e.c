// name: FUN_10051948e
// address: 10051948e

void FUN_10051948e(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar4 = operator_new(0x20);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_10085f8c8;
  puVar4[3] = param_2;
  *param_1 = param_2;
  plVar3 = (long *)param_1[1];
  param_1[1] = puVar4;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}

