// name: FUN_1001bb1da
// address: 1001bb1da

undefined8 * FUN_1001bb1da(undefined8 *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_40 [16];
  
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a2312(uVar3);
    }
    FUN_1001782e9(0,0);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    lVar2 = FUN_10017076e(param_2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (0 < lVar2) {
      lVar4 = 0;
      do {
        uVar3 = FUN_100164a01(param_2,lVar4);
        FUN_1001b7e36(local_40,uVar3);
        FUN_1001bd236(param_1,local_40);
        FUN_1001b811c(local_40);
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
    }
  }
  return param_1;
}

