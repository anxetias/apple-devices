// name: FUN_1001d235e
// address: 1001d235e

long FUN_1001d235e(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b289a(uVar2);
    }
    lVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = *param_1;
    if (param_1[1] != 0) {
      lVar3 = lVar3 + param_1[1] * param_1[2];
    }
  }
  return lVar3;
}

