// name: FUN_1003df7d2
// address: 1003df7d2

int FUN_1003df7d2(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined1 local_100 [8];
  undefined8 local_f8;
  long *plStack_f0;
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_f8 = 0;
  plStack_f0 = (long *)0x0;
  plVar3 = *(long **)(param_1 + 2);
  local_68 = *param_1;
  uStack_64 = param_1[1];
  uStack_60 = param_1[2];
  uStack_5c = param_1[3];
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  local_50 = param_3;
  iVar4 = FUN_1003df354(&local_68,local_70,0);
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
  if (iVar4 == 0) {
    local_48 = *param_1;
    uStack_44 = param_1[1];
    uStack_40 = param_1[2];
    uStack_3c = param_1[3];
    if (*(long *)(param_1 + 2) != 0) {
      LOCK();
      plVar3 = (long *)(*(long *)(param_1 + 2) + 8);
      *plVar3 = *plVar3 + 1;
      UNLOCK();
    }
    iVar4 = FUN_10042db01(&local_48,local_100,0,0);
    plVar3 = (long *)CONCAT44(uStack_3c,uStack_40);
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
    if (iVar4 == 0) {
      iVar4 = 0;
      FUN_100428630(local_100,param_2,local_50,0,0,0,0,param_4,0);
      FUN_100426c81(local_100);
    }
  }
  if (plStack_f0 != (long *)0x0) {
    LOCK();
    plVar3 = plStack_f0 + 1;
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      std::__shared_weak_count::__release_weak();
    }
  }
  return iVar4;
}

