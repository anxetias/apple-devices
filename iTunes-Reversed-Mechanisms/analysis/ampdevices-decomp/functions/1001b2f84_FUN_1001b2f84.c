// name: FUN_1001b2f84
// address: 1001b2f84

undefined8 * FUN_1001b2f84(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  long *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  (**(code **)(*param_2 + 0x78))(local_98);
  FUN_1001a75cc((int)param_2[7],&local_38,local_88,0,1,1,0);
  if (CONCAT44(uStack_34,local_38) == 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      FUN_1006a0d49(uVar5);
    }
    FUN_1001782e9(0,0);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_1002c3cd0(&local_78,param_2 + 1);
    local_58 = local_78;
    local_50 = local_70;
    local_48 = local_78;
    local_40 = local_70;
    if (local_70 != (long *)0x0) {
      LOCK();
      local_70[1] = local_70[1] + 1;
      UNLOCK();
    }
    FUN_10017b3e6((int)DAT_100700458,CONCAT44(uStack_34,local_38),&local_48,local_98,2,0);
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_10017c140(CONCAT44(uStack_34,local_38),param_3);
    FUN_10017b32a(CONCAT44(uStack_34,local_38),3);
    plVar3 = (long *)CONCAT44(uStack_2c,uStack_30);
    local_68 = local_38;
    uStack_64 = uStack_34;
    uStack_60 = uStack_30;
    uStack_5c = uStack_2c;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    FUN_1001b2e80(param_1);
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
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
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
  return param_1;
}

