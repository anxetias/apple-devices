// name: FUN_1001b7a9a
// address: 1001b7a9a

void FUN_1001b7a9a(undefined8 *param_1,void *param_2,size_t param_3)

{
  size_t *psVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != 0 && param_2 != (void *)0x0) {
    psVar1 = operator_new(param_3 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
    *psVar1 = param_3;
    *(undefined4 *)(psVar1 + 1) = 1;
    *(undefined1 *)((long)psVar1 + param_3 + 0xc) = 0;
    _memcpy((void *)((long)psVar1 + 0xc),param_2,param_3);
    param_1[1] = psVar1;
  }
  return;
}

