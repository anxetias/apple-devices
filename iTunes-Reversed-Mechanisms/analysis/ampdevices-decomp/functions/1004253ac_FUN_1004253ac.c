// name: FUN_1004253ac
// address: 1004253ac

undefined4 FUN_1004253ac(long param_1,undefined1 *param_2)

{
  uint uVar1;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *(undefined1 *)(param_1 + 0x1353);
  }
  uVar1 = *(int *)(param_1 + 0x1300) - 6;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 3);
}

