// name: FUN_10052c60c
// address: 10052c60c

int FUN_10052c60c(long *param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_40;
  long local_38;
  
  local_38 = 0;
  iVar1 = 0;
  if ((param_1[0xb4] != 0) && ((int)param_1[0xb5] == 0)) {
    FUN_1001e9de0(param_1 + 0xaa);
    iVar1 = FUN_10017d230(param_1[0xb4],param_3,(int)*param_2,1,&local_38);
    param_1[0xa2] = param_1[0xa2] + local_38;
    FUN_1001e9eb9(param_1 + 0xaa);
    if (iVar1 == 0) {
      *param_2 = local_38;
      iVar1 = 0;
      if (param_1[0x9d] != 0) {
        iVar1 = (**(code **)(*param_1 + 0xf8))(param_1,&local_40);
        (**(code **)(*(long *)param_1[0x9d] + 0x10))
                  ((long *)param_1[0x9d],param_1,local_40,param_3,(long)(int)*param_2);
      }
    }
  }
  return iVar1;
}

