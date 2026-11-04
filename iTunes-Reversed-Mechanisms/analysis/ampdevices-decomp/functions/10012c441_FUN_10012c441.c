// name: FUN_10012c441
// address: 10012c441

void FUN_10012c441(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long local_58;
  undefined8 local_50;
  long *local_48;
  long *local_40;
  undefined1 local_38;
  long local_30;
  
  local_40 = &local_30;
  local_48 = &local_58;
  plVar2 = param_2;
  local_58 = param_4;
  local_50 = param_1;
  if (param_2 == param_3) {
    local_38 = 1;
    local_30 = param_4;
  }
  else {
    do {
      local_30 = param_4;
      FUN_10012d05c(param_4,plVar2);
      *(int *)(param_4 + 0x30) = (int)plVar2[6];
      plVar2 = plVar2 + 8;
      param_4 = local_30 + 0x40;
    } while (plVar2 != param_3);
    local_38 = 1;
    local_30 = param_4;
    for (; param_2 != param_3; param_2 = param_2 + 8) {
      plVar2 = (long *)param_2[4];
      if (param_2 == plVar2) {
        lVar1 = 0x20;
LAB_10012c4c7:
        (**(code **)(*plVar2 + lVar1))();
      }
      else {
        lVar1 = 0x28;
        if (plVar2 != (long *)0x0) goto LAB_10012c4c7;
      }
    }
  }
  FUN_10012c4ee(&local_50);
  return;
}

