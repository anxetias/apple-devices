// name: FUN_1001335fe
// address: 1001335fe

long FUN_1001335fe(undefined8 param_1,long param_2,long param_3,long param_4)

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
  for (; local_28 = param_4, param_2 != param_3; param_2 = param_2 + 0x30) {
    FUN_1003da7e0(param_4,param_2);
    param_4 = local_28 + 0x30;
  }
  local_30 = 1;
  FUN_100133686();
  return param_4;
}

