// name: FUN_1001c271d
// address: 1001c271d

long FUN_1001c271d(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  if (param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a62cf(uVar3);
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      if (((ulong)param_1 & 7) != 0) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          FUN_1006a616d(uVar3);
        }
        FUN_1001782e9(0,1);
      }
      if (((ulong)param_2 & 7) != 0) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          FUN_1006a61e3(uVar3);
        }
        FUN_1001782e9(0,1);
      }
      do {
        lVar1 = *param_1;
        *param_2 = lVar1;
        LOCK();
        lVar4 = *param_1;
        bVar5 = lVar1 == lVar4;
        if (bVar5) {
          *param_1 = (long)param_2;
          lVar4 = lVar1;
        }
        UNLOCK();
      } while (!bVar5);
      return lVar4;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a6259(uVar3);
    }
  }
  lVar4 = FUN_1001782e9(0,1);
  return lVar4;
}

