// name: FUN_100132ead
// address: 100132ead

char FUN_100132ead(void)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  FUN_100132b20();
  lVar1 = DAT_10088f490;
  LOCK();
  bVar5 = DAT_10088f4a0 == '\x02';
  cVar2 = DAT_10088f4a0;
  if (bVar5) {
    DAT_10088f4a0 = '\x03';
    cVar2 = '\x02';
  }
  UNLOCK();
  lVar4 = DAT_10088f488;
  if (bVar5) {
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0x30) {
      if (*(long **)(lVar4 + 0x20) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10016bf14();
      }
      (**(code **)(**(long **)(lVar4 + 0x20) + 0x30))();
    }
    FUN_10013338c(&DAT_10088f488,0,0,0);
    uVar3 = FUN_100156ce8();
    cVar2 = FUN_100156f26(uVar3);
    LOCK();
    DAT_10088f4a0 = '\0';
    UNLOCK();
  }
  return cVar2;
}

