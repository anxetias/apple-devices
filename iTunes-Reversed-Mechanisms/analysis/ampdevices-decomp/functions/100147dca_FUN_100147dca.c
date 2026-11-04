// name: FUN_100147dca
// address: 100147dca

uint FUN_100147dca(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(param_1 + 0x9c0);
  uVar5 = lVar1 + ((lVar1 + 1U) / 0x270) * -0x270 + 1;
  uVar4 = *(uint *)(param_1 + (uVar5 & 0xffffffff) * 4);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = lVar1 + 0x18dU >> 4;
  uVar3 = 0x9908b0df;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  uVar4 = uVar3 ^ *(uint *)(param_1 +
                           (ulong)((int)(lVar1 + 0x18dU) +
                                  (SUB164(auVar2 * ZEXT816(0xd20d20d20d20d21),8) >> 1) * -0x270) * 4
                           ) ^
          (uVar4 & 0x7ffffffe | *(uint *)(param_1 + lVar1 * 4) & 0x80000000) >> 1;
  *(uint *)(param_1 + lVar1 * 4) = uVar4;
  uVar4 = uVar4 >> 0xb ^ uVar4;
  *(ulong *)(param_1 + 0x9c0) = uVar5;
  uVar4 = (uVar4 & 0x13a58ad) << 7 ^ uVar4;
  uVar4 = (uVar4 & 0x1df8c) << 0xf ^ uVar4;
  return uVar4 >> 0x12 ^ uVar4;
}

