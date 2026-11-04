// name: FUN_1004c2ab2
// address: 1004c2ab2

void FUN_1004c2ab2(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  undefined8 local_18;
  
  local_18 = 0;
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  FUN_1004c2aee(param_1,param_3,0,&local_18);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = (undefined4)local_18;
  }
  return;
}

