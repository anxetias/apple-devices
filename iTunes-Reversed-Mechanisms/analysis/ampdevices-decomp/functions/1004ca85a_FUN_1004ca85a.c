// name: FUN_1004ca85a
// address: 1004ca85a

undefined8 *
FUN_1004ca85a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  FUN_1001b7f2a(local_48,param_3);
  FUN_1001b7a44(local_38);
  plVar3 = operator_new(0x1e0,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar3 != (long *)0x0) {
    FUN_10014f55c(plVar3,local_48,param_4,local_38);
  }
  *param_1 = plVar3;
  plVar4 = operator_new(0x20);
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_10085e630;
  plVar4[3] = (long)plVar3;
  param_1[1] = plVar4;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
    cVar2 = (**(code **)(*plVar3 + 0xd8))(plVar3);
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      lVar1 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (cVar2 == '\0') {
      plVar3 = (long *)param_1[1];
      *param_1 = 0;
      param_1[1] = 0;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        lVar1 = *plVar4;
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  FUN_1001b7a50(local_38);
  FUN_1001b7a50(local_48);
  return param_1;
}

