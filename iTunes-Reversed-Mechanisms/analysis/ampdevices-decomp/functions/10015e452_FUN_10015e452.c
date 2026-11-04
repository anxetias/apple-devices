// name: FUN_10015e452
// address: 10015e452

void FUN_10015e452(long param_1,long param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      uVar1 = *(uint *)(param_1 + lVar2 * 4);
      *(uint *)(param_2 + lVar2 * 4) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      lVar2 = lVar2 + 1;
    } while (param_3 != (int)lVar2);
  }
  return;
}

