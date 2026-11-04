// name: FUN_1002c9340
// address: 1002c9340

void FUN_1002c9340(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  undefined8 local_38;
  long *plStack_30;
  
  FUN_1002c93ec();
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    FUN_100467338(pvVar3);
    operator_delete(pvVar3);
  }
  *param_1 = 0;
  local_38 = 0;
  plStack_30 = (long *)0x0;
  FUN_100217418(param_1 + 1,&local_38);
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_1002cd170(param_1 + 0x122,param_1[0x123]);
  FUN_100205d70(param_1 + 1);
  return;
}

