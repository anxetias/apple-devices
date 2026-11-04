// name: FUN_1004c087c
// address: 1004c087c

void FUN_1004c087c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  plVar3 = param_1 + 0x9d;
  *(int *)plVar3 = (int)*plVar3 + -1;
  if ((int)*plVar3 == 0) {
    FUN_1002c3cd0(&local_38,param_1 + 1);
    local_28 = local_38;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
    uStack_1c = uStack_2c;
    FUN_100241b38();
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
    (**(code **)(*param_1 + 0x2d8))(param_1);
  }
  return;
}

