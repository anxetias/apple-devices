// name: FUN_1001538e8
// address: 1001538e8

void FUN_1001538e8(undefined4 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 local_68;
  long *local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  long *plStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *local_20;
  
  local_20 = param_1;
  FUN_1001b5f9c(&local_68);
  local_48 = 0;
  plStack_40 = (long *)0x0;
  FUN_1001b7b04(local_58,"StoreServicesNotifications.CurrentUserPropertyChanged");
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  if (*(long *)(param_1 + 2) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 2) + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  FUN_1001b6a1e(local_68,&local_48,local_58,&local_38);
  plVar1 = (long *)CONCAT44(uStack_2c,uStack_30);
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
  FUN_1001b7a50(local_58);
  if (plStack_40 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*plStack_40 + 0x10))(plStack_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar3 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar4 = local_20;
  if (local_20 != (undefined4 *)0x0) {
    FUN_100205d70(local_20);
    operator_delete(puVar4);
  }
  return;
}

