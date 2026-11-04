// name: FUN_100540dbf
// address: 100540dbf

undefined8 * FUN_100540dbf(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar3 = *(long **)(param_3 + 2);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  FUN_100540e46(&local_38,param_2,&local_28);
  *param_1 = local_38;
  param_1[1] = uStack_30;
  local_38 = 0;
  uStack_30 = 0;
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

