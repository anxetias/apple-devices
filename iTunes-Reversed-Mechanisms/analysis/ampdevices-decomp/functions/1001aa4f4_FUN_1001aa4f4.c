// name: FUN_1001aa4f4
// address: 1001aa4f4

void FUN_1001aa4f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 local_30;
  
  uVar1 = DAT_1008c4d98;
  local_30 = FUN_1001b8d0c(param_2);
  uVar1 = _CFErrorCreate(uVar1,local_30,param_3,*param_4);
  FUN_10016d588(&local_30);
  *param_1 = uVar1;
  return;
}

