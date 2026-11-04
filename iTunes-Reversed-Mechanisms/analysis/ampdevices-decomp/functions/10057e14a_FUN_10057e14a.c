// name: FUN_10057e14a
// address: 10057e14a

void FUN_10057e14a(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 local_38 [8];
  long *local_30;
  
  lVar2 = *(long *)(param_2 + 0x58);
  if (lVar2 == 0) {
    FUN_1003cfbe6(local_38);
    FUN_100217418((long *)(param_2 + 0x58),local_38);
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
    lVar2 = *(long *)(param_2 + 0x58);
  }
  *param_1 = lVar2;
  lVar2 = *(long *)(param_2 + 0x60);
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}

