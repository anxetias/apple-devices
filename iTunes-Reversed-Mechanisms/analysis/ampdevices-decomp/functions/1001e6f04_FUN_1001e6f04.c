// name: FUN_1001e6f04
// address: 1001e6f04

void FUN_1001e6f04(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  
  puVar2 = &DAT_1008a2370;
  uVar3 = 0;
  do {
    uVar1 = FUN_1001e7b1b(uVar3 & 0xffff);
    *puVar2 = uVar1;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar3 != 0x100);
  return;
}

