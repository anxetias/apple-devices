// name: FUN_1001d4b5f
// address: 1001d4b5f

void FUN_1001d4b5f(undefined2 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 8);
  *(undefined2 *)(param_2 + 0x7c) = *param_1;
  *(undefined4 *)(param_2 + 0xa2) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x10) = 0x52436d70;
  FUN_1001eac02(param_2,lVar1 + 0x998);
  FUN_1001d4365(lVar1);
  return;
}

