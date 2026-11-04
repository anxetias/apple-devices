// name: FUN_10015d7ff
// address: 10015d7ff

void FUN_10015d7ff(float param_1,int param_2,int param_3,uint param_4,double *param_5)

{
  int iVar1;
  
  *param_5 = (double)param_1;
  *(undefined4 *)(param_5 + 1) = 0x6c70636d;
  *(uint *)((long)param_5 + 0xc) = param_4;
  *(undefined4 *)((long)param_5 + 0x14) = 1;
  *(int *)((long)param_5 + 0x1c) = param_2;
  *(int *)(param_5 + 4) = param_3;
  iVar1 = 1;
  if ((param_4 & 0x20) == 0) {
    iVar1 = param_2;
  }
  *(undefined4 *)((long)param_5 + 0x24) = 0;
  iVar1 = iVar1 * (param_3 + 7U >> 3);
  *(int *)(param_5 + 3) = iVar1;
  *(int *)(param_5 + 2) = iVar1;
  return;
}

