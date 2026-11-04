// name: FUN_100457c86
// address: 100457c86

void FUN_100457c86(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  if (*(long *)(param_2 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_2 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x58))(param_1,&local_28);
  plVar1 = (long *)CONCAT44(uStack_1c,uStack_20);
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
  return;
}

