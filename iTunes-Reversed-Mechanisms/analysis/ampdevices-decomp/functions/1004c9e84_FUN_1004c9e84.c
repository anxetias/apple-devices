// name: FUN_1004c9e84
// address: 1004c9e84

long * FUN_1004c9e84(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 local_28 [8];
  long *local_20;
  
  if (DAT_1008c77a8 == 0) {
    FUN_1004c9f10(local_28);
    FUN_100217418(&DAT_1008c77a8,local_28);
    if (local_20 != (long *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  *param_1 = DAT_1008c77a8;
  lVar2 = DAT_1008c77b0;
  param_1[1] = DAT_1008c77b0;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

