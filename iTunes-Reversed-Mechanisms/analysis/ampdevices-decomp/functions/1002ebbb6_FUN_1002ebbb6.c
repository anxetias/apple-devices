// name: FUN_1002ebbb6
// address: 1002ebbb6

ulong FUN_1002ebbb6(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = FUN_1003258cc();
    uVar3 = (ulong)uVar2;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    bVar1 = FUN_1003258cc();
    uVar3 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 | bVar1);
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    bVar1 = FUN_1003258cc();
    uVar3 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 | bVar1);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    bVar1 = FUN_1003258cc();
    uVar3 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 | bVar1);
  }
  return uVar3;
}

