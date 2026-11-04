// name: FUN_1002135fa
// address: 1002135fa

void FUN_1002135fa(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_28 = *(undefined4 *)(param_1 + 0x28a8);
  uStack_24 = *(undefined4 *)(param_1 + 0x28ac);
  uStack_20 = *(undefined4 *)(param_1 + 0x28b0);
  uStack_1c = *(undefined4 *)(param_1 + 0x28b4);
  if (*(long *)(param_1 + 0x28b0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x28b0) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  FUN_1001ceb3c(&local_28,0x7570726d,param_2,1000,param_1 + 0x28b8);
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

