// name: FUN_1001d62dc
// address: 1001d62dc

undefined4 FUN_1001d62dc(long param_1,long param_2)

{
  *(long *)(param_2 + 8) = param_1;
  *(undefined4 *)(param_2 + 0x14) = 1;
  FUN_1001eac02(param_2,param_1 + 0x998);
  FUN_1001d4365(param_1);
  FUN_1001d67d7(param_2);
  return *(undefined4 *)(param_2 + 0x14);
}

