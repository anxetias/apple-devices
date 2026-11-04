// name: FUN_100117dbc
// address: 100117dbc

undefined8 FUN_100117dbc(long *param_1,undefined8 *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  FUN_1001119ec();
  (**(code **)(*param_1 + 0x38))(param_1);
  puVar5 = (uint *)*param_2;
  uVar3 = *puVar5;
  uVar6 = puVar5[1];
  uVar7 = 0xfffffffe;
  if (uVar6 * 8 <= uVar3) {
switchD_100117f08_caseD_2:
    return uVar7;
  }
  uVar8 = ((uVar6 >> 2) + 1) - (uint)((uVar6 & 3) == 0);
  *(uint *)((long)param_1 + 0x34) = uVar8;
  uVar6 = uVar3 >> 5;
  *(uint *)(param_1 + 3) = uVar6;
  if (uVar6 < uVar8) {
    param_1[8] = (long)puVar5;
    lVar2 = *(long *)(puVar5 + 2);
    param_1[4] = lVar2;
    *(uint *)(param_1 + 5) = uVar3 & 0x1f;
    puVar1 = (uint *)(lVar2 + (ulong)uVar6 * 4);
    uVar6 = *puVar1;
    *(uint *)((long)param_1 + 0x2c) =
         (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) <<
         (sbyte)(uVar3 & 0x1f);
    param_1[2] = (long)puVar1;
  }
  else {
    puVar5 = (uint *)param_1[8];
  }
  *(undefined4 *)(param_1 + 0x3eb) = 0;
  *puVar5 = *puVar5 + 3;
  iVar4 = (int)param_1[5];
  uVar3 = iVar4 + 3;
  *(uint *)(param_1 + 5) = uVar3;
  if (uVar3 < 0x20) {
    uVar3 = *(uint *)((long)param_1 + 0x2c) >> 0x1d;
    *(uint *)(param_1 + 0x3eb) = uVar3;
    uVar6 = *(uint *)((long)param_1 + 0x2c) << 3;
  }
  else {
    if (uVar3 != 0x20) {
      *(int *)(param_1 + 5) = iVar4 + -0x1d;
      lVar2 = param_1[2];
      param_1[2] = lVar2 + 4;
      uVar3 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      uVar6 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      uVar3 = (uVar6 >> (-(char)iVar4 & 0x1fU) | *(uint *)((long)param_1 + 0x2c)) >> 0x1d;
      *(uint *)(param_1 + 0x3eb) = uVar3;
      *(uint *)((long)param_1 + 0x2c) = uVar6 << ((byte)(iVar4 + -0x1d) & 0x1f);
      goto LAB_100117ef6;
    }
    *(undefined4 *)(param_1 + 5) = 0;
    uVar6 = (int)param_1[3] + 1;
    *(uint *)(param_1 + 3) = uVar6;
    uVar3 = 0;
    if (uVar6 < *(uint *)((long)param_1 + 0x34)) {
      param_1[2] = param_1[2] + 4;
      uVar3 = *(uint *)(param_1[4] + (ulong)uVar6 * 4);
    }
    uVar6 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    uVar3 = *(uint *)((long)param_1 + 0x2c) >> 0x1d;
    *(uint *)(param_1 + 0x3eb) = uVar3;
  }
  *(uint *)((long)param_1 + 0x2c) = uVar6;
LAB_100117ef6:
  do {
    switch(uVar3) {
    case 0:
    case 3:
      iVar4 = (**(code **)(*param_1 + 0x10))(param_1,param_2,0,0);
      break;
    case 1:
      if (*(ushort *)(param_1 + 0x3ea) < 2) {
        return 0xfffffffe;
      }
      iVar4 = (**(code **)(*param_1 + 0x18))(param_1,param_2,0,0);
      break;
    default:
      goto switchD_100117f08_caseD_2;
    case 4:
      iVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
      break;
    case 5:
      iVar4 = FUN_10012345e(param_1,param_2);
      break;
    case 6:
      (**(code **)(*param_1 + 0x20))(param_1,param_2);
      goto LAB_100117f6c;
    case 7:
      lVar2 = param_1[0x166];
      uVar3 = *(int *)(lVar2 + 0x5c0) + *(int *)(lVar2 + 0x5bc) + *(int *)(lVar2 + 0x5c4);
      if ((uVar3 != 0) && (uVar3 <= *(ushort *)(param_1 + 0x3ea))) {
        *(int *)(param_1 + 0x164) = (int)param_1[0x164] + 1;
        uVar7 = 0;
      }
      goto switchD_100117f08_caseD_2;
    }
    if (iVar4 != 0) {
      return 0xfffffffe;
    }
LAB_100117f6c:
    puVar5 = (uint *)*param_2;
    uVar3 = *puVar5;
    uVar6 = puVar5[1];
    if (uVar6 * 8 <= uVar3) {
      return 0xfffffffe;
    }
    uVar8 = ((uVar6 >> 2) + 1) - (uint)((uVar6 & 3) == 0);
    *(uint *)((long)param_1 + 0x34) = uVar8;
    uVar6 = uVar3 >> 5;
    *(uint *)(param_1 + 3) = uVar6;
    if (uVar6 < uVar8) {
      param_1[8] = (long)puVar5;
      lVar2 = *(long *)(puVar5 + 2);
      param_1[4] = lVar2;
      *(uint *)(param_1 + 5) = uVar3 & 0x1f;
      puVar1 = (uint *)(lVar2 + (ulong)uVar6 * 4);
      uVar6 = *puVar1;
      *(uint *)((long)param_1 + 0x2c) =
           (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) <<
           (sbyte)(uVar3 & 0x1f);
      param_1[2] = (long)puVar1;
    }
    else {
      puVar5 = (uint *)param_1[8];
    }
    *(undefined4 *)(param_1 + 0x3eb) = 0;
    *puVar5 = *puVar5 + 3;
    iVar4 = (int)param_1[5];
    uVar3 = iVar4 + 3;
    *(uint *)(param_1 + 5) = uVar3;
    if (uVar3 < 0x20) {
      uVar3 = *(uint *)((long)param_1 + 0x2c) >> 0x1d;
      *(uint *)(param_1 + 0x3eb) = uVar3;
      uVar6 = *(uint *)((long)param_1 + 0x2c) << 3;
    }
    else if (uVar3 == 0x20) {
      *(undefined4 *)(param_1 + 5) = 0;
      uVar6 = (int)param_1[3] + 1;
      *(uint *)(param_1 + 3) = uVar6;
      uVar3 = 0;
      if (uVar6 < *(uint *)((long)param_1 + 0x34)) {
        param_1[2] = param_1[2] + 4;
        uVar3 = *(uint *)(param_1[4] + (ulong)uVar6 * 4);
      }
      uVar6 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      uVar3 = *(uint *)((long)param_1 + 0x2c) >> 0x1d;
      *(uint *)(param_1 + 0x3eb) = uVar3;
    }
    else {
      *(int *)(param_1 + 5) = iVar4 + -0x1d;
      lVar2 = param_1[2];
      param_1[2] = lVar2 + 4;
      uVar3 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      uVar6 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      uVar3 = (uVar6 >> (-(char)iVar4 & 0x1fU) | *(uint *)((long)param_1 + 0x2c)) >> 0x1d;
      *(uint *)(param_1 + 0x3eb) = uVar3;
      uVar6 = uVar6 << ((byte)(iVar4 + -0x1d) & 0x1f);
    }
    *(uint *)((long)param_1 + 0x2c) = uVar6;
  } while( true );
}

