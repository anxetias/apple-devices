// name: FUN_1004c5bec
// address: 1004c5bec

void FUN_1004c5bec(undefined8 *param_1)

{
  undefined8 *local_20;
  
  *param_1 = &PTR_FUN_10085e1a0;
  local_20 = param_1 + 4;
  FUN_1004c6cb8(&local_20);
  local_20 = param_1 + 1;
  FUN_1004c6cb8(&local_20);
  operator_delete(param_1);
  return;
}

