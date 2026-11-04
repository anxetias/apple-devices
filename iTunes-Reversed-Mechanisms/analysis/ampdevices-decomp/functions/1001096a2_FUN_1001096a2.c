// name: FUN_1001096a2
// address: 1001096a2

undefined8 FUN_1001096a2(long param_1,undefined8 param_2,long param_3,int param_4)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *local_58;
  long local_50;
  long local_48;
  long local_40;
  undefined8 *local_38;
  
  *(undefined8 *)(param_1 + 0x1e38) = param_2;
  *(undefined1 *)(param_1 + 0x1e40) = *(undefined1 *)(param_3 + 0x40);
  *(undefined1 *)(param_1 + 0x1e41) = *(undefined1 *)(param_3 + 0x41);
  lVar7 = *(long *)(param_1 + 0x1e30);
  *(char *)(lVar7 + 8) = (char)param_4;
  *(float *)(lVar7 + 0xc) = DAT_100700b50 / (float)param_4;
  lVar9 = param_1 + 0x5050;
  local_40 = param_1 + 0x1e50;
  *(long *)(lVar7 + 0x1b0) = param_1 + 0x2050;
  *(undefined8 *)(param_1 + 0x2090) = 0;
  *(undefined8 *)(param_1 + 0x2098) = 0;
  *(undefined8 *)(param_1 + 0x2080) = 0;
  *(undefined8 *)(param_1 + 0x2088) = 0;
  *(undefined8 *)(param_1 + 0x2070) = 0;
  *(undefined8 *)(param_1 + 0x2078) = 0;
  *(undefined8 *)(param_1 + 0x2060) = 0;
  *(undefined8 *)(param_1 + 0x2068) = 0;
  *(undefined8 *)(param_1 + 0x2050) = 0;
  *(undefined8 *)(param_1 + 0x2058) = 0;
  *(long *)(lVar7 + 0x1b8) = param_1 + 0x20a0;
  *(undefined8 *)(param_1 + 0x20e0) = 0;
  *(undefined8 *)(param_1 + 0x20e8) = 0;
  *(undefined8 *)(param_1 + 0x20d0) = 0;
  *(undefined8 *)(param_1 + 0x20d8) = 0;
  *(undefined8 *)(param_1 + 0x20c0) = 0;
  *(undefined8 *)(param_1 + 0x20c8) = 0;
  *(undefined8 *)(param_1 + 0x20b0) = 0;
  *(undefined8 *)(param_1 + 0x20b8) = 0;
  *(undefined8 *)(param_1 + 0x20a0) = 0;
  *(undefined8 *)(param_1 + 0x20a8) = 0;
  *(long *)(lVar7 + 0x1c0) = param_1 + 0x20f0;
  local_58 = (undefined8 *)(param_1 + 0x2140);
  *(undefined8 *)(param_1 + 0x2130) = 0;
  *(undefined8 *)(param_1 + 0x2138) = 0;
  *(undefined8 *)(param_1 + 0x2120) = 0;
  *(undefined8 *)(param_1 + 0x2128) = 0;
  *(undefined8 *)(param_1 + 0x2110) = 0;
  *(undefined8 *)(param_1 + 0x2118) = 0;
  *(undefined8 *)(param_1 + 0x2100) = 0;
  *(undefined8 *)(param_1 + 0x2108) = 0;
  *(undefined8 *)(param_1 + 0x20f0) = 0;
  *(undefined8 *)(param_1 + 0x20f8) = 0;
  FUN_100109cae(param_1,lVar7 + 0x1e8,&DAT_100700be0,&local_58);
  *(undefined8 **)(*(long *)(param_1 + 0x1e30) + 0x1c8) = local_58;
  uVar2 = 0;
  local_58[4] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  *local_58 = 0;
  local_58[1] = 0;
  *(undefined8 **)(*(long *)(param_1 + 0x1e30) + 0x1d0) = local_58 + 5;
  local_58[9] = 0;
  local_58[7] = 0;
  local_58[8] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  *(undefined8 **)(*(long *)(param_1 + 0x1e30) + 0x1d8) = local_58 + 10;
  local_58[0xe] = 0;
  local_58[0xc] = 0;
  local_58[0xd] = 0;
  local_58[10] = 0;
  local_58[0xb] = 0;
  *(undefined8 **)(*(long *)(param_1 + 0x1e30) + 0x1e0) = local_58 + 0xf;
  local_58[0x13] = 0;
  local_58[0x11] = 0;
  local_58[0x12] = 0;
  local_58[0xf] = 0;
  local_58[0x10] = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x1e30) + 0x124) = 0;
  do {
    *(undefined1 *)(*(long *)(param_1 + 0x1e30) + 0x1f0 + uVar2) = 0;
    uVar4 = 1;
    if (uVar2 < 0xc) {
      uVar4 = 0xe;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x1e30) + 0x219 + uVar2) = uVar4;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x29);
  lVar7 = param_1 + 0x4050;
  lVar3 = param_1 + 0x1f10;
  lVar8 = *(long *)(param_1 + 0x1e30);
  *(long *)(lVar8 + 0x128) = param_1 + 0x6050;
  *(long *)(lVar8 + 0x130) = param_1 + 0x7050;
  *(undefined8 **)(lVar8 + 0x1a0) = local_58 + 0x14;
  *(undefined8 **)(lVar8 + 0x1a8) = local_58 + 0x1e;
  local_38 = local_58 + 0x28;
  uVar2 = 0;
  do {
    lVar8 = *(long *)(param_1 + 0x1e30);
    if (uVar2 < 0x14) {
      *(long *)(*(long *)(lVar8 + 0x128) + uVar2 * 8) = local_40;
      local_40 = local_40 + 8;
      **(undefined8 **)(*(long *)(*(long *)(param_1 + 0x1e30) + 0x128) + uVar2 * 8) = 0;
      *(long *)(*(long *)(*(long *)(param_1 + 0x1e30) + 0x130) + uVar2 * 8) = lVar3;
      **(undefined8 **)(*(long *)(*(long *)(param_1 + 0x1e30) + 0x130) + uVar2 * 8) = 0;
      lVar3 = lVar3 + 8;
    }
    else {
      bVar1 = *(byte *)(lVar8 + 0x205 + uVar2);
      *(undefined8 **)(*(long *)(lVar8 + 0x128) + uVar2 * 8) = local_38;
      local_48 = (ulong)bVar1 * 4;
      lVar8 = (long)local_38 + local_48;
      local_50 = lVar3;
      ___bzero(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1e30) + 0x128) + uVar2 * 8),local_48)
      ;
      *(long *)(*(long *)(*(long *)(param_1 + 0x1e30) + 0x130) + uVar2 * 8) = lVar8;
      local_38 = (undefined8 *)(lVar8 + local_48);
      ___bzero(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1e30) + 0x130) + uVar2 * 8));
      lVar3 = local_50;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x3d);
  lVar3 = 0;
  puVar6 = local_38;
  do {
    *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x1e30) + 0x1a0) + lVar3 * 8) = puVar6;
    **(undefined8 **)(*(long *)(*(long *)(param_1 + 0x1e30) + 0x1a0) + lVar3 * 8) = 0;
    *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x1e30) + 0x1a8) + lVar3 * 8) = puVar6 + 1;
    **(undefined8 **)(*(long *)(*(long *)(param_1 + 0x1e30) + 0x1a8) + lVar3 * 8) = 0;
    lVar3 = lVar3 + 1;
    puVar6 = puVar6 + 2;
  } while (lVar3 != 10);
  lVar3 = param_1 + 0x8050;
  lVar8 = *(long *)(param_1 + 0x1e30);
  lVar5 = 0;
  do {
    *(undefined1 *)(lVar8 + 0x138 + lVar5) = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x1e30) + 0x13b + lVar5) = (&DAT_1007014bc)[lVar5];
    *(long *)(*(long *)(param_1 + 0x1e30) + 0x140 + lVar5 * 8) = lVar7;
    lVar7 = lVar7 + (ulong)*(byte *)(*(long *)(param_1 + 0x1e30) + 0x13b + lVar5) * 8;
    *(long *)(*(long *)(param_1 + 0x1e30) + 0x158 + lVar5 * 8) = lVar9;
    lVar9 = lVar9 + (ulong)*(byte *)(*(long *)(param_1 + 0x1e30) + 0x13b + lVar5) * 8;
    *(long *)(*(long *)(param_1 + 0x1e30) + 0x170 + lVar5 * 8) = lVar3;
    lVar3 = lVar3 + (ulong)*(byte *)(*(long *)(param_1 + 0x1e30) + 0x13b + lVar5) * 8;
    *(long *)(*(long *)(param_1 + 0x1e30) + 0x188 + lVar5 * 8) = lVar3;
    lVar8 = *(long *)(param_1 + 0x1e30);
    bVar1 = *(byte *)(lVar8 + 0x13b + lVar5);
    lVar3 = lVar3 + (ulong)bVar1 * 8;
    if (bVar1 != 0) {
      uVar2 = 0;
      do {
        *(long *)(*(long *)(lVar8 + 0x140 + lVar5 * 8) + uVar2 * 8) = lVar7;
        lVar7 = lVar7 + 0x50;
        puVar6 = *(undefined8 **)
                  (*(long *)(*(long *)(param_1 + 0x1e30) + 0x140 + lVar5 * 8) + uVar2 * 8);
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        *(long *)(*(long *)(*(long *)(param_1 + 0x1e30) + 0x158 + lVar5 * 8) + uVar2 * 8) = lVar9;
        lVar9 = lVar9 + 0x50;
        puVar6 = *(undefined8 **)
                  (*(long *)(*(long *)(param_1 + 0x1e30) + 0x158 + lVar5 * 8) + uVar2 * 8);
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        *(long *)(*(long *)(*(long *)(param_1 + 0x1e30) + 0x170 + lVar5 * 8) + uVar2 * 8) = lVar3;
        puVar6 = *(undefined8 **)
                  (*(long *)(*(long *)(param_1 + 0x1e30) + 0x170 + lVar5 * 8) + uVar2 * 8);
        puVar6[4] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        *(long *)(*(long *)(*(long *)(param_1 + 0x1e30) + 0x188 + lVar5 * 8) + uVar2 * 8) =
             lVar3 + 0x28;
        lVar3 = lVar3 + 0x50;
        puVar6 = *(undefined8 **)
                  (*(long *)(*(long *)(param_1 + 0x1e30) + 0x188 + lVar5 * 8) + uVar2 * 8);
        puVar6[4] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        uVar2 = uVar2 + 1;
        lVar8 = *(long *)(param_1 + 0x1e30);
      } while (uVar2 < *(byte *)(lVar8 + 0x13b + lVar5));
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  _memset_pattern16((void *)(lVar8 + 0x244),&DAT_100700bd0,0x58);
  _memset_pattern16((void *)(lVar8 + 0x29c),&DAT_100700bd0,0x58);
  *(undefined8 *)(lVar8 + 0x344) = 0;
  *(undefined8 *)(lVar8 + 0x334) = 0;
  *(undefined8 *)(lVar8 + 0x33c) = 0;
  *(undefined8 *)(lVar8 + 0x324) = 0;
  *(undefined8 *)(lVar8 + 0x32c) = 0;
  *(undefined8 *)(lVar8 + 0x314) = 0;
  *(undefined8 *)(lVar8 + 0x31c) = 0;
  *(undefined8 *)(lVar8 + 0x304) = 0;
  *(undefined8 *)(lVar8 + 0x30c) = 0;
  *(undefined8 *)(lVar8 + 0x2f4) = 0;
  *(undefined8 *)(lVar8 + 0x2fc) = 0;
  lVar9 = *(long *)(param_1 + 0x1e30);
  *(undefined8 *)(lVar9 + 0x39c) = 0;
  *(undefined8 *)(lVar9 + 0x38c) = 0;
  *(undefined8 *)(lVar9 + 0x394) = 0;
  *(undefined8 *)(lVar9 + 0x37c) = 0;
  *(undefined8 *)(lVar9 + 900) = 0;
  *(undefined8 *)(lVar9 + 0x36c) = 0;
  *(undefined8 *)(lVar9 + 0x374) = 0;
  *(undefined8 *)(lVar9 + 0x35c) = 0;
  *(undefined8 *)(lVar9 + 0x364) = 0;
  *(undefined8 *)(lVar9 + 0x34c) = 0;
  *(undefined8 *)(lVar9 + 0x354) = 0;
  return 0;
}

