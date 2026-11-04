// name: FUN_1003bb427
// address: 1003bb427

void FUN_1003bb427(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 *local_48;
  undefined4 local_40 [2];
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined1 local_21;
  
  local_40[0] = 0;
  local_28 = param_1;
  FUN_1001b7a44(local_38);
  local_40[0] = param_1;
  FUN_1001b8172(local_38,param_2);
  local_48 = &local_28;
  lVar1 = FUN_1003bb836(&DAT_1008c7630,local_48,&DAT_100712240,&local_48,&local_21);
  *(undefined4 *)(lVar1 + 0x18) = local_40[0];
  FUN_1001b8172(lVar1 + 0x20,local_38);
  FUN_100219d4f(local_40);
  FUN_1001b7a50(local_38);
  return;
}

