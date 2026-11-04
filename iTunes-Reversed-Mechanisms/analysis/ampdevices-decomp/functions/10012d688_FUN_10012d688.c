// name: FUN_10012d688
// address: 10012d688

void FUN_10012d688(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  
  iVar5 = FUN_1001ba026(param_3,"StoreServicesNotifications.CurrentUserPropertyChanged");
  if (iVar5 == 0) {
    lVar2 = *param_4;
    plVar3 = (long *)param_4[1];
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    if ((*(byte *)(lVar2 + 0x1b) & 0x10) != 0) {
      lVar6 = FUN_100156d72();
      lVar2 = *(long *)(lVar6 + 0xe8);
      plVar4 = *(long **)(lVar6 + 0xf0);
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar4[1] = plVar4[1] + 1;
        UNLOCK();
      }
      if (lVar2 != 0) {
        FUN_10012d780();
      }
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar2 = *plVar4;
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}

