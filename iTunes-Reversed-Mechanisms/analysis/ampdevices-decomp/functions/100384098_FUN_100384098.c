// name: FUN_100384098
// address: 100384098

void FUN_100384098(byte *param_1,ulong *param_2,byte *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  *(uint *)(param_3 + 0x9e) = (uint)*param_1;
  if (param_2 == (ulong *)0x0) {
    *(undefined8 *)(param_3 + 0x2e) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_1 + 0x28);
    *param_3 = param_1[0x1c];
    param_3[0x2b] = param_1[0x1d];
    param_3[1] = param_1[0x1e];
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_3 + 0x22) = *(undefined8 *)(param_1 + 0x68);
    param_3[0x2a] = param_1[100];
    *(undefined8 *)(param_3 + 0x3a) = *(undefined8 *)(param_1 + 0x80);
    *(undefined4 *)(param_3 + 0xaa) = *(undefined4 *)(param_1 + 0x88);
    *(undefined4 *)(param_3 + 0xa2) = *(undefined4 *)(param_1 + 0x8c);
    *(undefined4 *)(param_3 + 0x36) = *(undefined4 *)(param_1 + 0x90);
    *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_1 + 0x60);
    param_3[0x2c] = param_1[0xa8];
    *(undefined4 *)(param_3 + 0x42) = *(undefined4 *)(param_1 + 0xa9);
    *(undefined4 *)(param_3 + 0xa6) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_3 + 100) = *(undefined4 *)(param_1 + 0xc4);
    *(undefined4 *)(param_3 + 0x6c) = *(undefined4 *)(param_1 + 200);
    *(undefined8 *)(param_3 + 0x5c) = *(undefined8 *)(param_1 + 0xb8);
    param_3[0x58] = param_1[0xcc];
    param_3[0x7c] = param_1[0xae];
    param_3[0x7d] = param_1[0xaf];
    param_3[0x96] = param_1[0xb0];
    param_3[0x86] = param_1[0xcd];
    param_3[0x87] = param_1[0xce];
    param_3[0x88] = param_1[0xcf];
    param_3[0xc] = param_1[0xad];
    uVar2 = 0x17fffffff;
  }
  else {
    uVar1 = *param_2;
    if ((uVar1 & 0x100000000) == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined8 *)(param_3 + 0x2e) = *(undefined8 *)(param_1 + 8);
      uVar2 = 0x4000000;
    }
    if ((uVar1 >> 0x21 & 1) != 0) {
      *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(param_1 + 0x10);
      uVar2 = uVar2 | 0x8000000;
    }
    if ((uVar1 & 0x20) != 0) {
      *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(param_1 + 0x28);
      uVar2 = uVar2 | 0x20;
    }
    if ((uVar1 & 1) != 0) {
      *param_3 = param_1[0x1c];
      uVar2 = uVar2 | 1;
    }
    if ((uVar1 & 2) != 0) {
      param_3[0x2b] = param_1[0x1d];
      uVar2 = uVar2 | 2;
    }
    if ((uVar1 & 4) != 0) {
      param_3[1] = param_1[0x1e];
      uVar2 = uVar2 | 4;
    }
    if ((uVar1 & 8) != 0) {
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 0x20);
      uVar2 = uVar2 | 8;
    }
    if ((uVar1 & 0x10) != 0) {
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x24);
      uVar2 = uVar2 | 0x10;
    }
    uVar3 = (uint)uVar1;
    if ((uVar3 >> 0xb & 1) != 0) {
      *(undefined8 *)(param_3 + 0x22) = *(undefined8 *)(param_1 + 0x68);
      uVar2 = uVar2 | 0x100;
    }
    if ((uVar3 >> 10 & 1) != 0) {
      param_3[0x2a] = param_1[100];
      uVar2 = uVar2 | 0x80;
    }
    if ((uVar3 >> 0xd & 1) != 0) {
      *(undefined8 *)(param_3 + 0x3a) = *(undefined8 *)(param_1 + 0x80);
      uVar2 = uVar2 | 0x200;
    }
    if ((uVar1 >> 0x25 & 1) != 0) {
      *(undefined4 *)(param_3 + 0xaa) = *(undefined4 *)(param_1 + 0x88);
      uVar2 = uVar2 | 0x40000000;
    }
    if ((uVar1 >> 0x23 & 1) != 0) {
      *(undefined4 *)(param_3 + 0xa2) = *(undefined4 *)(param_1 + 0x8c);
      uVar2 = uVar2 | 0x10000000;
    }
    if ((uVar3 >> 0xe & 1) != 0) {
      *(undefined4 *)(param_3 + 0x36) = *(undefined4 *)(param_1 + 0x90);
      uVar2 = uVar2 | 0x400;
    }
    if ((uVar3 >> 9 & 1) != 0) {
      *(undefined4 *)(param_3 + 0x68) = *(undefined4 *)(param_1 + 0x60);
      uVar2 = uVar2 | 0x40;
    }
    if ((short)uVar1 < 0) {
      param_3[0x2c] = param_1[0xa8];
      uVar2 = uVar2 | 0x800;
    }
    if ((uVar3 >> 0x10 & 1) != 0) {
      param_3[0x42] = param_1[0xa9];
      uVar2 = uVar2 | 0x1000;
    }
    if ((uVar3 >> 0x11 & 1) != 0) {
      param_3[0x43] = param_1[0xaa];
      uVar2 = uVar2 | 0x2000;
    }
    if ((uVar3 >> 0x12 & 1) != 0) {
      param_3[0x44] = param_1[0xab];
      uVar2 = uVar2 | 0x4000;
    }
    if ((uVar3 >> 0x13 & 1) != 0) {
      param_3[0x45] = param_1[0xac];
      uVar2 = uVar2 | 0x8000;
    }
    if ((uVar1 >> 0x24 & 1) != 0) {
      *(undefined4 *)(param_3 + 0xa6) = *(undefined4 *)(param_1 + 0xc0);
      uVar2 = uVar2 | 0x20000000;
    }
    if ((uVar3 >> 0x16 & 1) != 0) {
      *(undefined4 *)(param_3 + 100) = *(undefined4 *)(param_1 + 0xc4);
      uVar2 = uVar2 | 0x40000;
    }
    if ((uVar3 >> 0x17 & 1) != 0) {
      *(undefined4 *)(param_3 + 0x6c) = *(undefined4 *)(param_1 + 200);
      uVar2 = uVar2 | 0x80000;
    }
    if ((uVar3 >> 0x18 & 1) != 0) {
      *(undefined8 *)(param_3 + 0x5c) = *(undefined8 *)(param_1 + 0xb8);
      uVar2 = uVar2 | 0x100000;
    }
    if ((uVar3 >> 0x19 & 1) != 0) {
      param_3[0x58] = param_1[0xcc];
      uVar2 = uVar2 | 0x200000;
    }
    if ((uVar3 >> 0x14 & 1) != 0) {
      param_3[0x7c] = param_1[0xae];
      uVar2 = uVar2 | 0x10000;
    }
    if ((uVar1 >> 0x28 & 1) != 0) {
      param_3[0x7d] = param_1[0xaf];
      uVar2 = uVar2 | 0x100000000;
    }
    if ((uVar3 >> 0x15 & 1) != 0) {
      param_3[0x96] = param_1[0xb0];
      uVar2 = uVar2 | 0x20000;
    }
    if ((uVar3 >> 0x1a & 1) != 0) {
      param_3[0x86] = param_1[0xcd];
      uVar2 = uVar2 | 0x400000;
    }
    if ((uVar3 >> 0x1b & 1) != 0) {
      param_3[0x87] = param_1[0xce];
      uVar2 = uVar2 | 0x800000;
    }
    if ((uVar3 >> 0x1c & 1) != 0) {
      param_3[0x88] = param_1[0xcf];
      uVar2 = uVar2 | 0x1000000;
    }
    if ((int)uVar3 < 0) {
      param_3[0xc] = param_1[0xad];
      uVar2 = uVar2 | 0x2000000;
    }
    if ((uVar1 >> 0x26 & 1) == 0) goto LAB_1003844aa;
  }
  *(undefined8 *)(param_3 + 0x74) = *(undefined8 *)(param_1 + 0x100);
  uVar2 = uVar2 | 0x80000000;
LAB_1003844aa:
  if (param_4 != (ulong *)0x0) {
    *param_4 = uVar2;
  }
  return;
}

