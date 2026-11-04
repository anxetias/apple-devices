// name: FUN_10064d1df
// address: 10064d1df

void FUN_10064d1df(long param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = FUN_1004de449(param_2);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    lVar3 = FUN_1004de449(param_2);
    if (lVar3 == 0) {
      uVar6 = 0;
    }
    else {
      bVar1 = FUN_1004e7efc(lVar3);
      uVar6 = (ulong)bVar1;
    }
    lVar3 = FUN_1004de449(param_2);
    if ((lVar3 != 0) && ((*(char *)(lVar3 + 0x6acf) != '\0' || (*(int *)(lVar3 + 0x6b0c) != 0)))) {
      uVar6 = uVar6 | 2;
    }
    uVar4 = FUN_1004de449(param_2);
    cVar2 = FUN_1005c9e10(uVar4);
    uVar5 = uVar6 | 4;
    if (cVar2 == '\0') {
      uVar5 = uVar6;
    }
    cVar2 = FUN_1005044f5(param_2);
    uVar6 = uVar5 | 8;
    if (cVar2 == '\0') {
      uVar6 = uVar5;
    }
    cVar2 = FUN_1005045ac(param_2);
    uVar5 = uVar6 | 0x10;
    if (cVar2 == '\0') {
      uVar5 = uVar6;
    }
    cVar2 = FUN_100504663(param_2);
    uVar6 = uVar5 | 0x20;
    if (cVar2 == '\0') {
      uVar6 = uVar5;
    }
  }
  cVar2 = FUN_10039e16c(param_2);
  if (cVar2 == '\0') {
    cVar2 = FUN_10039e077(param_2,1,0);
    if (cVar2 == '\0') {
      cVar2 = FUN_10039e077(param_2,1,1);
      if (cVar2 != '\0') {
        uVar6 = uVar6 | 0x40;
      }
    }
    else {
      uVar6 = uVar6 | 0x80;
    }
  }
  else {
    uVar6 = uVar6 | 0x100;
  }
                    /* WARNING: Could not recover jumptable at 0x00010064d306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar6,0);
  return;
}

