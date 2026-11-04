// name: FUN_100109006
// address: 100109006

undefined8 FUN_100109006(long param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (int)(long)((((float)*(uint *)(param_1 + 0x40) + DAT_100700b24) * DAT_100700b28) /
                      (float)*(uint *)(param_1 + 0x34) + DAT_100700b28);
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (*(int *)(param_1 + 0x40) - 1U >> 1) - iVar1 * *(int *)(param_1 + 0x34);
  }
  return 0;
}

