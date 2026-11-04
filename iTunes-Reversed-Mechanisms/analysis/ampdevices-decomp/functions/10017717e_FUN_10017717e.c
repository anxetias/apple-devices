// name: FUN_10017717e
// address: 10017717e

int FUN_10017717e(int *param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  short *psVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63687064)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068327a(uVar3);
    }
    FUN_1001782e9(0,0);
    return 0;
  }
  if (param_3 < 0x70636664) {
    if (param_3 == 0x696d6167) {
LAB_1001772bb:
      lVar4 = *(long *)(param_1 + 0xc);
      if (lVar4 != 0) goto LAB_100177329;
      plVar11 = (long *)(param_1 + 0xc);
      iVar2 = FUN_100177051(*(undefined8 *)(param_1 + 6),0x706c6f63,plVar11);
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006831a2(iVar2,uVar3);
          return 0;
        }
        return 0;
      }
    }
    else {
      if (param_3 != 0x6e616d65) {
        return 0;
      }
      lVar4 = *(long *)(param_1 + 10);
      if (lVar4 != 0) goto LAB_100177329;
      plVar11 = (long *)(param_1 + 10);
      iVar2 = FUN_100177051(*(undefined8 *)(param_1 + 6),0x6e616d65,plVar11);
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_10068320e(iVar2,uVar3);
          return 0;
        }
        return 0;
      }
    }
  }
  else {
    if (param_3 == 0x70636664) goto LAB_1001772bb;
    if (param_3 != 0x75726c20) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0xe);
    if (lVar4 != 0) goto LAB_100177329;
    plVar11 = (long *)(param_1 + 0xe);
    iVar2 = FUN_100177051(*(undefined8 *)(param_1 + 6),0x75726c20,plVar11);
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100683136(iVar2,uVar3);
        return 0;
      }
      return 0;
    }
  }
  lVar4 = *plVar11;
  if (lVar4 == 0) {
    return 0;
  }
LAB_100177329:
  uVar6 = (ulong)*(uint *)(lVar4 + 4);
  uVar7 = 0;
  uVar8 = uVar7;
  if (uVar6 != 0) {
    do {
      if ((int)(param_2 + 0x96 + (uint)(param_2 == 0)) < *(int *)(lVar4 + 0xc + uVar7 * 8)) {
        uVar8 = uVar7;
        if (uVar7 == 0) {
          uVar6 = 0;
          if (param_4 == '\0') {
            return 0;
          }
          goto LAB_10017735f;
        }
        break;
      }
      uVar7 = uVar7 + 1;
      uVar8 = uVar6;
    } while (uVar6 != uVar7);
  }
  uVar9 = (int)uVar8 - 1;
  uVar6 = (ulong)uVar9;
  if (param_4 == '\0') {
    uVar12 = param_2 - *(int *)(lVar4 + 0xc + uVar6 * 8);
    uVar10 = -uVar12;
    if ((int)uVar10 < 0) {
      uVar10 = uVar12;
    }
    if (uVar10 < 500) {
      if (uVar9 == 0) {
        return 0;
      }
      psVar5 = (short *)(lVar4 + 8 + (ulong)((int)uVar8 - 2) * 8);
    }
    else {
      psVar5 = (short *)(lVar4 + 8 + uVar6 * 8);
    }
  }
  else {
LAB_10017735f:
    if (*(uint *)(lVar4 + 4) - 1 <= (uint)uVar6) {
      return 0;
    }
    psVar5 = (short *)(lVar4 + uVar6 * 8 + 0x10);
  }
  return (int)*psVar5;
}

