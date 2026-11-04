// name: FUN_1002bf534
// address: 1002bf534

uint FUN_1002bf534(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_1002b5ee3(*(undefined8 *)(param_2 + 0x58));
  uVar2 = FUN_1002b5ee3(*(undefined8 *)(param_1 + 0x58));
  uVar3 = (uint)(uVar2 < uVar1);
  if (uVar1 < uVar2) {
    uVar3 = 0xffffffff;
  }
  if (uVar3 == 0) {
    uVar2 = *(uint *)(*(long *)(param_2 + 0x58) + 0x60);
    uVar1 = *(uint *)(*(long *)(param_1 + 0x58) + 0x60);
    uVar3 = (uint)(uVar1 < uVar2);
    if (uVar2 < uVar1) {
      uVar3 = 0xffffffff;
    }
    if (uVar3 == 0) {
      uVar2 = *(uint *)(*(long *)(*(long *)(param_2 + 0x58) + 0x10) + 0x8c);
      uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x58) + 0x10) + 0x8c);
      uVar3 = 0xffffffff;
      if (uVar1 <= uVar2) {
        uVar3 = (uint)(uVar1 < uVar2);
      }
    }
  }
  return uVar3;
}

