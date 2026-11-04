// name: FUN_1003aeba1
// address: 1003aeba1

void FUN_1003aeba1(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) != 0) {
    FUN_1001e1c39(param_1 + 2,param_2 + 2);
    uVar1 = *param_1;
  }
  if ((uVar1 & 2) != 0) {
    FUN_1001e1c39(param_1 + 0x82,param_2 + 0x82);
    uVar1 = *param_1;
  }
  if ((uVar1 & 4) != 0) {
    FUN_1001e1c39(param_1 + 0x102,param_2 + 0x102);
    uVar1 = *param_1;
  }
  if ((uVar1 & 8) != 0) {
    FUN_1001e1c39(param_1 + 0x182,param_2 + 0x182);
    uVar1 = *param_1;
  }
  if ((uVar1 & 0x10) != 0) {
    FUN_1001e1c39(param_1 + 0x202,param_2 + 0x202);
    uVar1 = *param_1;
  }
  if ((uVar1 & 0x20) != 0) {
    FUN_1001e1c39(param_1 + 0x282,param_2 + 0x282);
    uVar1 = *param_1;
  }
  if ((uVar1 & 0x40) != 0) {
    *(undefined8 *)(param_2 + 0x402) = *(undefined8 *)(param_1 + 0x402);
  }
  if ((char)uVar1 < '\0') {
    *(short *)(param_2 + 0x404) = (short)param_1[0x404];
  }
  if ((uVar1 >> 8 & 1) != 0) {
    *(undefined2 *)((long)param_2 + 0x1012) = *(undefined2 *)((long)param_1 + 0x1012);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x302,param_2 + 0x302);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 10 & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x382,param_2 + 0x382);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    param_2[0x405] = param_1[0x405];
  }
  if ((uVar1 >> 0xc & 1) != 0) {
    param_2[0x406] = param_1[0x406];
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    param_2[0x407] = param_1[0x407];
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    *(undefined8 *)(param_2 + 0x596) = *(undefined8 *)(param_1 + 0x596);
    param_2[0x409] = param_1[0x409];
  }
  if ((short)uVar1 < 0) {
    param_2[0x40a] = param_1[0x40a];
  }
  if ((uVar1 >> 0x10 & 1) != 0) {
    param_2[0x40b] = param_1[0x40b];
    param_2[0x515] = param_1[0x515];
  }
  if ((uVar1 >> 0x11 & 1) != 0) {
    param_2[0x40e] = param_2[0x40e] | param_1[0x40e];
  }
  if ((uVar1 >> 0x12 & 1) != 0) {
    param_2[0x40c] = param_1[0x40c];
  }
  if ((uVar1 >> 0x13 & 1) != 0) {
    param_2[0x408] = param_1[0x408];
  }
  if ((uVar1 >> 0x15 & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x410,param_2 + 0x410);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x16 & 1) != 0) {
    *(char *)(param_2 + 0x490) = (char)param_1[0x490];
  }
  if ((uVar1 >> 0x17 & 1) != 0) {
    param_2[0x491] = param_1[0x491];
  }
  if ((uVar1 >> 0x18 & 1) != 0) {
    *(undefined2 *)((long)param_2 + 0x1242) = *(undefined2 *)((long)param_1 + 0x1242);
  }
  if ((uVar1 >> 0x19 & 1) != 0) {
    param_2[0x492] = param_1[0x492];
  }
  if ((uVar1 >> 0x1a & 1) != 0) {
    param_2[0x493] = param_1[0x493];
  }
  if ((uVar1 >> 0x1b & 1) != 0) {
    *(short *)(param_2 + 0x494) = (short)param_1[0x494];
  }
  if ((uVar1 >> 0x1c & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x495,param_2 + 0x495);
    uVar1 = *param_1;
  }
  if ((uVar1 >> 0x1d & 1) != 0) {
    *(undefined1 *)((long)param_2 + 0x1241) = *(undefined1 *)((long)param_1 + 0x1241);
  }
  if ((uVar1 >> 0x1e & 1) != 0) {
    FUN_1001e1c39(param_1 + 0x516,param_2 + 0x516);
    uVar1 = *param_1;
  }
  *param_2 = *param_2 | uVar1;
  return;
}

