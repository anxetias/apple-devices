// name: FUN_1001cdb90
// address: 1001cdb90

undefined8 FUN_1001cdb90(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = FUN_100172473(DAT_1008c4d98,param_1,0x8000100);
  if (lVar2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006af676(uVar4);
    }
  }
  else {
    lVar3 = FUN_100165701(DAT_1008c4d98,param_2);
    if (lVar3 != 0) {
      if ((param_3 == 0) || (*(long *)(param_3 + 8) == 0)) {
        if (DAT_1008a2330 == 0) {
          DAT_1008a2330 = *(long *)PTR__kCFPreferencesCurrentApplication_10082e0f8;
        }
        FUN_10017232a(lVar2,lVar3);
        if (param_3 != 0) goto LAB_1001cdc48;
LAB_1001cdc51:
        if (DAT_1008a2330 == 0) {
          DAT_1008a2330 = *(long *)PTR__kCFPreferencesCurrentApplication_10082e0f8;
        }
      }
      else {
        FUN_10017232a(lVar2,lVar3);
LAB_1001cdc48:
        if (*(long *)(param_3 + 8) == 0) goto LAB_1001cdc51;
      }
      FUN_10017236c();
      uVar4 = 0;
      goto LAB_1001cdca3;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006af600(uVar4);
    }
  }
  lVar3 = 0;
  FUN_1001782e9(0,0);
  uVar4 = 0xffffff94;
LAB_1001cdca3:
  FUN_10017060f(lVar2);
  FUN_10017060f(lVar3);
  return uVar4;
}

