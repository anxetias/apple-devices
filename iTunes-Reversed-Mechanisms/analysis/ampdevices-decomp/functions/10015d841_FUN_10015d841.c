// name: FUN_10015d841
// address: 10015d841

void FUN_10015d841(float param_1,int param_2,int param_3,double *param_4)

{
  *param_4 = (double)param_1;
  param_4[1] = 1.99968181261044e-313;
  *(undefined4 *)((long)param_4 + 0x14) = 1;
  *(int *)((long)param_4 + 0x1c) = param_2;
  param_4[4] = 1.58101006669199e-322;
  if (param_3 == 0) {
    *(undefined4 *)((long)param_4 + 0xc) = 0x29;
    param_2 = 4;
  }
  else {
    param_2 = param_2 << 2;
  }
  *(int *)(param_4 + 3) = param_2;
  *(int *)(param_4 + 2) = param_2;
  return;
}

