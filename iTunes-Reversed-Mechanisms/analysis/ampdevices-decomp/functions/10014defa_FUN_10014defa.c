// name: FUN_10014defa
// address: 10014defa

void FUN_10014defa(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar3 = (long *)std::__shared_weak_count::lock();
    if (plVar3 != (long *)0x0) {
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_10012ea4e(*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
      }
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
  }
  return;
}

