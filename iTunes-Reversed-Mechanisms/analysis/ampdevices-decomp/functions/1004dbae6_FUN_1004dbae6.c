// name: FUN_1004dbae6
// address: 1004dbae6

void FUN_1004dbae6(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 local_38 [8];
  long *local_30;
  
  lVar2 = *(long *)(param_2 + 0x90);
  if (lVar2 == 0) {
    FUN_1005b195e(local_38,*(undefined8 *)(param_2 + 0x70),*(undefined1 *)(param_2 + 0x78));
    FUN_100217418((long *)(param_2 + 0x90),local_38);
    if (local_30 != (long *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar2 = *(long *)(param_2 + 0x90);
  }
  *param_1 = lVar2;
  lVar2 = *(long *)(param_2 + 0x98);
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}

