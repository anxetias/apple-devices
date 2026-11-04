// name: FUN_100469a6c
// address: 100469a6c

void FUN_100469a6c(int param_1,undefined1 *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 local_20;
  long *local_18;
  
  if (param_1 == 0x706d6572) {
    if (DAT_1008c76a0 != 0) {
      cVar3 = FUN_1004afa71(0,2);
      if (cVar3 != '\0') {
        *param_2 = 1;
      }
    }
  }
  else if (param_1 == 0x646d6763) {
    FUN_10025b7fa(&local_20);
    FUN_100469b0a(local_20,"all downloads completed");
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
  }
  return;
}

