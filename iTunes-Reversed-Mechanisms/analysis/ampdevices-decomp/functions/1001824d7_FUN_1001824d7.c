// name: FUN_1001824d7
// address: 1001824d7

undefined1 FUN_1001824d7(long param_1,short *param_2)

{
  undefined1 uVar1;
  
  if (((param_1 == 0) || (uVar1 = 1, (*(byte *)(param_1 + 9) & 0x40) == 0)) &&
     ((param_2 == (short *)0x0 || ((*param_2 == 0 || (uVar1 = 1, param_2[1] != 0x2e)))))) {
    uVar1 = 0;
  }
  return uVar1;
}

