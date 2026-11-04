// name: FUN_100487d96
// address: 100487d96

void FUN_100487d96(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long local_40;
  long *local_38;
  
  FUN_100483533(&local_40,param_1,1);
  if (local_40 != 0) {
    iVar3 = FUN_1004c5726(local_40,param_2,param_3,param_4);
    if (iVar3 == 0) {
      FUN_1004874fd(param_1,0x40000);
    }
  }
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_38 + 0x10))(local_38);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}

