// name: FUN_1001aa326
// address: 1001aa326

void FUN_1001aa326(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = DAT_1008c4d98;
  local_28 = FUN_1001b8d0c(param_2);
  uVar1 = _CFErrorCreate(uVar1,local_28,param_3,0);
  FUN_10016d588(&local_28);
  *param_1 = uVar1;
  return;
}

