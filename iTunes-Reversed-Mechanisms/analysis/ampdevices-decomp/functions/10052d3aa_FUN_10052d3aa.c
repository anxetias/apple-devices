// name: FUN_10052d3aa
// address: 10052d3aa

int FUN_10052d3aa(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,long *param_6)

{
  int iVar1;
  long local_48;
  long *local_40;
  undefined4 local_34;
  
  local_48 = 0;
  local_40 = param_6;
  local_34 = param_5;
  FUN_1001e9de0(param_1 + 0xaa);
  iVar1 = (**(code **)(*param_1 + 0x200))(param_1,param_2,param_3,param_4,local_34,&local_48);
  if (iVar1 == 0) {
    param_1[0xa2] = param_2 + local_48;
    if (local_40 != (long *)0x0) {
      *local_40 = local_48;
    }
  }
  FUN_1001e9eb9(param_1 + 0xaa);
  return iVar1;
}

