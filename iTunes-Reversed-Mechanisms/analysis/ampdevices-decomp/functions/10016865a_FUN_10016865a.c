// name: FUN_10016865a
// address: 10016865a

undefined1 FUN_10016865a(long param_1,long param_2,undefined8 param_3,char param_4)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_100675dca(uVar4);
    }
  }
  else if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_100675d54(uVar4);
    }
  }
  else {
    bVar1 = FUN_1001b8428(param_3);
    if ((param_4 == '\0' & bVar1) != 0) {
      return 0;
    }
    uVar4 = FUN_100170651(param_1);
    lVar5 = FUN_1001b8c6c(param_3,uVar4);
    if (lVar5 != 0) {
      uVar2 = FUN_100171502(param_1,param_2,lVar5);
      FUN_10017060f(lVar5);
      return uVar2;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_100675cde(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

