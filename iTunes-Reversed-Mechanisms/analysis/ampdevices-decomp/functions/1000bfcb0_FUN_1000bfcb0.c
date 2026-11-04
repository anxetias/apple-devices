// name: FUN_1000bfcb0
// address: 1000bfcb0

void FUN_1000bfcb0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (((uint)param_1 & 0x320b875a) * -2 + (uint)param_1 + 0x320b875a ^ 0xeb5cc83e) * 0x34a356b1
  ;
  uVar2 = 0x687f6994;
  if (param_1[1] + uVar1 == 0x66c5a1b7) {
    uVar2 = *(uint *)((&PTR_DAT_10082ee00)[(int)((uVar1 ^ *param_1) + 0x57f5bc77)] + 0x52);
  }
  param_1[2] = uVar2;
  return;
}

