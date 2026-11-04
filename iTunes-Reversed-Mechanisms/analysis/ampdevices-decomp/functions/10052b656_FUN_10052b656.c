// name: FUN_10052b656
// address: 10052b656

undefined8 * FUN_10052b656(undefined8 *param_1,long param_2,int param_3)

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
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar3 = (long *)FUN_10015b12c(param_2 + 8,param_3 + 1);
  if (plVar3 != (long *)0x0) {
    FUN_1002c3cd0(&local_28,*plVar3 + 0x68);
    local_38 = local_28;
    uStack_34 = uStack_24;
    uStack_30 = uStack_20;
    uStack_2c = uStack_1c;
    FUN_100217418(param_1,&local_38);
    plVar3 = (long *)CONCAT44(uStack_2c,uStack_30);
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
  }
  return param_1;
}

