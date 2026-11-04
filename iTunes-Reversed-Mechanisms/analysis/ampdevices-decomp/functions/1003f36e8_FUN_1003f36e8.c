// name: FUN_1003f36e8
// address: 1003f36e8

uint FUN_1003f36e8(uint param_1,int param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + 8);
  uVar1 = *(uint *)(lVar2 + 0xc2);
  if ((uVar1 >> 0x1b & 1) == 0) {
    if (param_2 == 6) {
      return uVar1 >> 0x1f;
    }
    if ((int)uVar1 < 0) {
      return (uint)(param_2 == 2 & (byte)(param_1 >> 0xb) & 1);
    }
    if (param_2 - 1U < 2) {
      return (uint)(*(long *)(lVar2 + 0x58) == param_3);
    }
    if (param_2 == 10) {
      return (uint)(*(long *)(lVar2 + 0x58) != param_3);
    }
  }
  return 0;
}

