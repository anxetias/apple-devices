// name: FUN_1001166e6
// address: 1001166e6

undefined8 FUN_1001166e6(long param_1,long param_2,int param_3)

{
  float fVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  bVar2 = *(byte *)(param_2 + 0xe8c);
  if ((ulong)bVar2 != 0) {
    uVar3 = 0;
    do {
      uVar4 = (uint)(long)*(float *)(param_2 + uVar3 * 4);
      uVar6 = (uVar4 >> (param_3 == 0)) + 5;
      if (0x3f < uVar6) {
        return 0xfffffffe;
      }
      uVar4 = (uVar4 & param_3 == 0) << 2;
      fVar1 = *(float *)(&DAT_100701d58 + uVar4);
      uVar5 = (ulong)uVar6;
      *(float *)(param_2 + uVar3 * 4) =
           *(float *)(&DAT_100701d50 + uVar4) * *(float *)(param_1 + 0xd550 + uVar5 * 4);
      *(float *)(param_2 + 0x3c0 + uVar3 * 4) = fVar1 * *(float *)(param_1 + 0xd6d0 + uVar5 * 4);
      *(undefined4 *)(param_2 + 0x7f8 + uVar3 * 4) = *(undefined4 *)(param_1 + 0xdad0 + uVar5 * 4);
      uVar3 = uVar3 + 1;
    } while (bVar2 != uVar3);
  }
  return 0;
}

