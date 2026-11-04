// name: FUN_1005b08fa
// address: 1005b08fa

void FUN_1005b08fa(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  while (iVar1 != 0) {
    FUN_1001ee7ac();
    FUN_1001b153d();
    iVar1 = *(int *)(param_1 + 0x78);
  }
  return;
}

