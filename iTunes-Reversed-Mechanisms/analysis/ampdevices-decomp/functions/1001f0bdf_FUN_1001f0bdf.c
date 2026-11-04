// name: FUN_1001f0bdf
// address: 1001f0bdf

int FUN_1001f0bdf(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  void *pvVar16;
  uint uVar17;
  bool bVar18;
  long local_88;
  long local_80;
  long local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  long local_60;
  int local_54;
  byte local_50 [8];
  long local_48;
  long local_40;
  ulong local_38;
  
  if (param_1 == (undefined8 *)0x0 || param_5 != 0) {
    return -0x66;
  }
  if (param_1[0x12] == 0) {
    return -0x66;
  }
  if (param_1[0x28] != 0) {
    FUN_1001f023e(param_1);
  }
  lVar14 = FUN_1001a702e(param_1,param_1[0xc],param_1[0xf] + param_1[0x27],0);
  if (lVar14 != 0) {
    return -0x67;
  }
  local_70 = param_3;
  local_68 = param_2;
  local_54 = param_4;
  uVar9 = FUN_1001f1537(param_1,param_1[0xc],&local_88);
  local_48 = CONCAT44(local_48._4_4_,uVar9);
  local_78 = local_88;
  iVar10 = FUN_1001f1744(param_1,param_1[0xc],&local_38);
  iVar11 = FUN_1001f1744(param_1,param_1[0xc],local_50);
  iVar12 = FUN_1001f1744(param_1,param_1[0xc],&local_38);
  local_40._0_4_ = 0xffffffff;
  uVar17 = 0xffffffff;
  if (iVar12 == 0) {
    uVar13 = 0;
    if (local_78 != 0x4034b50) {
      uVar13 = 0xffffff99;
    }
    uVar17 = 0xffffffff;
    if (iVar11 == 0 && (iVar10 == 0 && (int)local_48 == 0)) {
      uVar17 = uVar13;
    }
    if (((iVar11 == 0 && (iVar10 == 0 && (int)local_48 == 0)) && local_78 == 0x4034b50) &&
       (((local_38 != param_1[0x19] || (0xc < local_38)) ||
        (uVar17 = 0, (0x1101UL >> (local_38 & 0x3f) & 1) == 0)))) {
      uVar17 = 0xffffff99;
    }
  }
  iVar10 = FUN_1001f1537(param_1,param_1[0xc],&local_38);
  iVar11 = FUN_1001f1537(param_1,param_1[0xc],&local_38);
  if (((iVar11 == 0) && (local_40._0_4_ = -(uint)(iVar10 != 0) | uVar17, (uint)local_40 == 0)) &&
     ((local_40._0_4_ = 0, local_38 != param_1[0x1b] &&
      (local_40._0_4_ = 0xffffff99, (local_50[0] & 8) != 0)))) {
    local_40._0_4_ = 0;
  }
  iVar10 = FUN_1001f1537(param_1,param_1[0xc],&local_38);
  uVar17 = 0xffffffff;
  if (((iVar10 == 0) && (uVar17 = (uint)local_40, (uint)local_40 == 0 && local_38 != 0xffffffff)) &&
     ((uVar17 = 0, local_38 != param_1[0x1c] && (uVar17 = 0xffffff99, (local_50[0] & 8) != 0)))) {
    uVar17 = 0;
  }
  iVar10 = FUN_1001f1537(param_1,param_1[0xc],&local_38);
  uVar13 = 0xffffffff;
  if ((((iVar10 == 0) && (uVar13 = uVar17, uVar17 == 0 && local_38 != 0xffffffff)) &&
      (uVar13 = 0, local_38 != param_1[0x1d])) && (uVar13 = 0xffffff99, (local_50[0] & 8) != 0)) {
    uVar13 = 0;
  }
  iVar10 = FUN_1001f1744(param_1,param_1[0xc],&local_60);
  if ((iVar10 == 0) && (uVar13 == 0)) {
    bVar18 = local_60 == param_1[0x1e];
  }
  else {
    bVar18 = false;
  }
  iVar10 = FUN_1001f1744(param_1,param_1[0xc],&local_80);
  if (iVar10 != 0) {
    return -0x67;
  }
  if (!bVar18) {
    return -0x67;
  }
  lVar14 = param_1[0x27];
  puVar15 = _malloc(0x140);
  iVar10 = -0x68;
  if (puVar15 == (undefined8 *)0x0) {
    return -0x68;
  }
  local_40 = local_60;
  local_48 = lVar14;
  pvVar16 = _malloc(0x4000);
  lVar8 = local_40;
  *puVar15 = pvVar16;
  puVar15[0x11] = lVar14 + local_60 + 0x1e;
  *(int *)(puVar15 + 0x12) = (int)local_80;
  puVar15[0x13] = 0;
  *(int *)(puVar15 + 0x27) = local_54;
  if (pvVar16 == (void *)0x0) goto LAB_1001f1053;
  puVar15[0x10] = 0;
  if (local_68 != (undefined4 *)0x0) {
    *local_68 = *(undefined4 *)(param_1 + 0x19);
  }
  if (local_70 != (undefined4 *)0x0) {
    *local_70 = 6;
    switch((uint)param_1[0x18] & 6) {
    case 0:
      goto switchD_1001f0f35_caseD_0;
    case 2:
      uVar9 = 9;
      break;
    case 4:
      uVar9 = 2;
      break;
    case 6:
      uVar9 = 1;
    }
    *local_70 = uVar9;
  }
switchD_1001f0f35_caseD_0:
  puVar15[0x16] = param_1[0x1b];
  puVar15[0x14] = 0;
  puVar15[0x15] = 0;
  lVar14 = param_1[0x19];
  puVar15[0x25] = lVar14;
  puVar15[0x24] = param_1[0xc];
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  puVar15[0x19] = *param_1;
  puVar15[0x1a] = uVar1;
  puVar15[0x1b] = uVar2;
  puVar15[0x1c] = uVar3;
  puVar15[0x1d] = uVar4;
  puVar15[0x1e] = uVar5;
  puVar15[0x1f] = uVar6;
  puVar15[0x20] = uVar7;
  uVar1 = param_1[9];
  puVar15[0x21] = param_1[8];
  puVar15[0x22] = uVar1;
  puVar15[0x23] = param_1[10];
  puVar15[0x26] = param_1[0xf];
  puVar15[6] = 0;
  if (local_54 == 0 && lVar14 == 0xc) {
    *(undefined4 *)(puVar15 + 0x27) = 1;
  }
  else if (lVar14 == 8 && local_54 == 0) {
    puVar15[1] = 0;
    *(undefined4 *)(puVar15 + 2) = 0;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    iVar10 = _inflateInit2_((z_streamp)(puVar15 + 1),-0xf,"1.2.12",0x70);
    if (iVar10 != 0) {
LAB_1001f1053:
      _free(puVar15);
      return iVar10;
    }
    puVar15[0x10] = 8;
    local_48 = param_1[0x27];
  }
  uVar1 = param_1[0x1d];
  puVar15[0x17] = param_1[0x1c];
  puVar15[0x18] = uVar1;
  puVar15[0xf] = (local_80 + lVar8 & 0xffffffffU) + local_48 + 0x1e;
  *(undefined4 *)(puVar15 + 2) = 0;
  param_1[0x28] = puVar15;
  *(undefined4 *)(param_1 + 0x29) = 0;
  return 0;
}

