// name: FUN_10012cf18
// address: 10012cf18

void FUN_10012cf18(void)

{
  long *plVar1;
  long lVar2;
  long local_58;
  long *local_50;
  undefined8 local_48;
  long *plStack_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  long *plStack_20;
  
  FUN_1001b5f9c(&local_58);
  if (local_58 != 0) {
    local_28 = 0;
    plStack_20 = (long *)0x0;
    FUN_1001b7b04(local_38,"StoreServicesNotifications.BagChanged");
    local_48 = 0;
    plStack_40 = (long *)0x0;
    FUN_1001b6a1e(local_58,&local_28,local_38);
    if (plStack_40 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_1001b7a50(local_38);
    if (plStack_20 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_20 + 0x10))(plStack_20);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
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
  return;
}

