// name: FUN_1003aee51
// address: 1003aee51

void FUN_1003aee51(ulong *param_1,ulong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = *param_1;
  uVar8 = param_1[1];
  if ((uVar7 & 2) != 0) {
    *(short *)(param_2 + 3) = (short)param_1[3];
  }
  if ((uVar7 & 4) != 0) {
    *(undefined2 *)((long)param_2 + 0x1a) = *(undefined2 *)((long)param_1 + 0x1a);
  }
  if ((uVar7 & 8) != 0) {
    uVar4 = param_1[0x11];
    param_2[0x10] = param_1[0x10];
    param_2[0x11] = uVar4;
    uVar4 = param_1[0xf];
    param_2[0xe] = param_1[0xe];
    param_2[0xf] = uVar4;
    *(int *)(param_2 + 0x12) = (int)param_1[0x12];
    uVar1 = *(undefined4 *)((long)param_1 + 0x9c);
    uVar4 = param_1[0x14];
    uVar2 = *(undefined4 *)((long)param_1 + 0xa4);
    *(int *)(param_2 + 0x13) = (int)param_1[0x13];
    *(undefined4 *)((long)param_2 + 0x9c) = uVar1;
    *(int *)(param_2 + 0x14) = (int)uVar4;
    *(undefined4 *)((long)param_2 + 0xa4) = uVar2;
    *(int *)(param_2 + 0x15) = (int)param_1[0x15];
  }
  if ((uVar7 & 0x40) != 0) {
    *(short *)(param_2 + 0x16) = (short)param_1[0x16];
  }
  if ((char)uVar7 < '\0') {
    *(undefined2 *)((long)param_2 + 0xb2) = *(undefined2 *)((long)param_1 + 0xb2);
  }
  uVar6 = (uint)uVar7;
  if ((uVar6 >> 8 & 1) != 0) {
    *(undefined4 *)((long)param_2 + 0xb4) = *(undefined4 *)((long)param_1 + 0xb4);
  }
  if ((uVar6 >> 9 & 1) != 0) {
    *(char *)(param_2 + 2) = (char)param_1[2];
  }
  if ((uVar6 >> 10 & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x19,param_2 + 0x19);
    FUN_1001e1c39(param_1 + 0x99,param_2 + 0x99);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if (((uint)uVar7 >> 0xb & 1) != 0) {
    *(undefined8 *)((long)param_2 + 0xccc) = *(undefined8 *)((long)param_1 + 0xccc);
  }
  if (((uint)uVar7 >> 0xc & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x119,param_2 + 0x119);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  uVar6 = (uint)uVar7;
  if ((uVar6 >> 0xd & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x11) = *(undefined1 *)((long)param_1 + 0x11);
  }
  if ((uVar6 >> 0xe & 1) != 0) {
    *(undefined8 *)((long)param_2 + 0xcd4) = *(undefined8 *)((long)param_1 + 0xcd4);
  }
  if ((short)uVar7 < 0) {
    *(undefined8 *)((long)param_2 + 0xcec) = *(undefined8 *)((long)param_1 + 0xcec);
  }
  if ((uVar6 >> 0x10 & 1) != 0) {
    *(undefined8 *)((long)param_2 + 0xce4) = *(undefined8 *)((long)param_1 + 0xce4);
  }
  if ((uVar6 >> 0x11 & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x159,param_2 + 0x159);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if (((uint)uVar7 >> 0x12 & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x3fd,param_2 + 0x3fd);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if (((uint)uVar7 >> 0x14 & 1) != 0) {
    *(undefined8 *)((long)param_2 + 0xcdc) = *(undefined8 *)((long)param_1 + 0xcdc);
  }
  if (((uint)uVar7 >> 0x16 & 1) != 0) {
    *(undefined2 *)((long)param_2 + 0x1142) = *(undefined2 *)((long)param_1 + 0x1142);
    FUN_1001e1c39((long)param_1 + 0x1144,(long)param_2 + 0x1144);
    FUN_1001e1c39((long)param_1 + 0x1344,(long)param_2 + 0x1344);
    FUN_1001dfbb3((long)param_1 + 0x1544,(long)param_2 + 0x1544,0x80);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  uVar6 = (uint)uVar7;
  if ((uVar6 >> 0x18 & 1) != 0) {
    param_2[0x1a0] = param_1[0x1a0];
  }
  if ((uVar6 >> 0x19 & 1) != 0) {
    *(undefined8 *)((long)param_2 + 0xcf4) = *(undefined8 *)((long)param_1 + 0xcf4);
  }
  if ((uVar6 >> 0x1a & 1) != 0) {
    FUN_1001e1c39((long)param_1 + 0x15c4,(long)param_2 + 0x15c4);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if (((uint)uVar7 >> 0x1b & 1) != 0) {
    FUN_1001e1c39((long)param_1 + 0x17c4,(long)param_2 + 0x17c4);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if (((uint)uVar7 >> 0x1e & 1) != 0) {
    *(undefined8 *)((long)param_2 + 0x54) = *(undefined8 *)((long)param_1 + 0x54);
    *(undefined4 *)((long)param_2 + 0x5c) = *(undefined4 *)((long)param_1 + 0x5c);
    uVar1 = *(undefined4 *)((long)param_1 + 100);
    uVar4 = param_1[0xd];
    uVar2 = *(undefined4 *)((long)param_1 + 0x6c);
    *(int *)(param_2 + 0xc) = (int)param_1[0xc];
    *(undefined4 *)((long)param_2 + 100) = uVar1;
    *(int *)(param_2 + 0xd) = (int)uVar4;
    *(undefined4 *)((long)param_2 + 0x6c) = uVar2;
  }
  if ((int)(uint)uVar7 < 0) {
    *(undefined4 *)((long)param_2 + 0x1fe4) = *(undefined4 *)((long)param_1 + 0x1fe4);
  }
  if ((uVar7 >> 0x20 & 1) != 0) {
    FUN_1001e1c39((long)param_1 + 0x19c4,(long)param_2 + 0x19c4);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if ((uVar7 >> 0x21 & 1) != 0) {
    *(int *)(param_2 + 0x3b9) = (int)param_1[0x3b9];
  }
  if (((uint)uVar8 >> 0x1d & 1) != 0) {
    FUN_1001e1c39((long)param_1 + 0x3434,(long)param_2 + 0x3434);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if ((uVar7 >> 0x22 & 1) != 0) {
    FUN_1001e1c39((long)param_1 + 0x1bc4,(long)param_2 + 0x1bc4);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if ((uVar7 >> 0x23 & 1) != 0) {
    *(undefined4 *)((long)param_2 + 0x1dc4) = *(undefined4 *)((long)param_1 + 0x1dc4);
    *(undefined4 *)((long)param_2 + 0x3634) = *(undefined4 *)((long)param_1 + 0x3634);
  }
  if ((uVar7 >> 0x25 & 1) != 0) {
    *(char *)(param_2 + 0x1a1) = (char)param_1[0x1a1];
  }
  if ((uVar7 >> 0x26 & 1) != 0) {
    *(undefined8 *)((long)param_2 + 0x1c) = *(undefined8 *)((long)param_1 + 0x1c);
  }
  if ((uVar7 >> 0x27 & 1) != 0) {
    *(undefined4 *)((long)param_2 + 0xcfc) = *(undefined4 *)((long)param_1 + 0xcfc);
  }
  if ((uVar7 >> 0x28 & 1) != 0) {
    *(undefined4 *)((long)param_2 + 0x1fdc) = *(undefined4 *)((long)param_1 + 0x1fdc);
  }
  if ((uVar7 >> 0x29 & 1) != 0) {
    *(int *)(param_2 + 0x3fc) = (int)param_1[0x3fc];
  }
  if ((uVar7 >> 0x2a & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x12) = *(undefined1 *)((long)param_1 + 0x12);
  }
  if ((uVar7 >> 0x2b & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x13) = *(undefined1 *)((long)param_1 + 0x13);
  }
  if ((uVar7 >> 0x2c & 1) != 0) {
    param_2[0x17] = param_1[0x17];
  }
  if ((uVar7 >> 0x2d & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x43d,param_2 + 0x43d);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if ((uVar7 >> 0x33 & 1) != 0) {
    *(char *)(param_2 + 0x5bd) = (char)param_1[0x5bd];
  }
  if ((uVar7 >> 0x2e & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x47d,param_2 + 0x47d);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if ((uVar7 >> 0x34 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x2de9) = *(undefined1 *)((long)param_1 + 0x2de9);
  }
  if ((uVar7 >> 0x2f & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x4bd,param_2 + 0x4bd);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if ((uVar7 >> 0x35 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x2dea) = *(undefined1 *)((long)param_1 + 0x2dea);
  }
  if ((uVar7 >> 0x30 & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x4fd,param_2 + 0x4fd);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if ((uVar7 >> 0x36 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x2deb) = *(undefined1 *)((long)param_1 + 0x2deb);
  }
  if ((uVar7 >> 0x31 & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x53d,param_2 + 0x53d);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if ((uVar7 >> 0x37 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x2dec) = *(undefined1 *)((long)param_1 + 0x2dec);
  }
  if ((uVar7 >> 0x32 & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x57d,param_2 + 0x57d);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if ((uVar7 >> 0x38 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x2ded) = *(undefined1 *)((long)param_1 + 0x2ded);
  }
  if (((uint)uVar7 >> 0x17 & 1) != 0) {
    *(undefined8 *)((long)param_2 + 0x44) = *(undefined8 *)((long)param_1 + 0x44);
    uVar1 = *(undefined4 *)((long)param_1 + 0x24);
    uVar7 = param_1[5];
    uVar2 = *(undefined4 *)((long)param_1 + 0x2c);
    uVar8 = param_1[6];
    uVar3 = *(undefined8 *)((long)param_1 + 0x3c);
    *(undefined8 *)((long)param_2 + 0x34) = *(undefined8 *)((long)param_1 + 0x34);
    *(undefined8 *)((long)param_2 + 0x3c) = uVar3;
    *(undefined4 *)((long)param_2 + 0x24) = uVar1;
    *(int *)(param_2 + 5) = (int)uVar7;
    *(undefined4 *)((long)param_2 + 0x2c) = uVar2;
    *(int *)(param_2 + 6) = (int)uVar8;
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if (((uint)uVar7 >> 0x15 & 1) != 0) {
    uVar4 = param_1[0x1a2];
    uVar1 = *(undefined4 *)((long)param_1 + 0xd14);
    uVar5 = param_1[0x1a3];
    *(undefined4 *)((long)param_2 + 0xd0c) = *(undefined4 *)((long)param_1 + 0xd0c);
    *(int *)(param_2 + 0x1a2) = (int)uVar4;
    *(undefined4 *)((long)param_2 + 0xd14) = uVar1;
    *(int *)(param_2 + 0x1a3) = (int)uVar5;
  }
  if ((uVar7 >> 0x39 & 1) != 0) {
    *(char *)(param_2 + 0x3fa) = (char)param_1[0x3fa];
    *(undefined1 *)((long)param_2 + 0x1fd1) = *(undefined1 *)((long)param_1 + 0x1fd1);
  }
  if ((uVar7 >> 0x3a & 1) != 0) {
    *(undefined2 *)((long)param_2 + 0x4c) = *(undefined2 *)((long)param_1 + 0x4c);
  }
  if ((uVar7 >> 0x3b & 1) != 0) {
    *(undefined2 *)((long)param_2 + 0x4e) = *(undefined2 *)((long)param_1 + 0x4e);
  }
  if ((uVar7 >> 0x3c & 1) != 0) {
    *(short *)(param_2 + 10) = (short)param_1[10];
  }
  if ((uVar7 >> 0x3d & 1) != 0) {
    *(undefined8 *)((long)param_2 + 0x1fd4) = *(undefined8 *)((long)param_1 + 0x1fd4);
  }
  if ((uVar7 >> 0x3e & 1) != 0) {
    FUN_1001e1c39((long)param_1 + 0xd24,(long)param_2 + 0xd24);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if (((uint)uVar7 >> 0x1d & 1) != 0) {
    FUN_1001dfbb3((long)param_1 + 0x2dee,(long)param_2 + 0x2dee,0x20);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if (((uint)uVar7 >> 0x13 & 1) != 0) {
    FUN_1001e1c39((long)param_1 + 0xf24,(long)param_2 + 0xf24);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if ((long)uVar7 < 0) {
    param_2[0x225] = param_1[0x225];
    param_2[0x227] = param_1[0x227];
    *(char *)(param_2 + 0x228) = (char)param_1[0x228];
    param_2[0x226] = param_1[0x226];
  }
  if ((uVar7 >> 0x24 & 1) != 0) {
    *(undefined2 *)((long)param_2 + 0x16) = *(undefined2 *)((long)param_1 + 0x16);
  }
  if ((uVar8 & 1) != 0) {
    *(undefined8 *)((long)param_2 + 0xd1c) = *(undefined8 *)((long)param_1 + 0xd1c);
  }
  if ((uVar8 & 2) != 0) {
    FUN_1001e1c39(param_1 + 0x59,param_2 + 0x59);
    FUN_1001e1c39(param_1 + 0xd9,param_2 + 0xd9);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if ((uVar8 & 4) != 0) {
    *(undefined1 *)((long)param_2 + 0x2e0e) = *(undefined1 *)((long)param_1 + 0x2e0e);
    *(undefined1 *)((long)param_2 + 0x2e0f) = *(undefined1 *)((long)param_1 + 0x2e0f);
    *(char *)(param_2 + 0x5c2) = (char)param_1[0x5c2];
  }
  if ((uVar8 & 8) != 0) {
    *(undefined8 *)((long)param_2 + 0x2e14) = *(undefined8 *)((long)param_1 + 0x2e14);
  }
  uVar6 = (uint)uVar8;
  if ((uVar6 >> 0x1e & 1) != 0) {
    param_2[0x6c7] = param_1[0x6c7];
  }
  if ((int)uVar6 < 0) {
    param_2[0x6c8] = param_1[0x6c8];
  }
  if ((uVar8 & 0x10) != 0) {
    *(undefined1 *)((long)param_2 + 0x2e1c) = *(undefined1 *)((long)param_1 + 0x2e1c);
  }
  if ((uVar8 & 0x20) != 0) {
    *(undefined1 *)((long)param_2 + 0x2e1d) = *(undefined1 *)((long)param_1 + 0x2e1d);
  }
  if ((uVar8 & 0x40) != 0) {
    *(undefined1 *)((long)param_2 + 0x2e1e) = *(undefined1 *)((long)param_1 + 0x2e1e);
  }
  if ((char)uVar8 < '\0') {
    *(undefined1 *)((long)param_2 + 0x2e1f) = *(undefined1 *)((long)param_1 + 0x2e1f);
  }
  if ((uVar6 >> 0x1c & 1) != 0) {
    *(int *)(param_2 + 0x686) = (int)param_1[0x686];
  }
  if ((uVar6 >> 8 & 1) != 0) {
    *(char *)(param_2 + 0x5c4) = (char)param_1[0x5c4];
  }
  if ((uVar6 >> 9 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x2e21) = *(undefined1 *)((long)param_1 + 0x2e21);
  }
  if ((uVar6 >> 10 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x2e22) = *(undefined1 *)((long)param_1 + 0x2e22);
  }
  if ((uVar6 >> 0xb & 1) != 0) {
    FUN_1001e1c39((long)param_1 + 0x2e24,(long)param_2 + 0x2e24);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if (((uint)uVar8 >> 0xc & 1) != 0) {
    FUN_1001e1c39((long)param_1 + 0x3024,(long)param_2 + 0x3024);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  if (((uint)uVar8 >> 0xd & 1) != 0) {
    *(undefined4 *)((long)param_2 + 0x3224) = *(undefined4 *)((long)param_1 + 0x3224);
  }
  if (((uint)uVar8 >> 0xe & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x2e23) = *(undefined1 *)((long)param_1 + 0x2e23);
  }
  if ((short)uVar8 < 0) {
    FUN_1001e1c39(param_1 + 0x645,param_2 + 0x645);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  uVar6 = (uint)uVar8;
  if ((uVar6 >> 0x10 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x1141) = *(undefined1 *)((long)param_1 + 0x1141);
  }
  if ((uVar6 >> 0x19 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0xac) = *(undefined1 *)((long)param_1 + 0xac);
  }
  if ((uVar6 >> 0x1a & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0xad) = *(undefined1 *)((long)param_1 + 0xad);
  }
  if ((uVar6 >> 0x11 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x1dcc) = *(undefined1 *)((long)param_1 + 0x1dcc);
  }
  if ((uVar6 >> 0x12 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x1dcd) = *(undefined1 *)((long)param_1 + 0x1dcd);
  }
  if ((uVar6 >> 0x13 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x1dce) = *(undefined1 *)((long)param_1 + 0x1dce);
  }
  if ((uVar6 >> 0x14 & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x3ba,param_2 + 0x3ba);
    uVar7 = *param_1;
    uVar8 = param_1[1];
  }
  uVar6 = (uint)uVar8;
  if ((uVar6 >> 0x15 & 1) != 0) {
    *(int *)(param_2 + 0x199) = (int)param_1[0x199];
  }
  if ((uVar6 >> 0x16 & 1) != 0) {
    *(int *)(param_2 + 0x685) = (int)param_1[0x685];
  }
  if ((uVar6 >> 0x17 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x1124) = *(undefined1 *)((long)param_1 + 0x1124);
  }
  if ((uVar6 >> 0x18 & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x1125) = *(undefined1 *)((long)param_1 + 0x1125);
  }
  if ((uVar6 >> 0x1b & 1) != 0) {
    *(undefined4 *)((long)param_2 + 0x342c) = *(undefined4 *)((long)param_1 + 0x342c);
  }
  *param_2 = *param_2 | uVar7;
  param_2[1] = param_2[1] | uVar8;
  return;
}

