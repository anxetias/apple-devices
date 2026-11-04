// name: FUN_100168550
// address: 100168550

undefined1 FUN_100168550(long param_1,long param_2,short *param_3,char param_4)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_100675c68(uVar4);
    }
  }
  else if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_100675bf2(uVar4);
    }
  }
  else if (param_3 == (short *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_100675b7c(uVar4);
    }
  }
  else {
    if ((param_4 == '\0') && (*param_3 == 0)) {
      return 0;
    }
    lVar3 = FUN_1001e5b1d(param_3);
    if (lVar3 != 0) {
      uVar1 = FUN_100171502(param_1,param_2,lVar3);
      FUN_10017060f(lVar3);
      return uVar1;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_100675b06(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

