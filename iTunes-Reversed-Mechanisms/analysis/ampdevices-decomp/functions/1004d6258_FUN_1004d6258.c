// name: FUN_1004d6258
// address: 1004d6258

ulong FUN_1004d6258(void)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long local_28;
  long *local_20;
  
  cVar3 = _CRIsAutoSubmitEnabled();
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  else {
    FUN_1004c9e84(&local_28);
    if (local_28 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71((int7)((ulong)&local_28 >> 8),*(undefined1 *)(local_28 + 0x18));
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
  }
  return uVar4 & 0xffffffff;
}

