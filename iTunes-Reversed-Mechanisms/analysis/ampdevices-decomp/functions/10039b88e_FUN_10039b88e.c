// name: FUN_10039b88e
// address: 10039b88e

undefined4 FUN_10039b88e(undefined8 param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar3 = *(long **)(param_2 + 2);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_10039a37c(param_1,0,&local_28);
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
  return uVar4;
}

