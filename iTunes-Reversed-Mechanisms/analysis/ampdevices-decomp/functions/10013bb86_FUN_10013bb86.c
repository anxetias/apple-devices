// name: FUN_10013bb86
// address: 10013bb86

undefined8 FUN_10013bb86(undefined8 param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x14) != 2)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10013d982(uVar2);
    }
    FUN_1001782e9(0,0);
    lVar3 = *param_2;
    if (lVar3 == 0) {
      FUN_1001b7a44(param_1);
      return param_1;
    }
  }
  FUN_10027310e(param_1,lVar3,param_3,0);
  return param_1;
}

