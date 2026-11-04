// name: FUN_100168c16
// address: 100168c16

undefined1 FUN_100168c16(float param_1,long param_2,long param_3,char param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006765a0(uVar3);
    }
  }
  else if (param_3 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10067652a(uVar3);
    }
  }
  else {
    if (param_1 == 0.0 && param_4 == '\0') {
      return 0;
    }
    uVar3 = FUN_100170651();
    lVar4 = FUN_100171f60(uVar3,0xc);
    if (lVar4 != 0) {
      uVar1 = FUN_100171502(param_2,param_3,lVar4);
      FUN_10017060f(lVar4);
      return uVar1;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006764b4(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

