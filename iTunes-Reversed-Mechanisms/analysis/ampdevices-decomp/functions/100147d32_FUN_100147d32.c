// name: FUN_100147d32
// address: 100147d32

ulong FUN_100147d32(undefined8 param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_3[1];
  if (uVar5 - *param_3 != 0) {
    uVar5 = (uVar5 - *param_3) + 1;
    if (uVar5 == 0) {
      uVar2 = FUN_100147dca(param_2);
      return uVar2;
    }
    uVar4 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> uVar4 == 0; uVar4 = uVar4 - 1) {
      }
    }
    uVar2 = (0x20 - (ulong)(uVar4 ^ 0x1f)) -
            (ulong)((uVar5 << ((byte)(uVar4 ^ 0x1f) & 0x1f) & 0x7fffffff) == 0);
    uVar3 = ((uVar2 >> 5 & 0x7ffffff) + 1) - (ulong)((uVar2 & 0x1f) == 0);
    uVar4 = 0;
    if (uVar3 <= uVar2) {
      uVar4 = 0xffffffff >> (-(char)(((ushort)uVar2 & 0xff) / (ushort)(byte)uVar3) & 0x1fU);
    }
    do {
      uVar1 = FUN_100147dca(param_2);
    } while (uVar5 <= (uVar1 & uVar4));
    uVar5 = (uVar1 & uVar4) + *param_3;
  }
  return (ulong)uVar5;
}

