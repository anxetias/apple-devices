// name: FUN_10044bcfd
// address: 10044bcfd

void FUN_10044bcfd(long param_1)

{
  long *plVar1;
  long lVar2;
  long *local_28;
  long *plStack_20;
  
  if (*(ID *)(param_1 + 0x20) == 0) {
    local_28 = (long *)0x0;
    plStack_20 = (long *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_28,*(ID *)(param_1 + 0x20),PTR_s_getDelegate_10088d168);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x10))
                (local_28,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30));
    }
  }
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
  return;
}

