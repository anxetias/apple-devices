// name: FUN_100480f6c
// address: 100480f6c

long FUN_100480f6c(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long local_30;
  long *local_28;
  
  FUN_100480e23(&local_30,param_1,param_2);
  if (local_30 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(local_30 + 0x18);
    if ((char)param_2 == '\x01' && lVar3 == 0) {
      lVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      *(long *)(local_30 + 0x18) = lVar3;
    }
  }
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
  return lVar3;
}

