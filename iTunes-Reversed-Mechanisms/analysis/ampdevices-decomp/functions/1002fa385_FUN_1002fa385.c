// name: FUN_1002fa385
// address: 1002fa385

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002fa385(long param_1,uint param_2,uint *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x10);
  }
  param_3[0] = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  param_3[0x10] = 0;
  param_3[0x11] = 0;
  param_3[0x11] = 0;
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  param_3[0x16] = 0;
  param_3[0x17] = 0;
  param_3[0x18] = 0;
  param_3[0x19] = 0;
  param_3[0x1a] = 0;
  param_3[0x1b] = 0;
  param_3[0x1c] = 0;
  param_3[0x1d] = 0;
  param_3[0x1e] = 0;
  param_3[0x1f] = 0;
  param_3[0x20] = 0;
  param_3[0x21] = 0;
  *(undefined1 *)(param_3 + 0x22) = 0;
  *param_3 = param_2;
  *(code **)(param_3 + 6) = FUN_1002fa778;
  *(long *)(param_3 + 8) = param_1;
  uVar9 = (ulong)param_2;
  if (param_2 < 6 && param_1 != 0) {
    *(ulong *)(param_3 + 0xc) = param_1 + uVar9 + 0xba;
    param_3[0x14] = *(uint *)(param_1 + 0x1a8 + uVar9 * 4);
  }
  uVar6 = _UNK_100743968;
  uVar5 = _UNK_100743958;
  uVar4 = _UNK_100743948;
  uVar3 = _UNK_100743938;
  uVar2 = _UNK_100743928;
  uVar1 = _UNK_100743918;
  uVar7 = 0xffffffce;
  switch(uVar9) {
  case 0:
    *(undefined8 *)(param_3 + 1) = _DAT_100743960;
    *(undefined8 *)(param_3 + 3) = uVar6;
    param_3[0x16] = 0;
    param_3[0x17] = 0x2000;
    param_3[0x18] = 0;
    param_3[0x19] = 0;
    param_3[0x1a] = 0;
    param_3[0x1b] = 0x80000;
    param_3[0x1c] = 0;
    param_3[0x1d] = 0;
    param_3[0x1e] = 1;
    param_3[0x1f] = 0;
    param_3[0x20] = 0;
    param_3[0x21] = 0;
    if (lVar8 == 0) {
      return 0;
    }
    *(long *)(param_3 + 10) = param_1 + 0xc9;
    *(long *)(param_3 + 0x12) = lVar8 + 0x2430;
    *(long *)(param_3 + 0xe) = lVar8 + 0x1c10;
    param_1 = param_1 + 0xd8;
    break;
  case 1:
    *(undefined8 *)(param_3 + 1) = _DAT_100743950;
    *(undefined8 *)(param_3 + 3) = uVar5;
    param_3[0x16] = 0;
    param_3[0x17] = 0x4000;
    param_3[0x18] = 0;
    param_3[0x19] = 0;
    param_3[0x1a] = 0;
    param_3[0x1b] = 0x100000;
    param_3[0x1c] = 0;
    param_3[0x1d] = 0;
    param_3[0x1e] = 8;
    param_3[0x1f] = 0;
    param_3[0x20] = 0;
    param_3[0x21] = 0;
    if (lVar8 == 0) {
      return 0;
    }
    *(long *)(param_3 + 10) = param_1 + 0xcb;
    *(long *)(param_3 + 0x12) = lVar8 + 0x2480;
    *(long *)(param_3 + 0xe) = lVar8 + 0x1c60;
    param_1 = param_1 + 0xe4;
    break;
  case 2:
    *(undefined8 *)(param_3 + 1) = _DAT_100743940;
    *(undefined8 *)(param_3 + 3) = uVar4;
    param_3[0x16] = 0;
    param_3[0x17] = 0x8000;
    param_3[0x18] = 0;
    param_3[0x19] = 0;
    param_3[0x1a] = 0;
    param_3[0x1b] = 0x200000;
    param_3[0x1c] = 0;
    param_3[0x1d] = 0;
    param_3[0x1e] = 4;
    param_3[0x1f] = 0;
    param_3[0x20] = 0;
    param_3[0x21] = 0;
    if (lVar8 == 0) {
      return 0;
    }
    *(long *)(param_3 + 10) = param_1 + 0xca;
    *(long *)(param_3 + 0x12) = lVar8 + 0x24d0;
    *(long *)(param_3 + 0xe) = lVar8 + 0x1cb0;
    param_1 = param_1 + 0xdc;
    break;
  case 3:
    *(undefined8 *)(param_3 + 1) = _DAT_100743930;
    *(undefined8 *)(param_3 + 3) = uVar3;
    param_3[0x16] = 0;
    param_3[0x17] = 0x10000;
    param_3[0x18] = 0;
    param_3[0x19] = 0;
    param_3[0x1a] = 0;
    param_3[0x1b] = 0x400000;
    param_3[0x1c] = 0;
    param_3[0x1d] = 0;
    param_3[0x1e] = 0x40000000;
    param_3[0x1f] = 0;
    param_3[0x20] = 0;
    param_3[0x21] = 0;
    if (lVar8 == 0) {
      return 0;
    }
    *(long *)(param_3 + 0x12) = lVar8 + 0x24d0;
    *(long *)(param_3 + 0xe) = lVar8 + 0x1cb0;
    param_1 = param_1 + 0xe0;
    break;
  case 4:
    *(undefined8 *)(param_3 + 1) = _DAT_100743920;
    *(undefined8 *)(param_3 + 3) = uVar2;
    param_3[0x16] = 0;
    param_3[0x17] = 0x20000;
    param_3[0x18] = 0;
    param_3[0x19] = 0;
    param_3[0x1a] = 0;
    param_3[0x1b] = 0x800000;
    param_3[0x1c] = 0;
    param_3[0x1d] = 0;
    param_3[0x1e] = 0x200000;
    param_3[0x1f] = 0;
    param_3[0x20] = 0;
    param_3[0x21] = 0;
    if (lVar8 == 0) {
      return 0;
    }
    *(long *)(param_3 + 0x12) = lVar8 + 0x24d0;
    *(long *)(param_3 + 0xe) = lVar8 + 0x1cb0;
    param_1 = param_1 + 0xec;
    break;
  case 5:
    *(undefined8 *)(param_3 + 1) = _DAT_100743910;
    *(undefined8 *)(param_3 + 3) = uVar1;
    param_3[0x16] = 0;
    param_3[0x17] = 0x40000;
    param_3[0x18] = 0;
    param_3[0x19] = 0;
    param_3[0x1a] = 0;
    param_3[0x1b] = 0x1000000;
    param_3[0x1c] = 0;
    param_3[0x1d] = 0;
    *(undefined1 *)(param_3 + 0x22) = 1;
    param_3[0x1e] = 0;
    param_3[0x1f] = 1;
    param_3[0x20] = 0;
    param_3[0x21] = 0;
    if (lVar8 == 0) {
      return 0;
    }
    *(long *)(param_3 + 0x12) = lVar8 + 0x2520;
    *(long *)(param_3 + 0xe) = lVar8 + 0x2070;
    *(long *)(param_3 + 0x10) = *(long *)(param_1 + 0x78) + 0x28;
    return 0;
  default:
    goto switchD_1002fa41d_caseD_6;
  case 7:
    *(undefined8 *)(param_3 + 1) = DAT_100743900;
    param_3[3] = 0;
    param_3[4] = 0;
    uVar7 = 0;
    param_3[0x1e] = 0;
    param_3[0x1f] = 0;
    param_3[0x20] = 0;
    param_3[0x21] = 0;
    param_3[0x1a] = 0;
    param_3[0x1b] = 0;
    param_3[0x1c] = 0;
    param_3[0x1d] = 0;
    param_3[0x16] = 0;
    param_3[0x17] = 0;
    param_3[0x18] = 0;
    param_3[0x19] = 0;
    if (lVar8 != 0) {
      *(long *)(param_3 + 0x12) = lVar8 + 0x24d0;
      *(long *)(param_3 + 0xe) = lVar8 + 0x1cb0;
      bVar10 = *(int *)(param_1 + 0xe0) == 0;
      lVar8 = param_1 + 0xe0;
      if (bVar10) {
        lVar8 = param_1 + 0xdc;
      }
      uVar9 = (ulong)bVar10 ^ 3;
      *(long *)(param_3 + 0x10) = lVar8;
      *(ulong *)(param_3 + 0xc) = param_1 + uVar9 + 0xba;
      param_3[0x14] = *(uint *)(param_1 + 0x1a8 + uVar9 * 4);
    }
    goto switchD_1002fa41d_caseD_6;
  }
  uVar7 = 0;
  *(long *)(param_3 + 0x10) = param_1;
switchD_1002fa41d_caseD_6:
  return uVar7;
}

