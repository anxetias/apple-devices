// name: FUN_10016909e
// address: 10016909e

void FUN_10016909e(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100676ba4(uVar3);
    }
  }
  else if (param_3 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100676b2e(uVar3);
    }
  }
  else {
    uVar3 = FUN_100170651();
    lVar2 = FUN_1001711ec(param_1,uVar3);
    if (lVar2 != 0) {
      FUN_100171502(param_2,param_3,lVar2);
      FUN_10017060f(lVar2);
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100676ab8(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

