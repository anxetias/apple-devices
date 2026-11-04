// name: FUN_10022da08
// address: 10022da08

undefined8 FUN_10022da08(long param_1,long *param_2)

{
  *(long *)(param_1 + 0x48) = *param_2 - *(long *)(param_1 + 0x58);
  *(long *)(param_1 + 0x50) = param_2[1];
  *(long *)(param_1 + 0x58) = (long)*(int *)((long)param_2 + 0x14) + *(long *)(param_1 + 0x58);
  return 0;
}

