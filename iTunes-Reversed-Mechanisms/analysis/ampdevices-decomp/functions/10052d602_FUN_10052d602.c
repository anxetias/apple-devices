// name: FUN_10052d602
// address: 10052d602

undefined4 FUN_10052d602(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_1001e9de0(param_1 + 0xaa);
  uVar1 = (**(code **)(*param_1 + 0x1f0))(param_1,param_2,1);
  FUN_1001e9eb9(param_1 + 0xaa);
  return uVar1;
}

