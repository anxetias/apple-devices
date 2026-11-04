// name: FUN_10013381d
// address: 10013381d

void FUN_10013381d(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long local_50;
  undefined8 local_48;
  long *local_40;
  long *local_38;
  undefined1 local_30;
  long local_28;
  
  local_38 = &local_28;
  local_40 = &local_50;
  plVar2 = param_2;
  local_50 = param_4;
  local_48 = param_1;
  if (param_2 == param_3) {
    local_30 = 1;
    local_28 = param_4;
  }
  else {
    do {
      local_28 = param_4;
      FUN_1001338ba(param_4,plVar2);
      plVar2 = plVar2 + 6;
      param_4 = local_28 + 0x30;
    } while (plVar2 != param_3);
    local_30 = 1;
    local_28 = param_4;
    for (; param_2 != param_3; param_2 = param_2 + 6) {
      plVar2 = (long *)param_2[4];
      if (param_2 == plVar2) {
        lVar1 = 0x20;
LAB_100133895:
        (**(code **)(*plVar2 + lVar1))();
      }
      else {
        lVar1 = 0x28;
        if (plVar2 != (long *)0x0) goto LAB_100133895;
      }
    }
  }
  FUN_100133686(&local_48);
  return;
}

