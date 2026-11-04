// name: FUN_1003c2fcf
// address: 1003c2fcf

void FUN_1003c2fcf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *local_48;
  long *local_40;
  long *local_38;
  long *plStack_30;
  
  local_38 = (long *)0x0;
  plStack_30 = (long *)0x0;
  FUN_100241e02(&local_48,param_1,0x82,0,0,0);
  local_38 = local_48;
  plStack_30 = local_40;
  if (local_48 == (long *)0x0) {
    FUN_1001e1c39(param_2,param_3);
  }
  else {
    (**(code **)(*local_48 + 0xe0))(local_48,param_2,param_3);
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

