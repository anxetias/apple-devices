// name: FUN_10054021a
// address: 10054021a

long FUN_10054021a(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x500);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x508);
  }
  return lVar1;
}

