// name: FUN_10016843e
// address: 10016843e

undefined1 FUN_10016843e(long param_1,long param_2,char *param_3,char param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100675a90(uVar3);
    }
  }
  else if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100675a1a(uVar3);
    }
  }
  else if (param_3 == (char *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006759a4(uVar3);
    }
  }
  else {
    if (param_4 == '\0' && *param_3 == '\0') {
      return 0;
    }
    uVar3 = FUN_100170651();
    lVar4 = FUN_100172473(uVar3,param_3,0x8000100);
    if (lVar4 != 0) {
      uVar1 = FUN_100171502(param_1,param_2,lVar4);
      FUN_10017060f(lVar4);
      return uVar1;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10067592e(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

