// name: FUN_1001b62e2
// address: 1001b62e2

void FUN_1001b62e2(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pvVar4 = operator_new(0x58,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar4 != (void *)0x0) {
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    if (*(long *)(param_2 + 2) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_2 + 2) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    FUN_1001b710a(pvVar4,param_3,&local_38);
  }
  FUN_1001b72b8(&local_48,pvVar4);
  if ((pvVar4 != (void *)0x0) &&
     (plVar1 = (long *)CONCAT44(uStack_2c,uStack_30), plVar1 != (long *)0x0)) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  local_58 = local_48;
  uStack_54 = uStack_44;
  uStack_50 = uStack_40;
  uStack_4c = uStack_3c;
  if (CONCAT44(uStack_3c,uStack_40) != 0) {
    LOCK();
    plVar1 = (long *)(CONCAT44(uStack_3c,uStack_40) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  FUN_1001b625a(param_1,&local_58,param_3);
  plVar1 = (long *)CONCAT44(uStack_4c,uStack_50);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar1 = (long *)CONCAT44(uStack_3c,uStack_40);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar3 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

