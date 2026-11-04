// name: onCloudClientFlagsChanged:forFlag:withValue:
// address: 10044bee2

/* Function Stack Size: 0x1c bytes */

void AMPLClientEventsDelegate::onCloudClientFlagsChanged_forFlag_withValue_
               (ID param_1,SEL param_2,unsigned_int param_3,unsigned_int param_4,bool param_5)

{
  long *plVar1;
  long lVar2;
  long *local_38;
  long *plStack_30;
  
  if (param_1 == 0) {
    local_38 = (long *)0x0;
    plStack_30 = (long *)0x0;
  }
  else {
    getDelegate((ID)&local_38,(SEL)param_1);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x28))(local_38,param_3,param_4,param_5 & 0xff);
    }
  }
  if (plStack_30 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

