// name: FUN_10049d06c
// address: 10049d06c

long FUN_10049d06c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x4e0);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x4e8);
  }
  return lVar1;
}

