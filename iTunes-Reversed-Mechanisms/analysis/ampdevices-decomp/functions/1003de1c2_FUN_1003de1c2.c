// name: FUN_1003de1c2
// address: 1003de1c2

undefined4
FUN_1003de1c2(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long *local_20;
  
  if (param_2 != (long *)0x0) {
    LOCK();
    param_2[1] = param_2[1] + 1;
    UNLOCK();
  }
  local_48 = param_3;
  local_40 = param_4;
  local_38 = param_5;
  local_30 = param_6;
  local_28 = param_1;
  local_20 = param_2;
  uVar3 = FUN_1003df7d2(&local_28,FUN_1003e228e,&local_48,0);
  if (param_2 != (long *)0x0) {
    LOCK();
    plVar1 = param_2 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*param_2 + 0x10))(param_2);
      std::__shared_weak_count::__release_weak();
    }
  }
  return uVar3;
}

