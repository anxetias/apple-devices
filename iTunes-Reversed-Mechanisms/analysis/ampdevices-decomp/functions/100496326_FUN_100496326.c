// name: FUN_100496326
// address: 100496326

uint FUN_100496326(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (uVar2 == 0 || uVar1 == 0) {
    return -(uint)(uVar1 != 0) | (uint)(uVar1 != 0 || uVar2 != 0);
  }
  uVar3 = 0xffffffff;
  if (*(uint *)(uVar1 + 0x5c) <= *(uint *)(uVar2 + 0x5c)) {
    if (*(uint *)(uVar1 + 0x5c) < *(uint *)(uVar2 + 0x5c)) {
      uVar3 = 1;
    }
    else if ((*(uint *)(uVar1 + 0x18) <= *(uint *)(uVar2 + 0x18)) &&
            (uVar3 = 1, *(uint *)(uVar2 + 0x18) == *(uint *)(uVar1 + 0x18))) {
      uVar3 = -(uint)(uVar2 < uVar1) | 1;
    }
  }
  return uVar3;
}

