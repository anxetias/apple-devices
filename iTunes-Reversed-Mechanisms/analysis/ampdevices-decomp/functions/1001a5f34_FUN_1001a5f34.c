// name: FUN_1001a5f34
// address: 1001a5f34

void FUN_1001a5f34(ulong *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 local_28;
  long *plStack_20;
  
  pcVar5 = (code *)*param_1;
  uVar3 = param_1[2];
  uVar4 = param_1[1];
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(uVar3 + uVar4) + -1);
  }
  local_28 = *param_2;
  plStack_20 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)((long *)(uVar3 + uVar4),&local_28);
  if (plStack_20 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_20 + 0x10))(plStack_20);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

