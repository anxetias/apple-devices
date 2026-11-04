// name: FUN_1002bc310
// address: 1002bc310

undefined8 FUN_1002bc310(long param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if (param_2 == 1) {
    local_70 = 0x168;
    local_68 = 0x158;
    local_60 = 0x148;
    local_58 = 0x138;
    local_50 = 0x110;
    local_48 = 0x100;
    local_40 = 0xe8;
    lVar17 = 0xd8;
    local_38 = 200;
    lVar18 = 0xb8;
    lVar19 = 0xa8;
    lVar16 = 0x98;
    lVar15 = 0x68;
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    local_70 = 0x270;
    local_68 = 0x260;
    local_60 = 0x250;
    local_58 = 0x240;
    local_50 = 0x218;
    local_48 = 0x208;
    local_40 = 0x1f0;
    lVar17 = 0x1e0;
    local_38 = 0x1d0;
    lVar18 = 0x1c0;
    lVar19 = 0x1b0;
    lVar16 = 0x1a0;
    lVar15 = 0x170;
  }
  puVar1 = (undefined4 *)(param_1 + lVar15);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar1 = (undefined4 *)(param_1 + 0x10 + lVar15);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  puVar1 = (undefined4 *)(param_1 + 0x20 + lVar15);
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];
  param_3[8] = *puVar1;
  param_3[9] = uVar12;
  param_3[10] = uVar13;
  param_3[0xb] = uVar14;
  param_3[4] = uVar8;
  param_3[5] = uVar9;
  param_3[6] = uVar10;
  param_3[7] = uVar11;
  *param_3 = uVar4;
  param_3[1] = uVar5;
  param_3[2] = uVar6;
  param_3[3] = uVar7;
  FUN_1001b8172(param_3 + 0xc,lVar16 + param_1);
  FUN_1001b8172(param_3 + 0x10,lVar19 + param_1);
  FUN_1001a7ad8(param_3 + 0x14,lVar18 + param_1);
  puVar1 = (undefined4 *)(param_1 + local_38);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  param_3[0x18] = *puVar1;
  param_3[0x19] = uVar4;
  param_3[0x1a] = uVar5;
  param_3[0x1b] = uVar6;
  FUN_1001b8172(param_3 + 0x1c,lVar17 + param_1);
  puVar1 = (undefined4 *)(param_1 + local_40);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  param_3[0x20] = *puVar1;
  param_3[0x21] = uVar4;
  param_3[0x22] = uVar5;
  param_3[0x23] = uVar6;
  param_3[0x24] = *(undefined4 *)(param_1 + 0x10 + local_40);
  FUN_1001b8172(param_3 + 0x26,local_48 + param_1);
  puVar1 = (undefined4 *)(param_1 + local_50);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (undefined4 *)(param_1 + 0x10 + local_50);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  param_3[0x2a] = *puVar1;
  param_3[0x2b] = uVar4;
  param_3[0x2c] = uVar5;
  param_3[0x2d] = uVar6;
  param_3[0x2e] = uVar7;
  param_3[0x2f] = uVar8;
  param_3[0x30] = uVar9;
  param_3[0x31] = uVar10;
  *(undefined8 *)(param_3 + 0x32) = *(undefined8 *)(param_1 + 0x20 + local_50);
  FUN_1001a7ad8(param_3 + 0x34,local_58 + param_1);
  FUN_1001b8172(param_3 + 0x38,local_60 + param_1);
  FUN_1001a7ad8(param_3 + 0x3c,local_68 + param_1);
  uVar3 = *(undefined8 *)(param_1 + local_70);
  *(undefined8 *)(param_3 + 0x40) = uVar3;
  return CONCAT71((int7)((ulong)uVar3 >> 8),1);
}

