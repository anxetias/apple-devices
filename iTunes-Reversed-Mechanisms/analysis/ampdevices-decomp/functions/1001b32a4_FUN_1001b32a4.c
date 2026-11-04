// name: FUN_1001b32a4
// address: 1001b32a4

long * FUN_1001b32a4(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  long *plStack_70;
  undefined8 local_68;
  long *plStack_60;
  undefined8 local_58;
  long *plStack_50;
  undefined8 local_40;
  long local_38;
  long *plStack_30;
  
  local_40 = param_1;
  (**(code **)(*param_3 + 0x78))(local_98);
  FUN_1001a75cc((int)local_40,&local_38,local_88,0,1,1,0);
  lVar2 = local_38;
  if (local_38 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006a0e35(uVar4);
    }
    FUN_1001782e9(0,0);
    *param_2 = 0;
    param_2[1] = 0;
    if (plStack_30 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    FUN_1002c3cd0(&local_78,param_3 + 1);
    local_68 = local_78;
    plStack_60 = plStack_70;
    local_58 = 0;
    plStack_50 = (long *)0x0;
    FUN_10017b3e6((int)DAT_100700458,lVar2,&local_68,local_98,0,0);
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_50 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        std::__shared_weak_count::__release_weak();
      }
    }
    *param_2 = local_38;
    param_2[1] = (long)plStack_30;
  }
  return param_2;
}

