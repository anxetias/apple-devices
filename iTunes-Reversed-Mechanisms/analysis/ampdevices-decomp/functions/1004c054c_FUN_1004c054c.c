// name: FUN_1004c054c
// address: 1004c054c

void FUN_1004c054c(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x4f0) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x4f0) + 0x488) = 0;
    FUN_1002188e4(param_1 + 0x4f0);
  }
  if (*(long **)(param_1 + 0x550) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x550) + 0xd0))();
  }
  plVar3 = *(long **)(param_1 + 0x558);
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined8 *)(param_1 + 0x558) = 0;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}

