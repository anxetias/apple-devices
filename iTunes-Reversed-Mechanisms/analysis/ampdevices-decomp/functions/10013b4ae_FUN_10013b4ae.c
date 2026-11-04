// name: FUN_10013b4ae
// address: 10013b4ae

void FUN_10013b4ae(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plStack_20;
  
  if (*(char *)*param_1 == '\0') {
    plVar3 = (long *)param_1[1];
    plStack_20 = (long *)0x0;
    if (plVar3[1] != 0) {
      plStack_20 = (long *)std::__shared_weak_count::lock();
      if (plStack_20 != (long *)0x0) {
        if (*plVar3 != 0) {
          puVar4 = (undefined8 *)param_1[2];
          plVar3 = (long *)puVar4[1];
          *puVar4 = 0;
          puVar4[1] = 0;
          FUN_10013acce();
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar2 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
      }
    }
    if (plStack_20 != (long *)0x0) {
      LOCK();
      plVar3 = plStack_20 + 1;
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plStack_20 + 0x10))(plStack_20);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}

