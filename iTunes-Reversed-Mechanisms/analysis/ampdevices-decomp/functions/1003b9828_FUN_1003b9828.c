// name: FUN_1003b9828
// address: 1003b9828

void FUN_1003b9828(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_1001c62d9(&local_58,0x28);
  local_50 = 1;
  if (param_4 != 0) {
    local_50 = 3;
  }
  local_58 = param_1;
  local_40 = param_2;
  local_38 = param_1;
  iVar1 = FUN_1003b9050();
  if (param_3 != (undefined8 *)0x0 && iVar1 == 0) {
    *param_3 = local_48;
  }
  return;
}

