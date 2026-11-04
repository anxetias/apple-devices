// name: FUN_10052d328
// address: 10052d328

int FUN_10052d328(long *param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  long local_38;
  
  local_38 = 0;
  FUN_1001e9de0(param_1 + 0xaa);
  iVar1 = (**(code **)(*param_1 + 0x200))(param_1,param_1[0xa2],param_3,*param_2,1,&local_38);
  if (iVar1 == 0) {
    param_1[0xa2] = param_1[0xa2] + local_38;
  }
  FUN_1001e9eb9(param_1 + 0xaa);
  return iVar1;
}

