// name: FUN_10026963a
// address: 10026963a

long * FUN_10026963a(long *param_1,long param_2,char param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 local_38 [8];
  long *local_30;
  
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 == 0 && param_3 == '\x01') {
    FUN_1004c4d24(local_38);
    FUN_100217418((long *)(param_2 + 0x28),local_38);
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
    lVar2 = *(long *)(param_2 + 0x28);
  }
  *param_1 = lVar2;
  lVar2 = *(long *)(param_2 + 0x30);
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}

