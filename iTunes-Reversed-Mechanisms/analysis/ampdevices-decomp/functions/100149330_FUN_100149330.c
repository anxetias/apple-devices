// name: FUN_100149330
// address: 100149330

long * FUN_100149330(long *param_1,undefined4 *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  void *pvVar5;
  long local_48;
  long *local_40;
  undefined1 local_38 [16];
  
  pvVar5 = operator_new(0x1d0,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar5 != (void *)0x0) {
    uVar3 = *param_2;
    FUN_1001b7a5c(local_38,param_3);
    FUN_100139cba(pvVar5,uVar3,local_38);
  }
  FUN_10014944a(param_1,pvVar5);
  if (pvVar5 != (void *)0x0) {
    FUN_1001b7a50(local_38);
  }
  local_48 = *param_1;
  if (local_48 != 0) {
    plVar4 = (long *)param_1[1];
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar4[1] = plVar4[1] + 1;
      UNLOCK();
    }
    local_40 = plVar4;
    FUN_10013ee40(local_48,&local_48);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return param_1;
}

