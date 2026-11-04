// name: FUN_1001b8336
// address: 1001b8336

undefined2 * FUN_1001b8336(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    if (param_1[1] == 0) {
      return &DAT_100711b00;
    }
    FUN_1001b8454(param_1);
    lVar1 = *param_1;
    if (lVar1 == 0) {
      return &DAT_100711b00;
    }
  }
  return (undefined2 *)(lVar1 + 0xc);
}

