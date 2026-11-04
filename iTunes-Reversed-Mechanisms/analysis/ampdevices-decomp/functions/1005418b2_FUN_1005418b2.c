// name: FUN_1005418b2
// address: 1005418b2

undefined8 FUN_1005418b2(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long *local_28;
  long *local_20;
  
  (**(code **)(*param_1 + 0x130))(&local_28,param_1,0);
  if (local_28 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*local_28 + 0x30))();
  }
  if (local_20 != (long *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_20 + 0x10))(local_20);
      std::__shared_weak_count::__release_weak();
    }
  }
  return uVar3;
}

