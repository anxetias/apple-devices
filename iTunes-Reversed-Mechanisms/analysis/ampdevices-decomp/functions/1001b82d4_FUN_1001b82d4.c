// name: FUN_1001b82d4
// address: 1001b82d4

long FUN_1001b82d4(long param_1,void *param_2,size_t param_3)

{
  size_t *psVar1;
  
  FUN_1001b811c();
  if (param_3 != 0) {
    psVar1 = operator_new(param_3 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
    *psVar1 = param_3;
    *(undefined4 *)(psVar1 + 1) = 1;
    *(undefined1 *)((long)psVar1 + param_3 + 0xc) = 0;
    _memcpy((void *)((long)psVar1 + 0xc),param_2,param_3);
    *(size_t **)(param_1 + 8) = psVar1;
  }
  return param_1;
}

