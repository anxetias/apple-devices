// name: releaseDelegate
// address: 10044b915

/* Function Stack Size: 0x10 bytes */

void AMPLClientEventsDelegate::releaseDelegate(ID param_1,SEL param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  _objc_sync_enter();
  plVar3 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
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
  _objc_sync_exit(param_1);
  return;
}

