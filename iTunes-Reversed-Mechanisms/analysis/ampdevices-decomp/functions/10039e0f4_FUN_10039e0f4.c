// name: FUN_10039e0f4
// address: 10039e0f4

byte FUN_10039e0f4(long *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  undefined8 local_40;
  int local_38;
  undefined1 local_30 [16];
  
  local_40 = 0;
  local_38 = 0;
  FUN_1001b7a44(local_30);
  bVar1 = (**(code **)(*param_1 + 0x28))(param_1,0,&local_40,0,0);
  bVar2 = local_38 == param_2;
  FUN_1001b7a50(local_30);
  return bVar1 & bVar2;
}

