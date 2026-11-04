// name: FUN_1001cd46b
// address: 1001cd46b

undefined8 FUN_1001cd46b(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_100172473(DAT_1008c4d90,param_1,0x8000100);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006af2c6(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffff94;
    goto LAB_1001cd532;
  }
  if ((param_2 == 0) || (*(long *)(param_2 + 8) == 0)) {
    if (DAT_1008a2330 == 0) {
      DAT_1008a2330 = *(long *)PTR__kCFPreferencesCurrentApplication_10082e0f8;
    }
    FUN_10017232a(lVar2,0);
    if (param_2 != 0) goto LAB_1001cd4da;
LAB_1001cd4e3:
    if (DAT_1008a2330 == 0) {
      DAT_1008a2330 = *(long *)PTR__kCFPreferencesCurrentApplication_10082e0f8;
    }
  }
  else {
    FUN_10017232a(lVar2,0);
LAB_1001cd4da:
    if (*(long *)(param_2 + 8) == 0) goto LAB_1001cd4e3;
  }
  FUN_10017236c();
  uVar3 = 0;
LAB_1001cd532:
  FUN_10017060f(lVar2);
  return uVar3;
}

