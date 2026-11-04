// name: FUN_10016832e
// address: 10016832e

void FUN_10016832e(long param_1,long param_2,char *param_3,char param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006758b8(uVar3);
    }
  }
  else if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100675842(uVar3);
    }
  }
  else if (param_3 == (char *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006757cc(uVar3);
    }
  }
  else {
    if (param_4 == '\0' && *param_3 == '\0') {
      return;
    }
    uVar3 = FUN_100170651();
    lVar2 = FUN_100172473(uVar3,param_3,0x8000100);
    if (lVar2 != 0) {
      FUN_1001714de(param_1,param_2,lVar2);
      FUN_10017060f(lVar2);
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100675756(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

