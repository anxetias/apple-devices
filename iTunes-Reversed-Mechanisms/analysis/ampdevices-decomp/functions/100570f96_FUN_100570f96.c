// name: FUN_100570f96
// address: 100570f96

undefined8 FUN_100570f96(long *param_1,int param_2,long param_3,long param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 local_60;
  long lStack_58;
  int local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  param_4 = param_4 + *(long *)(param_3 + 0x18);
  cVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_3,param_4,&local_60);
  if (cVar1 != '\0') {
    local_38 = param_5;
    do {
      if (local_50 == param_2) {
        local_38[4] = local_40;
        local_38[2] = CONCAT44(uStack_4c,local_50);
        local_38[3] = uStack_48;
        *local_38 = local_60;
        local_38[1] = lStack_58;
        return 1;
      }
      param_4 = param_4 + lStack_58;
      cVar1 = (**(code **)(*param_1 + 0x78))(param_1,param_3,param_4,&local_60);
    } while (cVar1 != '\0');
  }
  return 0;
}

