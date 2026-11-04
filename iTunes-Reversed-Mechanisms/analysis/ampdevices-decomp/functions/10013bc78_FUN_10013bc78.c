// name: FUN_10013bc78
// address: 10013bc78

undefined4 FUN_10013bc78(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x14) != 2)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10013da70(uVar3);
    }
    FUN_1001782e9(0,0);
    lVar4 = *param_1;
    if (lVar4 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_1002733d2(lVar4,param_2,param_3,param_4,1);
  return uVar2;
}

