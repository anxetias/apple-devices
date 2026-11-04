// name: FUN_1002c38bf
// address: 1002c38bf

undefined8 FUN_1002c38bf(long param_1)

{
  long *plVar1;
  long lVar2;
  long local_30;
  long *local_28;
  long local_20;
  long *local_18;
  
  FUN_1002c3cd0(&local_30,param_1 + 8);
  local_20 = local_30;
  local_18 = local_28;
  *(undefined1 *)(DAT_1008c76a0 + 0x1a38) = 0;
  FUN_1002c3944(local_30 + 0x18);
  if (local_28 != (long *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_28 + 0x10))(local_28);
      std::__shared_weak_count::__release_weak();
    }
  }
  return 0;
}

