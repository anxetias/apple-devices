// name: FUN_1001b8f86
// address: 1001b8f86

void FUN_1001b8f86(void)

{
  char cVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (DAT_10089fb70 != -1) {
    FUN_1006a1b96();
  }
  pvVar2 = _pthread_getspecific(DAT_10089fb78);
  if (pvVar2 == (void *)0x0) {
LAB_1001b9012:
    lVar3 = FUN_100171d7b();
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006a1bb0(uVar4);
      }
      lVar3 = 0;
      cVar1 = FUN_1001782e9(0,0);
      pvVar2 = (void *)0x0;
      if (cVar1 == '\0') goto LAB_1001b9087;
    }
  }
  else {
    lVar3 = FUN_100171d7b();
    uVar4 = FUN_10017217a(pvVar2);
    uVar4 = FUN_100171e5b(uVar4);
    FUN_100171e5b(lVar3);
    cVar1 = FUN_100170633(uVar4);
    if (cVar1 != '\0') goto LAB_1001b9087;
    pvVar2 = _pthread_getspecific(DAT_10089fb78);
    _pthread_setspecific(DAT_10089fb78,(void *)0x0);
    FUN_10017060f(pvVar2);
    if (lVar3 == 0) goto LAB_1001b9012;
  }
  pvVar2 = (void *)FUN_100172170(DAT_1008c4d98,lVar3,1);
  if (pvVar2 != (void *)0x0) {
    _pthread_setspecific(DAT_10089fb78,pvVar2);
  }
  pvVar2 = _pthread_getspecific(DAT_10089fb78);
LAB_1001b9087:
  FUN_10017060f(lVar3);
  FUN_1001705fc(pvVar2);
  return;
}

