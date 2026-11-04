// name: FUN_100425376
// address: 100425376

undefined4 FUN_100425376(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x1300);
  if (param_2 != 0) {
    *(bool *)param_2 = uVar1 - 9 < 2;
  }
  return CONCAT31((int3)(uVar1 >> 8),(uVar1 == 0xd || (uVar1 & 0xfffffffe) == 6) || uVar1 - 9 < 2);
}

