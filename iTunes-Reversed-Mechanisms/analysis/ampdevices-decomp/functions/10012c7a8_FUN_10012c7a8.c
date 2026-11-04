// name: FUN_10012c7a8
// address: 10012c7a8

long * FUN_10012c7a8(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  void *pvVar4;
  long local_30;
  long *local_28;
  
  pvVar4 = operator_new(0x1c0,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar4 != (void *)0x0) {
    ___bzero(pvVar4,0x1c0);
    FUN_10012c892(pvVar4);
  }
  FUN_10012c8da(param_1,pvVar4);
  local_30 = *param_1;
  if (local_30 != 0) {
    local_28 = (long *)param_1[1];
    if (local_28 != (long *)0x0) {
      LOCK();
      local_28[1] = local_28[1] + 1;
      UNLOCK();
    }
    cVar3 = FUN_10013ee40(local_30,&local_30);
    if (local_28 != (long *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (cVar3 == '\0') {
      FUN_1002188e4(param_1);
    }
  }
  return param_1;
}

