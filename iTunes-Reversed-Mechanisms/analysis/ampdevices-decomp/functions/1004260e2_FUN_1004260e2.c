// name: FUN_1004260e2
// address: 1004260e2

void FUN_1004260e2(long param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  undefined8 local_28;
  long *plStack_20;
  
  pcVar2 = *(code **)(param_1 + 8);
  plVar3 = (long *)(*(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x10));
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *plVar3 + -1);
  }
  local_28 = *param_2;
  plStack_20 = (long *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar2)(plVar3,&local_28);
  if (plStack_20 != (long *)0x0) {
    LOCK();
    plVar3 = plStack_20 + 1;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plStack_20 + 0x10))(plStack_20);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

