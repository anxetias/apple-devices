// name: FUN_1001eb924
// address: 1001eb924

undefined8 FUN_1001eb924(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = FUN_1001b8d0c(param_2);
  if (param_1 == 0) {
    param_1 = _CFBundleGetMainBundle();
    if (param_1 != 0) goto LAB_1001eb952;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c3b49(uVar4);
    }
    lVar3 = 0;
  }
  else {
LAB_1001eb952:
    uVar4 = 0;
    lVar3 = FUN_100174d30(param_1,uVar2,0,0);
    if (lVar3 == 0) {
      uVar4 = 0xffffffd5;
      lVar3 = 0;
      goto LAB_1001eb9d6;
    }
    cVar1 = FUN_10016ffd2(lVar3,param_3,0);
    if (cVar1 != '\0') goto LAB_1001eb9d6;
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c3ad3(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffd5;
LAB_1001eb9d6:
  FUN_10017060f(uVar2);
  FUN_10017060f(lVar3);
  return uVar4;
}

