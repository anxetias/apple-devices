// name: FUN_10023931a
// address: 10023931a

void FUN_10023931a(long param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = *(code **)(param_1 + 8);
  plVar4 = (long *)(*(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x10));
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar4 + -1);
  }
  local_28 = *(undefined4 *)(param_1 + 0x28);
  uStack_24 = *(undefined4 *)(param_1 + 0x2c);
  uStack_20 = *(undefined4 *)(param_1 + 0x30);
  uStack_1c = *(undefined4 *)(param_1 + 0x34);
  if (*(long *)(param_1 + 0x30) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x30) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  (*pcVar3)(plVar4,&local_28,*(undefined4 *)(param_1 + 0x38));
  plVar4 = (long *)CONCAT44(uStack_1c,uStack_20);
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

