// name: FUN_10027cb73
// address: 10027cb73

void FUN_10027cb73(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long local_40;
  long local_38;
  long local_30;
  long *local_28;
  
  if (*(ID *)(param_1 + 0x20) != 0) {
    _objc_msgSend_stret((undefined *)&local_40,*(ID *)(param_1 + 0x20),PTR_s_owner_10088c588);
    local_30 = 0;
    if (local_38 != 0) {
      plVar2 = (long *)std::__shared_weak_count::lock();
      if (plVar2 == (long *)0x0) {
        lVar3 = 0;
      }
      else {
        local_30 = local_40;
        lVar3 = local_40;
      }
      local_28 = plVar2;
      if (local_38 != 0) {
        std::__shared_weak_count::__release_weak();
      }
      if (lVar3 != 0) {
        FUN_100386d04(lVar3,*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30,
                      *(undefined8 *)(param_1 + 0x30));
      }
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  return;
}

