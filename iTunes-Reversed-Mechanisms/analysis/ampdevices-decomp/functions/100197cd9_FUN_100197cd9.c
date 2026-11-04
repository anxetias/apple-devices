// name: FUN_100197cd9
// address: 100197cd9

undefined8 FUN_100197cd9(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_100171799(DAT_1008c4d98);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100696a52(uVar3);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  uVar3 = FUN_10017183c(lVar2,param_1,param_2);
  return uVar3;
}

