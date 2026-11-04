// name: FUN_1004b3506
// address: 1004b3506

ulong FUN_1004b3506(long param_1)

{
  ulong uVar1;
  bool bVar2;
  
  bVar2 = true;
  if ((*(char *)(param_1 + 0x178) == '\0') && (*(int *)(param_1 + 0x170) == 0)) {
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar1 = FUN_1004b1b12(*(long *)(param_1 + 0x30));
      return uVar1;
    }
    if (*(long *)(param_1 + 0x28) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(char *)(*(long *)(param_1 + 0x28) + 0x144) != '\0';
    }
  }
  return (ulong)bVar2;
}

