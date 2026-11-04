// name: FUN_100134e22
// address: 100134e22

void FUN_100134e22(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 local_58;
  long *local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  long *plStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_1001b5f9c(&local_58);
  local_38 = 0;
  plStack_30 = (long *)0x0;
  FUN_1001b7b04(local_48,"StoreServicesNotifications.MachineAuthorized");
  local_28 = *(undefined4 *)(param_1 + 8);
  uStack_24 = *(undefined4 *)(param_1 + 0xc);
  uStack_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  if (*(long *)(param_1 + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  FUN_1001b6a1e(local_58,&local_38,local_48,&local_28);
  plVar1 = (long *)CONCAT44(uStack_1c,uStack_20);
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
  FUN_1001b7a50(local_48);
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_50 + 0x10))(local_50);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

