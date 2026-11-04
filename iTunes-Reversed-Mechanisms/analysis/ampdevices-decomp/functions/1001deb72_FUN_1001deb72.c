// name: FUN_1001deb72
// address: 1001deb72

undefined1 (*) [16]
FUN_1001deb72(undefined1 (*param_1) [16],long *param_2,int *param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 local_34 [4];
  
  lVar7 = *param_2;
  if (lVar7 == 0) {
    iVar6 = (int)param_2[1];
    if (iVar6 == 0) {
      iVar4 = 0x40;
    }
    else {
      iVar4 = iVar6 * 2;
      if ((int)param_2[2] * 6 < iVar6 * 2) {
        iVar4 = iVar6;
      }
    }
    FUN_1001dedac(param_2,iVar4);
    lVar7 = *param_2;
    if (lVar7 == 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        FUN_1006b9931(uVar5);
      }
      FUN_1001782e9(0,0);
      lVar7 = *param_2;
    }
  }
  iVar4 = *param_3;
  uVar8 = ~(iVar4 << 0xf) + iVar4;
  uVar8 = (uVar8 >> 10 ^ uVar8) * 9;
  uVar8 = uVar8 >> 6 ^ uVar8;
  uVar8 = ~(uVar8 << 0xb) + uVar8;
  uVar12 = uVar8 >> 0x10 ^ uVar8;
  uVar11 = uVar12 & *(uint *)((long)param_2 + 0xc);
  piVar10 = (int *)(lVar7 + (long)(int)uVar11 * 8);
  iVar6 = *piVar10;
  if (iVar6 != 0) {
    uVar12 = (uVar8 >> 0x17) + ~uVar12;
    uVar12 = uVar12 * 0x1000 ^ uVar12;
    uVar12 = uVar12 >> 7 ^ uVar12;
    uVar12 = uVar12 * 4 ^ uVar12;
    piVar9 = (int *)0x0;
    uVar8 = 0;
    do {
      if (iVar6 == iVar4) {
        lVar2 = param_2[1];
        *(int **)*param_1 = piVar10;
        *(long *)(*param_1 + 8) = lVar7 + (long)(int)lVar2 * 8;
        param_1[1][0] = 0;
        return param_1;
      }
      if (iVar6 == -1) {
        piVar9 = piVar10;
      }
      if (uVar8 == 0) {
        uVar8 = uVar12 >> 0x14 ^ uVar12 | 1;
      }
      uVar11 = uVar11 + uVar8 & *(uint *)((long)param_2 + 0xc);
      piVar10 = (int *)(lVar7 + (long)(int)uVar11 * 8);
      iVar6 = *piVar10;
    } while (iVar6 != 0);
    if (piVar9 != (int *)0x0) {
      piVar9[0] = 0;
      piVar9[1] = 0;
      iVar6 = *(int *)((long)param_2 + 0x14) + -1;
      *(int *)((long)param_2 + 0x14) = iVar6;
      iVar4 = *param_3;
      goto LAB_1001decc5;
    }
  }
  piVar9 = piVar10;
  iVar6 = *(int *)((long)param_2 + 0x14);
LAB_1001decc5:
  *piVar9 = iVar4;
  piVar9[1] = *param_4;
  lVar7 = param_2[2];
  iVar4 = (int)lVar7 + 1;
  *(int *)(param_2 + 2) = iVar4;
  iVar1 = (int)param_2[1];
  if ((iVar6 + (int)lVar7 + 1) * 2 < iVar1) {
    lVar7 = *param_2;
    *(int **)*param_1 = piVar9;
    *(long *)(*param_1 + 8) = (long)iVar1 * 8 + lVar7;
    param_1[1][0] = 1;
  }
  else {
    iVar6 = iVar1 * 2;
    if (iVar4 * 6 < iVar1 * 2) {
      iVar6 = iVar1;
    }
    iVar4 = 0x40;
    if (iVar1 != 0) {
      iVar4 = iVar6;
    }
    FUN_1001dedac(param_2,iVar4);
    auVar13 = FUN_1001df012(param_2,local_34);
    *param_1 = auVar13;
    param_1[1][0] = 1;
    if (auVar13._0_8_ == (long)(int)param_2[1] * 8 + *param_2) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        FUN_1006b99a7(uVar5);
      }
      FUN_1001782e9(0,0);
    }
  }
  return param_1;
}

