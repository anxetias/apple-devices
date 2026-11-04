// name: FUN_1003c2e18
// address: 1003c2e18

bool FUN_1003c2e18(long param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (((param_2 == 0x44574e4c) || (param_2 == 0x4d46494c)) || (param_2 == 0x46494c45)) {
    bVar2 = true;
    if (((iVar1 != 0x44574e4c) && (iVar1 != 0x46494c45)) && (iVar1 != 0x4d46494c)) {
      bVar2 = false;
    }
  }
  else {
    bVar2 = iVar1 == param_2;
  }
  return bVar2;
}

