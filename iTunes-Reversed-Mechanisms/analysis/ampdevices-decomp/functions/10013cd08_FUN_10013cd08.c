// name: FUN_10013cd08
// address: 10013cd08

long * FUN_10013cd08(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  long local_30;
  long *local_28;
  
  puVar4 = operator_new(0x1a0,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar4 != (undefined8 *)0x0) {
    ___bzero(puVar4,0x1a0);
    FUN_10013eaf0(puVar4);
    *puVar4 = &PTR_FUN_10083a210;
  }
  FUN_10013ce74(param_1,puVar4);
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

