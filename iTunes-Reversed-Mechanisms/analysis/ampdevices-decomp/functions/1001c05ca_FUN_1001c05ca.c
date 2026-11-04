// name: FUN_1001c05ca
// address: 1001c05ca

undefined1 (*) [16]
FUN_1001c05ca(undefined1 (*param_1) [16],long *param_2,long *param_3,long *param_4)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  long local_38;
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    iVar4 = (int)param_2[1];
    if (iVar4 == 0) {
      iVar6 = 0x40;
    }
    else {
      iVar6 = iVar4 * 2;
      if ((int)param_2[2] * 6 < iVar4 * 2) {
        iVar6 = iVar4;
      }
    }
    FUN_1001c085a(param_2,iVar6);
    lVar5 = *param_2;
    if (lVar5 == 0) {
      uVar3 = FUN_1001cc310();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_1006a478d(uVar3);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
      FUN_1001782e9(0,0);
      lVar5 = *param_2;
    }
  }
  local_38 = *param_3;
  uVar9 = ~(local_38 << 0x20) + local_38;
  uVar9 = uVar9 >> 0x16 ^ uVar9;
  uVar9 = ~(uVar9 << 0xd) + uVar9;
  uVar9 = (uVar9 >> 8 ^ uVar9) * 9;
  uVar9 = uVar9 >> 0xf ^ uVar9;
  uVar9 = ~(uVar9 << 0x1b) + uVar9;
  uVar7 = (uint)(uVar9 >> 0x1f) ^ (uint)uVar9;
  uVar12 = *(uint *)((long)param_2 + 0xc) & uVar7;
  plVar11 = (long *)(lVar5 + (long)(int)uVar12 * 0x10);
  lVar13 = *(long *)(lVar5 + (long)(int)uVar12 * 0x10);
  if (lVar13 != 0) {
    uVar8 = (uVar7 >> 0x17) + ~uVar7;
    uVar8 = uVar8 * 0x1000 ^ uVar8;
    uVar8 = uVar8 >> 7 ^ uVar8;
    uVar8 = uVar8 * 4 ^ uVar8;
    plVar10 = (long *)0x0;
    uVar7 = 0;
    do {
      if (lVar13 == local_38) {
        lVar13 = param_2[1];
        *(long **)*param_1 = plVar11;
        *(long *)(*param_1 + 8) = lVar5 + (long)(int)lVar13 * 0x10;
        param_1[1][0] = 0;
        return param_1;
      }
      if (lVar13 == -1) {
        plVar10 = plVar11;
      }
      if (uVar7 == 0) {
        uVar7 = uVar8 >> 0x14 ^ uVar8 | 1;
      }
      uVar12 = uVar12 + uVar7 & *(uint *)((long)param_2 + 0xc);
      plVar11 = (long *)(lVar5 + (long)(int)uVar12 * 0x10);
      lVar13 = *(long *)(lVar5 + (long)(int)uVar12 * 0x10);
    } while (lVar13 != 0);
    if (plVar10 != (long *)0x0) {
      *plVar10 = 0;
      plVar10[1] = 0;
      iVar4 = *(int *)((long)param_2 + 0x14) + -1;
      *(int *)((long)param_2 + 0x14) = iVar4;
      local_38 = *param_3;
      goto LAB_1001c0760;
    }
  }
  plVar10 = plVar11;
  iVar4 = *(int *)((long)param_2 + 0x14);
LAB_1001c0760:
  *plVar10 = local_38;
  plVar10[1] = *param_4;
  lVar5 = param_2[2];
  iVar6 = (int)lVar5 + 1;
  *(int *)(param_2 + 2) = iVar6;
  iVar1 = (int)param_2[1];
  if (((int)lVar5 + iVar4 + 1) * 2 < iVar1) {
    lVar5 = *param_2;
    *(long **)*param_1 = plVar10;
    *(long *)(*param_1 + 8) = (long)iVar1 * 0x10 + lVar5;
    param_1[1][0] = 1;
  }
  else {
    iVar4 = iVar1 * 2;
    if (iVar6 * 6 < iVar1 * 2) {
      iVar4 = iVar1;
    }
    iVar6 = 0x40;
    if (iVar1 != 0) {
      iVar6 = iVar4;
    }
    FUN_1001c085a(param_2,iVar6);
    auVar14 = FUN_1001c0b40(param_2,&local_38);
    *param_1 = auVar14;
    param_1[1][0] = 1;
    if (auVar14._0_8_ == (long)(int)param_2[1] * 0x10 + *param_2) {
      uVar3 = FUN_1001cc310();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_1006a4803(uVar3);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
      FUN_1001782e9(0,0);
    }
  }
  return param_1;
}

