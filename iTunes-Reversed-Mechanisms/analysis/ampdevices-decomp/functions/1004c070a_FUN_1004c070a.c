// name: FUN_1004c070a
// address: 1004c070a

undefined8 FUN_1004c070a(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar4 = *(int *)(param_1 + 0x4e8);
  if (iVar4 == 0) {
    FUN_1002c3cd0(&local_38,param_1 + 8);
    local_28 = local_38;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    FUN_100241994();
    plVar3 = (long *)CONCAT44(uStack_1c,uStack_20);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
    iVar4 = *(int *)(param_1 + 0x4e8);
  }
  *(int *)(param_1 + 0x4e8) = iVar4 + 1;
  return 0;
}

