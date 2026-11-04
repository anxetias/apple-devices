// name: FUN_10019270e
// address: 10019270e

bool FUN_10019270e(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_100192cd3();
  if ((iVar1 == 0) && (iVar1 = FUN_100192cd3(param_2), iVar1 == 0)) {
    return *(int *)(param_1 + 0x41c) == *(int *)(param_2 + 0x41c);
  }
  return false;
}

