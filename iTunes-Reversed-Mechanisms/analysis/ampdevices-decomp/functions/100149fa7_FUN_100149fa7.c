// name: FUN_100149fa7
// address: 100149fa7

void FUN_100149fa7(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = &local_28;
  local_40 = &local_50;
  local_30 = 0;
  lVar1 = param_2;
  local_50 = param_4;
  local_48 = param_1;
  if (param_2 == param_3) {
    local_30 = 1;
    local_28 = param_4;
  }
  else {
    do {
      local_28 = param_4;
      FUN_10014a04c(param_4,lVar1);
      lVar1 = lVar1 + 0x10;
      param_4 = local_28 + 0x10;
    } while (lVar1 != param_3);
    local_30 = 1;
    local_28 = param_4;
    for (; param_2 != param_3; param_2 = param_2 + 0x10) {
      FUN_1001ab240(param_2 + 8);
      FUN_1001ab006(param_2);
    }
  }
  FUN_10014a086(&local_48);
  return;
}

