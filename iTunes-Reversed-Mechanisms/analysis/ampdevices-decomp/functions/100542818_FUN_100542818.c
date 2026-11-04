// name: FUN_100542818
// address: 100542818

long * FUN_100542818(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *local_38;
  long *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = *param_2;
  if ((char)param_2[0x1fb] == '\x01') {
    (**(code **)(lVar3 + 0x130))(&local_38,param_2,0);
    plVar1 = local_30;
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x58))(&local_38);
      FUN_100217418(param_1,&local_38);
      if (local_30 != (long *)0x0) {
        LOCK();
        plVar2 = local_30 + 1;
        lVar3 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar3 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (*param_1 != 0) {
      return param_1;
    }
    lVar3 = *param_2;
  }
  (**(code **)(lVar3 + 0x1d8))(&local_38,param_2);
  FUN_100217418(param_1,&local_38);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_30 + 0x10))(local_30);
      std::__shared_weak_count::__release_weak();
    }
  }
  return param_1;
}

