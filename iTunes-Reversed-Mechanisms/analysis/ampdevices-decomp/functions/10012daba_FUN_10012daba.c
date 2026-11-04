// name: FUN_10012daba
// address: 10012daba

undefined8 FUN_10012daba(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long local_48;
  long *local_40;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  LOCK();
  *(undefined1 *)(param_1 + 0x18) = 1;
  UNLOCK();
  FUN_1001b5f9c(&local_48);
  if (local_48 != 0) {
    local_28 = *(undefined4 *)(param_1 + 0x88);
    uStack_24 = *(undefined4 *)(param_1 + 0x8c);
    uStack_20 = *(undefined4 *)(param_1 + 0x90);
    uStack_1c = *(undefined4 *)(param_1 + 0x94);
    if (*(long *)(param_1 + 0x90) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x90) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    FUN_1001b7b04(local_38,"StoreServicesNotifications.CurrentUserPropertyChanged");
    FUN_1001b62e2(local_48,&local_28,local_38);
    FUN_1001b7a50(local_38);
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
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  return 1;
}

