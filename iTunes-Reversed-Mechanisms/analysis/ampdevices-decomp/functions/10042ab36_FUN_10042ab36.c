// name: FUN_10042ab36
// address: 10042ab36

int FUN_10042ab36(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  long *plStack_c8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_48 = param_6;
  iVar4 = FUN_1001d58b4(&local_38,param_1,1,0);
  uVar3 = local_48;
  if (iVar4 == 0) {
    local_d0 = 0;
    plStack_c8 = (long *)0x0;
    local_40 = param_2;
    iVar4 = FUN_10042a967(local_38,local_d8,0,0);
    if (iVar4 == 0) {
      iVar4 = FUN_100428630(local_d8,local_40,param_3,param_4,param_5,uVar3,0,param_7,0);
      FUN_100426c81(local_d8);
    }
    FUN_1001d5da8(local_38);
    if (plStack_c8 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_c8 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return iVar4;
}

