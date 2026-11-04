// name: FUN_10024246a
// address: 10024246a

void FUN_10024246a(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  if (param_2[1] != 0) {
    LOCK();
    plVar1 = (long *)(param_2[1] + 0x10);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  lVar2 = *(long *)(param_1 + 0x4c0);
  *(undefined8 *)(param_1 + 0x4b8) = uVar3;
  *(undefined8 *)(param_1 + 0x4c0) = uVar4;
  if (lVar2 != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

