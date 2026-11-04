// name: FUN_10013b608
// address: 10013b608

undefined8 FUN_10013b608(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_78;
  long *plStack_70;
  undefined8 local_68;
  long *plStack_60;
  undefined8 local_58;
  long *plStack_50;
  char local_48;
  undefined4 local_34;
  
  local_34 = param_3;
  std::mutex::lock();
  uVar2 = *(ulong *)(param_1 + 0x28);
  if (uVar2 < *(ulong *)(param_1 + 0x30)) {
    FUN_10028593a(uVar2,param_2);
    *(undefined4 *)(uVar2 + 0x30) = param_3;
    lVar3 = uVar2 + 0x40;
    *(long *)(param_1 + 0x28) = lVar3;
  }
  else {
    lVar3 = FUN_10013bd36(param_1 + 0x20,param_2,&local_34);
  }
  *(long *)(param_1 + 0x28) = lVar3;
  std::mutex::unlock();
  FUN_10013aaa4(&local_58,param_1);
  if (local_48 == '\0') {
    local_68 = local_58;
    plStack_60 = plStack_50;
    local_78 = local_58;
    plStack_70 = plStack_50;
    local_58 = 0;
    plStack_50 = (long *)0x0;
    FUN_10013ad98(param_1,&local_78,0);
    if (plStack_60 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*plStack_60 + 0x10))(plStack_60);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  return 1;
}

