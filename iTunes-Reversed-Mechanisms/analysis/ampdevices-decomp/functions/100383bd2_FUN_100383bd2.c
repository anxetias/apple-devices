// name: FUN_100383bd2
// address: 100383bd2

void FUN_100383bd2(char *param_1,ulong *param_2,long param_3,ulong *param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  if ((param_2 == (ulong *)0x0) || (uVar3 = *param_2, ((uint)uVar3 >> 0x1a & 1) != 0)) {
    if (*(long *)(param_3 + 8) == *(long *)(param_1 + 0x2e)) {
      uVar1 = 0;
    }
    else {
      *(long *)(param_3 + 8) = *(long *)(param_1 + 0x2e);
      uVar1 = 0x100000000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383c10;
    }
LAB_100383c17:
    if (*(long *)(param_3 + 0x10) != *(long *)(param_1 + 0x50)) {
      *(long *)(param_3 + 0x10) = *(long *)(param_1 + 0x50);
      uVar1 = uVar1 | 0x200000000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383c32;
    }
LAB_100383c38:
    if (*(long *)(param_3 + 0x28) != *(long *)(param_1 + 0x48)) {
      *(long *)(param_3 + 0x28) = *(long *)(param_1 + 0x48);
      uVar1 = uVar1 | 0x20;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383c52;
    }
LAB_100383c58:
    if (*(char *)(param_3 + 0x1c) != *param_1) {
      *(char *)(param_3 + 0x1c) = *param_1;
      uVar1 = uVar1 | 1;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383c71;
    }
LAB_100383c77:
    if (*(char *)(param_3 + 0x1d) != param_1[0x2b]) {
      *(char *)(param_3 + 0x1d) = param_1[0x2b];
      uVar1 = uVar1 | 2;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383c91;
    }
LAB_100383c97:
    if (*(char *)(param_3 + 0x1e) != param_1[1]) {
      *(char *)(param_3 + 0x1e) = param_1[1];
      uVar1 = uVar1 | 4;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383cb1;
    }
LAB_100383cb7:
    if (*(int *)(param_3 + 0x20) != *(int *)(param_1 + 4)) {
      *(int *)(param_3 + 0x20) = *(int *)(param_1 + 4);
      uVar1 = uVar1 | 8;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383cd1;
    }
LAB_100383cd7:
    if (*(int *)(param_3 + 0x24) != *(int *)(param_1 + 8)) {
      *(int *)(param_3 + 0x24) = *(int *)(param_1 + 8);
      uVar1 = uVar1 | 0x10;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383cf1;
    }
LAB_100383cf7:
    if (*(int *)(param_3 + 0x60) != *(int *)(param_1 + 0x68)) {
      *(int *)(param_3 + 0x60) = *(int *)(param_1 + 0x68);
      uVar1 = uVar1 | 0x200;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383d13;
    }
LAB_100383d1a:
    if (*(long *)(param_3 + 0x68) != *(long *)(param_1 + 0x22)) {
      *(long *)(param_3 + 0x68) = *(long *)(param_1 + 0x22);
      uVar1 = uVar1 | 0x800;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383d36;
    }
LAB_100383d3b:
    if (*(char *)(param_3 + 100) != param_1[0x2a]) {
      *(char *)(param_3 + 100) = param_1[0x2a];
      uVar1 = uVar1 | 0x400;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383d57;
    }
LAB_100383d5e:
    if (*(long *)(param_3 + 0x80) != *(long *)(param_1 + 0x3a)) {
      *(long *)(param_3 + 0x80) = *(long *)(param_1 + 0x3a);
      uVar1 = uVar1 | 0x2000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383d80;
    }
LAB_100383d87:
    if (*(int *)(param_3 + 0x88) != *(int *)(param_1 + 0xaa)) {
      *(int *)(param_3 + 0x88) = *(int *)(param_1 + 0xaa);
      uVar1 = uVar1 | 0x2000000000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383dab;
    }
LAB_100383db2:
    if (*(int *)(param_3 + 0x8c) != *(int *)(param_1 + 0xa2)) {
      *(int *)(param_3 + 0x8c) = *(int *)(param_1 + 0xa2);
      uVar1 = uVar1 | 0x800000000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383dd6;
    }
LAB_100383ddd:
    if (*(int *)(param_3 + 0x90) != *(int *)(param_1 + 0x36)) {
      *(int *)(param_3 + 0x90) = *(int *)(param_1 + 0x36);
      uVar1 = uVar1 | 0x4000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383dff;
    }
LAB_100383e06:
    if (*(char *)(param_3 + 0xa8) != param_1[0x2c]) {
      *(char *)(param_3 + 0xa8) = param_1[0x2c];
      uVar1 = uVar1 | 0x8000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383e28;
    }
LAB_100383e2f:
    if (*(char *)(param_3 + 0xa9) != param_1[0x42]) {
      *(char *)(param_3 + 0xa9) = param_1[0x42];
      uVar1 = uVar1 | 0x10000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383e51;
    }
LAB_100383e58:
    if (*(char *)(param_3 + 0xaa) != param_1[0x43]) {
      *(char *)(param_3 + 0xaa) = param_1[0x43];
      uVar1 = uVar1 | 0x20000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383e7a;
    }
LAB_100383e81:
    if (*(int *)(param_3 + 0xc0) != *(int *)(param_1 + 0xa6)) {
      *(int *)(param_3 + 0xc0) = *(int *)(param_1 + 0xa6);
      uVar1 = uVar1 | 0x1000000000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383ea5;
    }
LAB_100383eac:
    if (*(int *)(param_3 + 0xc4) != *(int *)(param_1 + 100)) {
      *(int *)(param_3 + 0xc4) = *(int *)(param_1 + 100);
      uVar1 = uVar1 | 0x400000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383ece;
    }
LAB_100383ed5:
    if (*(int *)(param_3 + 200) != *(int *)(param_1 + 0x6c)) {
      *(int *)(param_3 + 200) = *(int *)(param_1 + 0x6c);
      uVar1 = uVar1 | 0x800000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383ef7;
    }
LAB_100383efe:
    if (*(long *)(param_3 + 0xb8) != *(long *)(param_1 + 0x5c)) {
      *(long *)(param_3 + 0xb8) = *(long *)(param_1 + 0x5c);
      uVar1 = uVar1 | 0x1000000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383f20;
    }
LAB_100383f27:
    if (*(char *)(param_3 + 0xcc) != param_1[0x58]) {
      *(char *)(param_3 + 0xcc) = param_1[0x58];
      uVar1 = uVar1 | 0x2000000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383f49;
    }
LAB_100383f50:
    if (*(char *)(param_3 + 0xae) != param_1[0x7c]) {
      *(char *)(param_3 + 0xae) = param_1[0x7c];
      uVar1 = uVar1 | 0x100000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383f72;
    }
LAB_100383f77:
    if (*(char *)(param_3 + 0xaf) != param_1[0x7d]) {
      *(char *)(param_3 + 0xaf) = param_1[0x7d];
      uVar1 = uVar1 | 0x10000000000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar3 = *param_2;
      goto LAB_100383f98;
    }
LAB_100383f9f:
    if (*(char *)(param_3 + 0xb0) != param_1[0x96]) {
      *(char *)(param_3 + 0xb0) = param_1[0x96];
      uVar1 = uVar1 | 0x200000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar2 = (uint)*param_2;
      goto LAB_100383fc4;
    }
LAB_100383fcb:
    if (*(char *)(param_3 + 0xcd) != param_1[0x86]) {
      *(char *)(param_3 + 0xcd) = param_1[0x86];
      uVar1 = uVar1 | 0x4000000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar2 = (uint)*param_2;
      goto LAB_100383ff0;
    }
LAB_100383ff7:
    if (*(char *)(param_3 + 0xce) != param_1[0x87]) {
      *(char *)(param_3 + 0xce) = param_1[0x87];
      uVar1 = uVar1 | 0x8000000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar2 = (uint)*param_2;
      goto LAB_10038401c;
    }
LAB_100384023:
    if (*(char *)(param_3 + 0xcf) != param_1[0x88]) {
      *(char *)(param_3 + 0xcf) = param_1[0x88];
      uVar1 = uVar1 | 0x10000000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar2 = (uint)*param_2;
      goto LAB_100384048;
    }
LAB_10038404f:
    if (*(char *)(param_3 + 0xad) != param_1[0xc]) {
      *(char *)(param_3 + 0xad) = param_1[0xc];
      uVar1 = uVar1 | 0x80000000;
    }
    if (param_2 != (ulong *)0x0) {
      uVar2 = (uint)*param_2;
      goto LAB_100384070;
    }
  }
  else {
    uVar1 = 0;
LAB_100383c10:
    if (((uint)uVar3 >> 0x1b & 1) != 0) goto LAB_100383c17;
LAB_100383c32:
    if ((uVar3 & 0x20) != 0) goto LAB_100383c38;
LAB_100383c52:
    if ((uVar3 & 1) != 0) goto LAB_100383c58;
LAB_100383c71:
    if ((uVar3 & 2) != 0) goto LAB_100383c77;
LAB_100383c91:
    if ((uVar3 & 4) != 0) goto LAB_100383c97;
LAB_100383cb1:
    if ((uVar3 & 8) != 0) goto LAB_100383cb7;
LAB_100383cd1:
    if ((uVar3 & 0x10) != 0) goto LAB_100383cd7;
LAB_100383cf1:
    if ((uVar3 & 0x40) != 0) goto LAB_100383cf7;
LAB_100383d13:
    if (((uint)uVar3 >> 8 & 1) != 0) goto LAB_100383d1a;
LAB_100383d36:
    if ((char)uVar3 < '\0') goto LAB_100383d3b;
LAB_100383d57:
    if (((uint)uVar3 >> 9 & 1) != 0) goto LAB_100383d5e;
LAB_100383d80:
    if (((uint)uVar3 >> 0x1e & 1) != 0) goto LAB_100383d87;
LAB_100383dab:
    if (((uint)uVar3 >> 0x1c & 1) != 0) goto LAB_100383db2;
LAB_100383dd6:
    if (((uint)uVar3 >> 10 & 1) != 0) goto LAB_100383ddd;
LAB_100383dff:
    if (((uint)uVar3 >> 0xb & 1) != 0) goto LAB_100383e06;
LAB_100383e28:
    if (((uint)uVar3 >> 0xc & 1) != 0) goto LAB_100383e2f;
LAB_100383e51:
    if (((uint)uVar3 >> 0xd & 1) != 0) goto LAB_100383e58;
LAB_100383e7a:
    if (((uint)uVar3 >> 0x1d & 1) != 0) goto LAB_100383e81;
LAB_100383ea5:
    if (((uint)uVar3 >> 0x12 & 1) != 0) goto LAB_100383eac;
LAB_100383ece:
    if (((uint)uVar3 >> 0x13 & 1) != 0) goto LAB_100383ed5;
LAB_100383ef7:
    if (((uint)uVar3 >> 0x14 & 1) != 0) goto LAB_100383efe;
LAB_100383f20:
    if (((uint)uVar3 >> 0x15 & 1) != 0) goto LAB_100383f27;
LAB_100383f49:
    if (((uint)uVar3 >> 0x10 & 1) != 0) goto LAB_100383f50;
LAB_100383f72:
    if ((uVar3 & 0x100000000) != 0) goto LAB_100383f77;
LAB_100383f98:
    uVar2 = (uint)uVar3;
    if ((uVar2 >> 0x11 & 1) != 0) goto LAB_100383f9f;
LAB_100383fc4:
    if ((uVar2 >> 0x16 & 1) != 0) goto LAB_100383fcb;
LAB_100383ff0:
    if ((uVar2 >> 0x17 & 1) != 0) goto LAB_100383ff7;
LAB_10038401c:
    if ((uVar2 >> 0x18 & 1) != 0) goto LAB_100384023;
LAB_100384048:
    if ((uVar2 >> 0x19 & 1) != 0) goto LAB_10038404f;
LAB_100384070:
    if (-1 < (int)uVar2) goto LAB_10038408e;
  }
  if (*(long *)(param_3 + 0x100) != *(long *)(param_1 + 0x74)) {
    *(long *)(param_3 + 0x100) = *(long *)(param_1 + 0x74);
    uVar1 = uVar1 | 0x4000000000;
  }
LAB_10038408e:
  if (param_4 != (ulong *)0x0) {
    *param_4 = uVar1;
  }
  return;
}

