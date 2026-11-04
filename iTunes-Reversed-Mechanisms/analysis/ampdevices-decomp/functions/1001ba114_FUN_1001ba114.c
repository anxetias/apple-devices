// name: FUN_1001ba114
// address: 1001ba114

undefined8 FUN_1001ba114(long *param_1,long *param_2,uint param_3)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined2 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  size_t sVar10;
  undefined4 extraout_var;
  ushort uVar11;
  ulong uVar12;
  ushort uVar13;
  ushort uVar14;
  bool bVar15;
  
  if ((((long *)*param_2 == (long *)0x0) || (*(long *)*param_2 == 0)) &&
     (((long *)param_2[1] == (long *)0x0 || (*(long *)param_2[1] == 0)))) {
    return 0;
  }
  if (param_3 != 0) {
    if ((param_3 & 4) != 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006a204e(uVar4);
      }
      FUN_1001782e9(0,0);
      param_3 = param_3 & 0xfffffffb;
    }
    uVar4 = FUN_1001ba31c(param_1,param_2,param_3 | 8);
    return uVar4;
  }
  if ((ulong *)*param_1 == (ulong *)0x0) {
    if ((ulong *)param_1[1] == (ulong *)0x0) {
      return 0;
    }
    uVar8 = *(ulong *)param_1[1];
    uVar5 = FUN_1001b83f0(param_2);
    if (uVar8 < uVar5) {
      return 0;
    }
    lVar1 = param_1[1];
    lVar7 = param_2[1];
    if (lVar7 == 0) {
      puVar9 = &DAT_100711b02;
      if (*param_2 != 0) {
        FUN_1001b87d0(param_2);
        lVar7 = param_2[1];
        if (lVar7 != 0) goto LAB_1001ba2b9;
      }
    }
    else {
LAB_1001ba2b9:
      puVar9 = (undefined *)(lVar7 + 0xc);
    }
    sVar10 = FUN_1001b83f0(param_2);
    iVar3 = _memcmp((void *)(lVar1 + 0xc),puVar9,sVar10);
    uVar8 = CONCAT44(extraout_var,iVar3);
    bVar15 = iVar3 == 0;
    goto LAB_1001ba2f4;
  }
  uVar8 = *(ulong *)*param_1;
  uVar5 = FUN_1001b8378(param_2);
  if (uVar8 < uVar5) {
    return 0;
  }
  lVar1 = *param_1;
  lVar7 = *param_2;
  if (lVar7 == 0) {
    puVar6 = &DAT_100711b00;
    if (param_2[1] != 0) {
      FUN_1001b8454(param_2);
      lVar7 = *param_2;
      if (lVar7 != 0) goto LAB_1001ba1c8;
    }
  }
  else {
LAB_1001ba1c8:
    puVar6 = (undefined2 *)(lVar7 + 0xc);
  }
  lVar7 = FUN_1001b8378(param_2);
  if (lVar7 == 0) {
    uVar11 = 0;
    uVar13 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = lVar7 * 2 - 2;
    uVar5 = 0;
    do {
      uVar11 = *(ushort *)(lVar1 + 0xc + uVar5);
      uVar12 = (ulong)uVar11;
      uVar13 = *(ushort *)((long)puVar6 + uVar5);
      if (uVar11 != uVar13) break;
      bVar15 = uVar8 != uVar5;
      uVar5 = uVar5 + 2;
    } while (bVar15);
    if (((uVar11 != uVar13) && (uVar8 = uVar12, 0xd7ff < uVar11)) && (0xd7ff < uVar13)) {
      uVar14 = uVar11 + 0x2000;
      bVar15 = uVar11 < 0xe000;
      uVar11 = uVar11 - 0x800;
      if (bVar15) {
        uVar11 = uVar14;
      }
      if (uVar13 < 0xe000) {
        uVar13 = uVar13 + 0x2000;
      }
      else {
        uVar13 = uVar13 - 0x800;
      }
    }
  }
  bVar15 = uVar11 == uVar13;
LAB_1001ba2f4:
  return CONCAT71((int7)(uVar8 >> 8),bVar15);
}

