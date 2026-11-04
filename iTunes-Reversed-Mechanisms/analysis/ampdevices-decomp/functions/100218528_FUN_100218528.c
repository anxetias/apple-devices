// name: FUN_100218528
// address: 100218528

void FUN_100218528(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = *(code **)(param_1 + 8);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  local_28 = *(undefined4 *)(param_1 + 0x18);
  uStack_24 = *(undefined4 *)(param_1 + 0x1c);
  uStack_20 = *(undefined4 *)(param_1 + 0x20);
  uStack_1c = *(undefined4 *)(param_1 + 0x24);
  if (*(long *)(param_1 + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  (*pcVar4)(uVar5,&local_28);
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

