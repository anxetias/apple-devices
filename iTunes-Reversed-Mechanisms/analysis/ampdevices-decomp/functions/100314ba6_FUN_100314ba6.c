// name: FUN_100314ba6
// address: 100314ba6

void FUN_100314ba6(long param_1,int param_2,undefined8 param_3,byte *param_4,undefined8 param_5)

{
  int local_50 [2];
  undefined8 local_48;
  byte *local_40;
  undefined8 local_38;
  
  if ((param_2 == 0x64706c73) || ((param_2 == 0x706d7066 && ((*param_4 & 1) != 0)))) {
    FUN_1002dd7e7(param_1);
  }
  local_50[0] = param_2;
  local_48 = param_3;
  local_40 = param_4;
  local_38 = param_5;
  FUN_1001c6987(param_1 + 0x2d78,0x74646670,param_1,local_50,0);
  return;
}

