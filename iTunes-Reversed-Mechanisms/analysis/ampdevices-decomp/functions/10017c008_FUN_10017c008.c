// name: FUN_10017c008
// address: 10017c008

void FUN_10017c008(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,uint param_6)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long local_20;
  long *local_18;
  
  local_20 = *param_2;
  if (local_20 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_100684a93(uVar4);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_18 = (long *)param_2[1];
    if (local_18 != (long *)0x0) {
      LOCK();
      local_18[1] = local_18[1] + 1;
      UNLOCK();
    }
    FUN_10017b49a(param_1,&local_20,param_3,param_4,(param_6 & 0xff) * 2,param_5);
    if (local_18 != (long *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}

