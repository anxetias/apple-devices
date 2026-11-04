// name: FUN_1001628ba
// address: 1001628ba

undefined8 FUN_1001628ba(long param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100670c3f(uVar3);
    }
  }
  else if (param_3 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100670bc9(uVar3);
    }
  }
  else {
    lVar2 = FUN_1001748e1(param_3);
    if (lVar2 != 0) {
      uVar3 = FUN_100174925(param_3);
      uVar4 = _CFURLCredentialCreate(DAT_1008c4d90,lVar2,uVar3,0,2);
      FUN_10017060f(lVar2);
      FUN_10017060f(uVar3);
      return uVar4;
    }
    lVar2 = FUN_1001620b6();
    if (lVar2 != 0) {
      uVar3 = _CFURLCredentialStorageCopyDefaultCredentialForProtectionSpace
                        (*(undefined8 *)(param_1 + 0x90),lVar2);
      FUN_10017060f(lVar2);
      return uVar3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100670b53(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

