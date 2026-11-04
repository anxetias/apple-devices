// name: FUN_100137d66
// address: 100137d66

long * FUN_100137d66(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  void *pvVar4;
  long local_30;
  long *local_28;
  
  pvVar4 = operator_new(0x1b0,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar4 != (void *)0x0) {
    FUN_100137e4c(pvVar4,param_2);
  }
  FUN_100137e90(param_1,pvVar4);
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

