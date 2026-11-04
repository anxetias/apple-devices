// name: FUN_100168e2e
// address: 100168e2e

void FUN_100168e2e(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100676866(uVar3);
    }
  }
  else if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006767f0(uVar3);
    }
  }
  else {
    uVar3 = FUN_100170651();
    lVar2 = FUN_100170dc5(uVar3,param_3,param_4);
    if (lVar2 != 0) {
      FUN_100171502(param_1,param_2,lVar2);
      FUN_10017060f(lVar2);
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067677a(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

