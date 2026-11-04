// name: FUN_1001b83ae
// address: 1001b83ae

undefined * FUN_1001b83ae(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    if (*param_1 == 0) {
      return &DAT_100711b02;
    }
    FUN_1001b87d0(param_1);
    lVar1 = param_1[1];
    if (lVar1 == 0) {
      return &DAT_100711b02;
    }
  }
  return (undefined *)(lVar1 + 0xc);
}

