// name: FUN_100493080
// address: 100493080

uint FUN_100493080(uint *param_1,uint *param_2,char param_3)

{
  double dVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = *param_1;
  uVar6 = *param_2;
  uVar7 = uVar6 ^ uVar4;
  uVar2 = uVar7 & 1;
  if (uVar2 != 0) {
    uVar4 = uVar4 & 0xfffffffe | uVar6 & 1;
    *(short *)param_1 = (short)uVar4;
    uVar6 = *param_2;
    uVar7 = uVar4 ^ uVar6;
  }
  if ((uVar7 & 2) != 0) {
    uVar4 = uVar4 & 0xfffffffd | uVar6 & 2;
    *(short *)param_1 = (short)uVar4;
    uVar6 = *param_2;
    uVar7 = uVar4 ^ uVar6;
    uVar2 = 1;
  }
  if ((uVar7 & 4) != 0) {
    uVar4 = uVar4 & 0xfffffffb | uVar6 & 4;
    *(short *)param_1 = (short)uVar4;
    uVar6 = *param_2;
    uVar7 = uVar4 ^ uVar6;
    uVar2 = 1;
  }
  if ((uVar7 & 8) != 0) {
    uVar4 = uVar4 & 0xfffffff7 | uVar6 & 8;
    *(short *)param_1 = (short)uVar4;
    uVar6 = *param_2;
    uVar7 = uVar4 ^ uVar6;
    uVar2 = 1;
  }
  if ((uVar7 & 0x10) != 0) {
    uVar4 = uVar4 & 0xffffffef | uVar6 & 0x10;
    *(short *)param_1 = (short)uVar4;
    uVar6 = *param_2;
    uVar7 = uVar4 ^ uVar6;
    uVar2 = 1;
  }
  if ((uVar7 & 0x20) != 0) {
    uVar4 = uVar4 & 0xffffffdf | uVar6 & 0x20;
    *(short *)param_1 = (short)uVar4;
    uVar6 = *param_2;
    uVar7 = uVar4 ^ uVar6;
    uVar2 = 1;
  }
  if ((uVar7 & 0x40) != 0) {
    uVar4 = uVar4 & 0xffffffbf | uVar6 & 0x40;
    *(short *)param_1 = (short)uVar4;
    uVar6 = *param_2;
    uVar7 = uVar4 ^ uVar6;
    uVar2 = 1;
  }
  if ((char)uVar7 < '\0') {
    uVar4 = uVar4 & 0xffffff7f | uVar6 & 0x80;
    *(short *)param_1 = (short)uVar4;
    uVar6 = *param_2;
    uVar7 = uVar4 ^ uVar6;
    uVar2 = 1;
  }
  if ((uVar7 >> 8 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffeff | uVar6 & 0x100;
    *(short *)param_1 = (short)uVar4;
    uVar6 = *param_2;
    uVar7 = uVar4 ^ uVar6;
    uVar2 = 1;
  }
  if ((uVar7 >> 9 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffdff | uVar6 & 0x200;
    *(short *)param_1 = (short)uVar4;
    uVar6 = *param_2;
    uVar7 = uVar4 ^ uVar6;
    uVar2 = 1;
  }
  if ((uVar7 >> 10 & 1) != 0) {
    uVar4 = uVar4 & 0xfffffbff | uVar6 & 0x400;
    *(short *)param_1 = (short)uVar4;
    uVar6 = *param_2;
    uVar7 = uVar4 ^ uVar6;
    uVar2 = 1;
  }
  if ((uVar7 >> 0xb & 1) != 0) {
    uVar4 = uVar4 & 0xfffff7ff | uVar6 & 0x800;
    *(short *)param_1 = (short)uVar4;
    uVar6 = *param_2;
    uVar7 = uVar4 ^ uVar6;
    uVar2 = 1;
  }
  uVar5 = (ushort)uVar6;
  uVar3 = (ushort)uVar4;
  if ((uVar7 >> 0xc & 1) != 0) {
    uVar7 = uVar4 & 0xffffefff | uVar6 & 0x1000;
    uVar3 = (ushort)uVar7;
    *(ushort *)param_1 = uVar3;
    uVar5 = (ushort)*param_2;
    uVar7 = uVar7 ^ *param_2;
    uVar2 = 1;
  }
  if ((uVar7 >> 0xd & 1) != 0) {
    *(ushort *)param_1 = uVar3 & 0xdfff | uVar5 & 0x2000;
    uVar2 = 1;
  }
  if (*(char *)((long)param_1 + 2) != *(char *)((long)param_2 + 2)) {
    *(char *)((long)param_1 + 2) = *(char *)((long)param_2 + 2);
    uVar2 = 1;
  }
  if (*(char *)((long)param_1 + 3) != *(char *)((long)param_2 + 3)) {
    *(char *)((long)param_1 + 3) = *(char *)((long)param_2 + 3);
    uVar2 = 1;
  }
  if (param_3 == '\0') {
    if (*(long *)(param_1 + 2) != *(long *)(param_2 + 2)) {
      *(long *)(param_1 + 2) = *(long *)(param_2 + 2);
      uVar2 = 1;
    }
    if (*(long *)(param_1 + 4) != *(long *)(param_2 + 4)) {
      *(long *)(param_1 + 4) = *(long *)(param_2 + 4);
      uVar2 = 1;
    }
  }
  if (*(long *)(param_1 + 6) != *(long *)(param_2 + 6)) {
    *(long *)(param_1 + 6) = *(long *)(param_2 + 6);
    uVar2 = 1;
  }
  if ((char)param_1[8] != (char)param_2[8]) {
    *(char *)(param_1 + 8) = (char)param_2[8];
    uVar2 = 1;
  }
  if (param_1[9] != param_2[9]) {
    param_1[9] = param_2[9];
    uVar2 = 1;
  }
  if (param_1[10] != param_2[10]) {
    param_1[10] = param_2[10];
    uVar2 = 1;
  }
  if (param_1[0xb] != param_2[0xb]) {
    param_1[0xb] = param_2[0xb];
    uVar2 = 1;
  }
  if (param_1[0x18] != param_2[0x18]) {
    param_1[0x18] = param_2[0x18];
    uVar2 = 1;
  }
  dVar1 = *(double *)(param_2 + 0xc);
  if ((*(double *)(param_1 + 0xc) != dVar1) || (NAN(*(double *)(param_1 + 0xc)) || NAN(dVar1))) {
    *(double *)(param_1 + 0xc) = dVar1;
    uVar2 = 1;
  }
  if (*(long *)(param_1 + 0xe) != *(long *)(param_2 + 0xe)) {
    *(long *)(param_1 + 0xe) = *(long *)(param_2 + 0xe);
    uVar2 = 1;
  }
  if (*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_2 + 0x10);
    uVar2 = 1;
  }
  if (*(long *)(param_1 + 0x12) != *(long *)(param_2 + 0x12)) {
    *(long *)(param_1 + 0x12) = *(long *)(param_2 + 0x12);
    uVar2 = 1;
  }
  if (*(long *)(param_1 + 0x14) != *(long *)(param_2 + 0x14)) {
    *(long *)(param_1 + 0x14) = *(long *)(param_2 + 0x14);
    uVar2 = 1;
  }
  if (param_1[0x16] != param_2[0x16]) {
    param_1[0x16] = param_2[0x16];
    uVar2 = 1;
  }
  return uVar2;
}

