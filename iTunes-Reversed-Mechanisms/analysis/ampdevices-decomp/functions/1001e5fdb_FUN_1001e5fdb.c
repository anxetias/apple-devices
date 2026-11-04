// name: FUN_1001e5fdb
// address: 1001e5fdb

long FUN_1001e5fdb(long param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bf6f2(uVar2);
    }
  }
  else {
    uVar2 = FUN_1001737f8();
    lVar3 = FUN_100173b73(uVar2,param_2);
    lVar4 = FUN_1001c63e1(lVar3 + 1);
    if (lVar4 != 0) {
      cVar1 = FUN_10017393c(param_1,lVar4,lVar3 + 1,param_2);
      if (cVar1 != '\0') {
        return lVar4;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006bf606(uVar2);
      }
      FUN_1001782e9(0,0);
      FUN_1001c64c1(lVar4);
      return 0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bf67c(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

