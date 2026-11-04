// name: FUN_1001acfc8
// address: 1001acfc8

long FUN_1001acfc8(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  if ((lVar3 == 0) && (lVar3 = *param_1, lVar3 == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069f2c7(uVar2);
    }
    lVar3 = 0;
    FUN_1001782e9(0,0);
  }
  return lVar3;
}

