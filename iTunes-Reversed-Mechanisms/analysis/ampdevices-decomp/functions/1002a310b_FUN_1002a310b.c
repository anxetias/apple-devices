// name: FUN_1002a310b
// address: 1002a310b

bool FUN_1002a310b(long param_1,long param_2)

{
  bool bVar1;
  
  if ((*(byte *)(param_1 + 0xb3) & 2) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(byte *)(param_2 + 0xb3) & 2) == 0;
  }
  return bVar1;
}

