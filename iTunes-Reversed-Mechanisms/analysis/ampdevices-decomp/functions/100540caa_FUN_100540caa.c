// name: FUN_100540caa
// address: 100540caa

void FUN_100540caa(long *param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined1 local_30 [8];
  long *local_28;
  
  iVar2 = *(int *)((long)param_1 + 0xfdc);
  *(int *)((long)param_1 + 0xfdc) = iVar2 + 1;
  if ((iVar2 == 0) && (*(char *)((long)param_1 + 0xfd9) == '\x01')) {
    (**(code **)(*param_1 + 0x130))(local_30,param_1,1);
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      lVar1 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if ((*(char *)((long)param_1 + 0xfd9) == '\x01') &&
     (plVar3 = (long *)param_1[0x1f9], plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x40))(plVar3,param_2);
  }
  return;
}

