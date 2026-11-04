// name: FUN_100168746
// address: 100168746

undefined1 FUN_100168746(long param_1,long param_2,long param_3,char param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100675f2c(uVar3);
    }
  }
  else if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100675eb6(uVar3);
    }
  }
  else {
    if (param_3 == 0 && param_4 == '\0') {
      return 0;
    }
    uVar3 = FUN_100170651();
    lVar4 = FUN_100171f60(uVar3,4);
    if (lVar4 != 0) {
      uVar1 = FUN_100171502(param_1,param_2,lVar4);
      FUN_10017060f(lVar4);
      return uVar1;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_100675e40(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

