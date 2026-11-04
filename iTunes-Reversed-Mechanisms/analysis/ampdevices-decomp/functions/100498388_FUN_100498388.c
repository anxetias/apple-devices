// name: FUN_100498388
// address: 100498388

uint FUN_100498388(ulong param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(param_1 + 0xa4);
  uVar2 = *(uint *)(param_2 + 0xa4);
  if (uVar1 == uVar2) {
    uVar1 = *(uint *)(param_2 + 0x5c);
    uVar2 = *(uint *)(param_1 + 0x5c);
    if (uVar2 >= uVar1 && uVar2 != uVar1) {
      return 0xffffffff;
    }
    if (uVar2 < uVar1) {
      return 1;
    }
    if (*(uint *)(param_2 + 0x18) < *(uint *)(param_1 + 0x18)) {
      return 0xffffffff;
    }
    if (*(uint *)(param_2 + 0x18) != *(uint *)(param_1 + 0x18)) {
      return 1;
    }
    bVar3 = param_2 < param_1;
  }
  else {
    if (uVar1 == 0) {
      return 1;
    }
    if (uVar2 == 0) {
      return 0xffffffff;
    }
    bVar3 = uVar1 < uVar2;
  }
  return -(uint)bVar3 | 1;
}

