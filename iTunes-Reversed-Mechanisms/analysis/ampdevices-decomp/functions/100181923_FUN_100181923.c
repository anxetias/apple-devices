// name: FUN_100181923
// address: 100181923

long FUN_100181923(void)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = DAT_1008c4da0;
  if ((DAT_1008c4da0 != 0) && (*(int *)(DAT_1008c4da0 + 0x10) != 0x4d56496d)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006893f2(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  return lVar1;
}

