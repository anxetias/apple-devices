// name: FUN_10015fb7e
// address: 10015fb7e

void FUN_10015fb7e(long *param_1,long param_2,uint param_3)

{
  *param_1 = param_2;
  param_1[1] = (ulong)param_3 + param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)((long)param_1 + 0x14) = param_3;
  return;
}

