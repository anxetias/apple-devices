// name: FUN_100153a3a
// address: 100153a3a

/* WARNING: Removing unreachable block (ram,0x000100153a8f) */
/* WARNING: Removing unreachable block (ram,0x000100153aa1) */

void FUN_100153a3a(void *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 local_48;
  long *local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  long *plStack_20;
  
  FUN_1001b5f9c(&local_48);
  local_28 = 0;
  plStack_20 = (long *)0x0;
  FUN_1001b7b04(local_38,"StoreServicesNotifications.CurrentUserChanged");
  FUN_1001b6a1e(local_48,&local_28,local_38);
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
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_40 + 0x10))(local_40);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (param_1 != (void *)0x0) {
    operator_delete(param_1);
  }
  return;
}

