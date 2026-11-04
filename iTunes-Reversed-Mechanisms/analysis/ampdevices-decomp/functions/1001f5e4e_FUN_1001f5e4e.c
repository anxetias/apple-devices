// name: FUN_1001f5e4e
// address: 1001f5e4e

int FUN_1001f5e4e(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0xec);
  if (*(int *)(param_1 + 0x10138) != 0) {
    if (*(uint *)(param_1 + 0xec) == 0) {
      uVar2 = 0;
    }
    else {
      uVar3 = 0;
      do {
        uVar4 = (uint)*(ulong *)(param_1 + 0x10168);
        uVar5 = *(ulong *)(param_1 + 0x10158) >> 8 ^
                *(ulong *)(*(long *)(param_1 + 0x10170) +
                          (ulong)(byte)(*(byte *)(param_1 + 0x128 + uVar3) ^
                                       (byte)*(ulong *)(param_1 + 0x10158)) * 8);
        *(ulong *)(param_1 + 0x10158) = uVar5;
        lVar6 = ((uVar5 & 0xff) + *(long *)(param_1 + 0x10160)) * 0x8088405 + 1;
        *(long *)(param_1 + 0x10160) = lVar6;
        *(ulong *)(param_1 + 0x10168) =
             *(ulong *)(param_1 + 0x10168) >> 8 ^
             *(ulong *)(*(long *)(param_1 + 0x10170) +
                       (ulong)(((uint)((ulong)lVar6 >> 0x18) & 0xff ^ uVar4) & 0xff) * 8);
        pbVar1 = (byte *)(param_1 + 0x128 + uVar3);
        *pbVar1 = *pbVar1 ^ (byte)((uVar4 & 0xfffd ^ 3) * (uVar4 | 2) >> 8);
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
  }
  uVar2 = (**(code **)(param_1 + 0x10))
                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),param_1 + 0x128
                     ,uVar2);
  uVar4 = *(uint *)(param_1 + 0xec);
  *(ulong *)(param_1 + 0x10148) = (ulong)uVar4 + *(long *)(param_1 + 0x10148);
  *(long *)(param_1 + 0x10150) = *(long *)(param_1 + 0x88) + *(long *)(param_1 + 0x10150);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  return -(uint)(uVar2 != uVar4);
}

