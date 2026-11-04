// name: FUN_1001baa68
// address: 1001baa68

undefined8 * FUN_1001baa68(undefined8 *param_1,long *param_2)

{
  if (param_2[1] == 0) {
    if (*param_2 == 0) {
      *(undefined8 *)((long)param_1 + 9) = 0;
      *(undefined8 *)((long)param_1 + 0x11) = 0;
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)((long)param_1 + 0x1c) = 0xfffd;
      *(undefined2 *)(param_1 + 4) = 0;
    }
    else {
      FUN_1001bd1a2(param_1,param_2,*param_2 + 0xc);
    }
  }
  else {
    FUN_1001bd0c4(param_1,param_2,param_2[1] + 0xc);
  }
  return param_1;
}

