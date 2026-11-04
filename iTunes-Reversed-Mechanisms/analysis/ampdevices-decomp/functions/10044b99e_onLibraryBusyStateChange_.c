// name: onLibraryBusyStateChange:
// address: 10044b99e

/* Function Stack Size: 0x14 bytes */

void AMPLClientEventsDelegate::onLibraryBusyStateChange_(ID param_1,SEL param_2,bool param_3)

{
  long *plVar1;
  long lVar2;
  shared_ptr<AMPLibraryEventsDelegate> sVar3;
  undefined8 *local_28;
  long *plStack_20;
  
  if (param_1 == 0) {
    local_28 = (undefined8 *)0x0;
    plStack_20 = (long *)0x0;
  }
  else {
    sVar3 = getDelegate((ID)&local_28,(SEL)param_1);
    if (local_28 != (undefined8 *)0x0) {
      (**(code **)*local_28)(local_28,param_3 & 0xff,sVar3.field1_0x8);
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

