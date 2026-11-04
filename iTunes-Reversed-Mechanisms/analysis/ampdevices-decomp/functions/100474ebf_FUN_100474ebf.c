// name: FUN_100474ebf
// address: 100474ebf

void FUN_100474ebf(long param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    param_2 = FUN_1004744bf(param_1,0);
  }
  uVar1 = *(uint *)(param_1 + 0xc2) | 0x800000;
  if ((param_2 & 0xc10010) == 0) {
    uVar1 = *(uint *)(param_1 + 0xc2);
  }
  *(uint *)(param_1 + 0xc2) =
       (uint)((param_2 & 0x30054e) != 0) << 0xf |
       (uint)(-1 < (char)param_2 && (param_2 & 0x20044e) != 0) << 0x10 | uVar1 & 0xfffe7fff;
  return;
}

