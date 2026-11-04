// name: FUN_1001f6fec
// address: 1001f6fec

void FUN_1001f6fec(byte *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  
  *param_2 = 0x12345678;
  param_2[1] = 0x23456789;
  param_2[2] = 0x34567890;
  bVar4 = *param_1;
  if (bVar4 != 0) {
    uVar1 = 0x12345678;
    uVar3 = 0x23456789;
    uVar2 = 0x34567890;
    do {
      param_1 = param_1 + 1;
      uVar1 = uVar1 >> 8 ^ *(ulong *)(param_3 + (ulong)(byte)((byte)uVar1 ^ bVar4) * 8);
      *param_2 = uVar1;
      uVar3 = ((uVar1 & 0xff) + uVar3) * 0x8088405 + 1;
      param_2[1] = uVar3;
      uVar2 = uVar2 >> 8 ^
              *(ulong *)(param_3 + (ulong)(((uint)uVar2 ^ (uint)(uVar3 >> 0x18) & 0xff) & 0xff) * 8)
      ;
      param_2[2] = uVar2;
      bVar4 = *param_1;
    } while (bVar4 != 0);
  }
  return;
}

