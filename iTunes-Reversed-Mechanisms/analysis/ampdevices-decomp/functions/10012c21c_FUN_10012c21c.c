// name: FUN_10012c21c
// address: 10012c21c

void FUN_10012c21c(void)

{
  long *plVar1;
  long lVar2;
  long local_20;
  long *local_18;
  
  FUN_1001b5f9c(&local_20);
  if (local_20 != 0) {
    FUN_1001b657a(local_20,DAT_10088fc30);
  }
  if (local_18 != (long *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_18 + 0x10))(local_18);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

