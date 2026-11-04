// name: FUN_1003e328a
// address: 1003e328a

int FUN_1003e328a(long param_1)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  undefined8 local_58;
  long *local_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  long *plStack_30;
  int local_1c;
  
  bVar3 = FUN_1003df2de(*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  local_1c = (uint)bVar3 * 4 + -4;
  iVar4 = -4;
  if (bVar3 != 0) {
    local_38 = 0;
    plStack_30 = (long *)0x0;
    FUN_1005323e8(&local_58,*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),1,1,0,
                  &local_1c);
    local_38 = local_58;
    plStack_30 = local_50;
    local_48 = local_58;
    local_40 = local_50;
    if (local_50 != (long *)0x0) {
      LOCK();
      local_50[1] = local_50[1] + 1;
      UNLOCK();
    }
    local_1c = FUN_1003df7d2(&local_48,FUN_1002a90a4,param_1,"DIFU IFU");
    if (local_50 != (long *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
        std::__shared_weak_count::__release_weak();
      }
    }
    iVar4 = local_1c;
    if (plStack_30 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_30 + 0x10))(plStack_30);
        std::__shared_weak_count::__release_weak();
        iVar4 = local_1c;
      }
    }
  }
  return iVar4;
}

