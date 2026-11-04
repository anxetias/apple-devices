// name: FUN_1005e26ab
// address: 1005e26ab

void FUN_1005e26ab(void)

{
  int iVar1;
  
  iVar1 = FUN_1001eaf10();
  if (*(int *)(DAT_1008c76a0 + 0x1608) == iVar1 + 10) {
    return;
  }
  *(int *)(DAT_1008c76a0 + 0x1608) = iVar1 + 10;
  FUN_100207cee(8);
  return;
}

