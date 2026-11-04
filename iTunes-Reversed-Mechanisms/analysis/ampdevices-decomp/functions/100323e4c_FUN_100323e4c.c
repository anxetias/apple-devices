// name: FUN_100323e4c
// address: 100323e4c

undefined8 FUN_100323e4c(long param_1,long *param_2)

{
  **(ulong **)(param_1 + 8) = **(ulong **)(param_1 + 8) ^ *(ulong *)(*param_2 + 8);
  return 0;
}

