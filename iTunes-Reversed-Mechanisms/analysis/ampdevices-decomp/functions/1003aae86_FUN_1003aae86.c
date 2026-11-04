// name: FUN_1003aae86
// address: 1003aae86

void FUN_1003aae86(long param_1,ulong *param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  fVar1 = DAT_100717f3c;
  uVar3 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x10) < *(uint *)(param_1 + 0xc)) {
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) < *(uint *)(param_1 + 0x24)) {
    uVar2 = *(uint *)(param_1 + 0x24);
  }
  fVar4 = DAT_100747454 / (float)uVar2;
  uVar2 = -(uint)(SQRT(DAT_100717f3c / (float)uVar3) * (float)uVar2 < DAT_100747454);
  fVar4 = (float)(~uVar2 & (uint)(DAT_100717f3c / (fVar4 * fVar4)) | (uint)(float)uVar3 & uVar2);
  *param_2 = *param_2 | 2;
  uVar3 = -(uint)(0.0 < fVar4);
  fVar1 = (float)(~uVar3 & (uint)fVar1 | uVar3 & (uint)fVar4);
  uVar3 = -(uint)(fVar1 < DAT_1007439c0);
  *(short *)(param_2 + 3) = (short)(int)(float)(~uVar3 & DAT_100747458 | uVar3 & (uint)fVar1);
  return;
}

