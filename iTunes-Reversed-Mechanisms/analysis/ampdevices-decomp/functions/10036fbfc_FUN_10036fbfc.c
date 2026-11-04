// name: FUN_10036fbfc
// address: 10036fbfc

int FUN_10036fbfc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  byte bVar6;
  bool bVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  iVar3 = _AMDeviceGetInterfaceType();
  bVar1 = 1;
  lVar5 = 0;
  do {
    iVar4 = FUN_1005c1860(param_1,FUN_10037059a,0,param_2 + lVar5,param_3 + lVar5);
    if (iVar4 != 0) {
      lVar5 = 0;
      bVar2 = true;
      do {
        bVar7 = bVar2;
        if (param_3[lVar5] != 0) {
          _AFCConnectionInvalidate();
          FUN_10017060f(param_3[lVar5]);
          param_3[lVar5] = 0;
        }
        if (param_2[lVar5] != 0) {
          _AMDServiceConnectionInvalidate();
          FUN_10017060f(param_2[lVar5]);
          param_2[lVar5] = 0;
        }
        lVar5 = 1;
        bVar2 = false;
      } while (bVar7);
      return iVar4;
    }
    bVar6 = ~bVar1;
    lVar5 = 1;
    bVar1 = 0;
  } while (!(bool)(bVar6 & 1 | iVar3 != 2));
  return 0;
}

