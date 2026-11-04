// name: FUN_1004aa733
// address: 1004aa733

long FUN_1004aa733(long param_1)

{
  long lVar1;
  long local_18;
  
  if (*(long *)(param_1 + 0x1318) != 0) {
    return *(long *)(param_1 + 0x1318);
  }
  local_18 = 0;
  lVar1 = *(long *)(param_1 + 0x1310);
  if (*(long *)(param_1 + 0x1310) == 0) {
    FUN_100198282(*(undefined8 *)(param_1 + 0x1308),0,&local_18);
    lVar1 = local_18;
  }
  return lVar1;
}

