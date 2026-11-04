// name: FUN_1002e766c
// address: 1002e766c

long FUN_1002e766c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = &local_28;
  local_40 = &local_50;
  local_30 = 0;
  local_50 = param_4;
  local_48 = param_1;
  for (; local_28 = param_4, param_2 != param_3; param_2 = param_2 + 0x38) {
    FUN_1002e76f4(param_4,param_2);
    param_4 = local_28 + 0x38;
  }
  local_30 = 1;
  FUN_1002e7772();
  return param_4;
}

