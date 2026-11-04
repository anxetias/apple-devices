// name: FUN_10013d092
// address: 10013d092

void FUN_10013d092(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long local_70 [2];
  undefined1 local_60 [16];
  long local_50 [2];
  undefined1 local_40 [8];
  long local_38;
  long *local_30;
  
  FUN_10032f0f2(local_50);
  lVar1 = *param_2;
  if (lVar1 == 0) {
    FUN_1001a7b90(local_40);
    FUN_10032f0f2(local_70);
    FUN_10032f0f2(&local_38);
    cVar2 = FUN_1001a92ae(param_3,local_40,&local_38);
    plVar3 = local_70;
    if (cVar2 != '\0') {
      plVar3 = &local_38;
    }
    FUN_1001a7a9e(local_60,plVar3);
    FUN_1001a85d4(&local_38);
    FUN_1001a7b1c(local_50,local_60);
    FUN_1001a85d4(local_60);
    FUN_1001a85d4(local_70);
    FUN_1001ab240(local_40);
    if (local_50[0] != 0) {
      local_38 = *(long *)(param_1 + 0x20);
      goto LAB_10013d171;
    }
    cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar2 != '\0') {
      FUN_10013dbe2();
    }
  }
  else {
    cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar2 != '\0') {
      FUN_10013db81(lVar1);
    }
  }
  local_38 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(local_38 + 0x30) = 3;
LAB_10013d171:
  local_30 = *(long **)(param_1 + 0x28);
  if (local_30 != (long *)0x0) {
    LOCK();
    local_30[1] = local_30[1] + 1;
    UNLOCK();
  }
  FUN_10013b192(param_1 + 8,local_50,&local_38);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_30 + 0x10))(local_30);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_1001a85d4(local_50);
  return;
}

