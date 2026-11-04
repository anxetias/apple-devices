// name: FUN_100123f88
// address: 100123f88

int FUN_100123f88(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  if ((ulong)*(uint *)(param_2 + 0xc) == 0) {
    iVar1 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = (iVar1 - (uint)(*(int *)(param_2 + 0x10 + uVar2 * 4) == 0)) + 2;
      uVar2 = uVar2 + 1;
    } while (*(uint *)(param_2 + 0xc) != uVar2);
  }
  if ((ulong)*(uint *)(param_2 + 0x90) != 0) {
    uVar2 = 0;
    do {
      iVar1 = (iVar1 - (uint)(*(int *)(param_2 + 0x94 + uVar2 * 4) == 0)) + 2;
      uVar2 = uVar2 + 1;
    } while (*(uint *)(param_2 + 0x90) != uVar2);
  }
  if ((ulong)*(uint *)(param_2 + 0x114) != 0) {
    uVar2 = 0;
    do {
      iVar1 = (iVar1 - (uint)(*(int *)(param_2 + 0x118 + uVar2 * 4) == 0)) + 2;
      uVar2 = uVar2 + 1;
    } while (*(uint *)(param_2 + 0x114) != uVar2);
  }
  if ((ulong)*(uint *)(param_2 + 0x198) != 0) {
    uVar2 = 0;
    do {
      iVar1 = (iVar1 - (uint)(*(int *)(param_2 + 0x19c + uVar2 * 4) == 0)) + 2;
      uVar2 = uVar2 + 1;
    } while (*(uint *)(param_2 + 0x198) != uVar2);
  }
  return iVar1;
}

