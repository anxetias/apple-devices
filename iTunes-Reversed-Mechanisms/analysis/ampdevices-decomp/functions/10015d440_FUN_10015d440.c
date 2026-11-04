// name: FUN_10015d440
// address: 10015d440

void FUN_10015d440(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    *(byte *)(lVar1 + 0x18) = *(byte *)(lVar1 + 0x18) | 2;
    uVar2 = **(uint **)(lVar1 + 0x20);
    uVar2 = (uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) +
            param_2;
    **(uint **)(lVar1 + 0x20) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 * 0x1000000;
  }
  return;
}

