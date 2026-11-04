// name: FUN_1005d6168
// address: 1005d6168

void FUN_1005d6168(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 in_RAX;
  ulong uVar4;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined4 local_24;
  
  local_24 = (undefined4)((ulong)in_RAX >> 0x20);
  auVar5._0_8_ = FUN_1001c62d9(param_2,0x4f4);
  auVar5._8_8_ = extraout_XMM0_Qb;
  *param_2 = 4;
  auVar5 = pmovzxbd(auVar5,*param_1);
  *(undefined1 (*) [16])(param_2 + 1) = auVar5;
  *(undefined8 *)(param_2 + 5) = *(undefined8 *)(param_1 + 1);
  param_2[7] = param_1[3];
  param_2[8] = 5;
  param_2[9] = (uint)*(byte *)(param_1 + 4);
  FUN_100117b9c(&local_24,*(undefined1 *)((long)param_1 + 0x11));
  param_2[10] = local_24;
  FUN_100117ae8(&local_24,param_1[5],1);
  param_2[0xb] = local_24;
  param_2[0xc] = (uint)*(byte *)((long)param_1 + 0x12);
  FUN_100117b9c(&local_24,*(undefined1 *)(param_1 + 6));
  param_2[0xd] = local_24;
  FUN_100117ae8(&local_24,param_1[7],1);
  param_2[0xe] = local_24;
  uVar2 = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(param_2 + 0xf) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x11) = uVar2;
  param_2[0x13] = param_1[0xc];
  if (param_2[0xc] == 0) {
    uVar3 = FUN_1005d607f(param_1);
    param_2[0xc] = uVar3;
  }
  param_2[0x19] = (uint)*(byte *)(param_1 + 0xd);
  param_2[0x1a] = *(byte *)((long)param_1 + 0x35) - 1;
  FUN_100117ae8(&local_24,param_1[5],1);
  param_2[0x1b] = local_24;
  bVar1 = *(byte *)((long)param_1 + 0x37);
  param_2[0x1c] = (uint)bVar1;
  if (bVar1 != 0) {
    uVar4 = 0;
    do {
      param_2[uVar4 + 0x1d] = (uint)*(byte *)((long)param_1 + uVar4 + 0x38);
      param_2[uVar4 + 0x2d] = (uint)*(byte *)((long)param_1 + uVar4 + 0x48);
      uVar4 = uVar4 + 1;
    } while (bVar1 != uVar4);
  }
  bVar1 = *(byte *)(param_1 + 0x16);
  param_2[0x3d] = (uint)bVar1;
  if (bVar1 != 0) {
    uVar4 = 0;
    do {
      param_2[uVar4 + 0x3e] = (uint)*(byte *)((long)param_1 + uVar4 + 0x59);
      param_2[uVar4 + 0x4e] = (uint)*(byte *)((long)param_1 + uVar4 + 0x69);
      uVar4 = uVar4 + 1;
    } while (bVar1 != uVar4);
  }
  bVar1 = *(byte *)((long)param_1 + 0x79);
  param_2[0x5e] = (uint)bVar1;
  if (bVar1 != 0) {
    uVar4 = 0;
    do {
      param_2[uVar4 + 0x5f] = (uint)*(byte *)((long)param_1 + uVar4 + 0x7a);
      param_2[uVar4 + 0x6f] = (uint)*(byte *)((long)param_1 + uVar4 + 0x8a);
      uVar4 = uVar4 + 1;
    } while (bVar1 != uVar4);
  }
  bVar1 = *(byte *)((long)param_1 + 0x9a);
  param_2[0x7f] = (uint)bVar1;
  if (bVar1 != 0) {
    uVar4 = 0;
    do {
      param_2[uVar4 + 0x90] = (uint)*(byte *)((long)param_1 + uVar4 + 0x9b);
      uVar4 = uVar4 + 1;
    } while (bVar1 != uVar4);
  }
  bVar1 = *(byte *)((long)param_1 + 0x9f);
  param_2[0xa0] = (uint)bVar1;
  if (bVar1 != 0) {
    uVar4 = 0;
    do {
      param_2[uVar4 + 0xb1] = (uint)*(byte *)((long)param_1 + uVar4 + 0xa0);
      uVar4 = uVar4 + 1;
    } while (bVar1 != uVar4);
  }
  bVar1 = *(byte *)(param_1 + 0x2a);
  param_2[0xc1] = (uint)bVar1;
  if (bVar1 != 0) {
    uVar4 = 0;
    do {
      param_2[uVar4 + 0xc2] = (uint)*(byte *)((long)param_1 + uVar4 + 0xa9);
      param_2[uVar4 + 0xd2] = (uint)*(byte *)((long)param_1 + uVar4 + 0xb9);
      uVar4 = uVar4 + 1;
    } while (bVar1 != uVar4);
  }
  auVar5 = pmovzxbd(ZEXT216(*(ushort *)((long)param_1 + 0xc9)),
                    ZEXT216(*(ushort *)((long)param_1 + 0xc9)));
  *(long *)(param_2 + 0xe2) = auVar5._0_8_;
  auVar5 = pmovzxbd(ZEXT216(*(ushort *)((long)param_1 + 0xcb)),
                    ZEXT216(*(ushort *)((long)param_1 + 0xcb)));
  *(long *)(param_2 + 0xe5) = auVar5._0_8_;
  auVar5 = pmovzxbd(ZEXT216(*(ushort *)((long)param_1 + 0xcd)),
                    ZEXT216(*(ushort *)((long)param_1 + 0xcd)));
  *(long *)(param_2 + 0xe8) = auVar5._0_8_;
  param_2[0xea] = (uint)*(byte *)((long)param_1 + 0xcf);
  bVar1 = *(byte *)(param_1 + 0x34);
  param_2[0xeb] = (uint)bVar1;
  if (bVar1 != 0) {
    FUN_1001c631b(param_1 + 0x34,param_2 + 0xec);
  }
  param_2[0x15] = (uint)*(byte *)(param_1 + 0x74);
  param_2[0x16] = (uint)*(byte *)((long)param_1 + 0x1d1);
  param_2[0x17] = (uint)*(ushort *)((long)param_1 + 0x1d2);
  param_2[0x18] = (uint)*(byte *)(param_1 + 0x75);
  param_2[300] = (uint)*(byte *)((long)param_1 + 0x1d5);
  param_2[0x12d] = (uint)*(byte *)((long)param_1 + 0x1d6);
  param_2[0x12e] = (uint)*(ushort *)(param_1 + 0x76);
  param_2[0x12f] =
       (uint)*(byte *)((long)param_1 + 0x1dd) | (uint)*(byte *)(param_1 + 0x77) * 2 |
       (uint)*(byte *)((long)param_1 + 0x1db) << 2 | (uint)*(byte *)((long)param_1 + 0x1da) << 3;
  return;
}

