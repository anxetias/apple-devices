// name: FUN_100181973
// address: 100181973

long FUN_100181973(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((param_1 == (long *)0x0) || ((int)param_1[2] != 0x4d56496d)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006894de(uVar2);
    }
    lVar3 = 0;
  }
  else {
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return 0;
    }
    if (*(int *)(lVar3 + 0x10) == 0x4d56496d) {
      return lVar3;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100689468(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return lVar3;
}

