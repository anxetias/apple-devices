// name: FUN_100271d11
// address: 100271d11

undefined1 FUN_100271d11(long param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  
  if (0x23 < *(uint *)(param_1 + 0x14)) {
    uVar2 = *(uint *)(param_1 + 0x38);
    do {
      uVar1 = (ulong)uVar2;
      if (*(char *)(param_2 + uVar1) == 'V') {
        if (((*(char *)(param_2 + 1 + uVar1) == 'B') && (*(char *)(param_2 + 2 + uVar1) == 'R')) &&
           (*(char *)(param_2 + 3 + uVar1) == 'I')) {
          return 1;
        }
      }
      else if (((*(char *)(param_2 + uVar1) == 'X') && (*(char *)(param_2 + 1 + uVar1) == 'i')) &&
              ((*(char *)(param_2 + 2 + uVar1) == 'n' && (*(char *)(param_2 + 3 + uVar1) == 'g'))))
      {
        return 1;
      }
      bVar3 = uVar2 != 0x20;
      uVar2 = 0x20;
    } while (bVar3);
  }
  return 0;
}

