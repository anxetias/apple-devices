// name: FUN_1001e7935
// address: 1001e7935

long FUN_1001e7935(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = FUN_100171d7b();
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c04ae(uVar3);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  lVar4 = FUN_1001712f2(DAT_1008c4d90,lVar2,param_1,param_2);
  if (lVar4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c0524(uVar3);
    }
    cVar1 = FUN_1001782e9(0,0);
    if ((param_1 != 4) || (cVar1 == '\0')) goto LAB_1001e7a0c;
  }
  else if (param_1 != 4) goto LAB_1001e7a0c;
  lVar5 = FUN_1001712ae(DAT_1008c4d90,&cf_EEEEMMMdyyyy,0,lVar2);
  if (lVar5 != 0) {
    FUN_100171340(lVar4,lVar5);
    FUN_10017060f(lVar5);
  }
LAB_1001e7a0c:
  FUN_10017060f(lVar2);
  return lVar4;
}

