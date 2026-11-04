// name: FUN_1005b3aa8
// address: 1005b3aa8

undefined1 FUN_1005b3aa8(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 local_38 [16];
  
  FUN_1001a7a9e(local_38,param_4);
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  FUN_1001a7ad8(param_1 + 0x28,local_38);
  FUN_1001a8fac(local_38);
  *(undefined4 *)(param_1 + 0x98) = 100;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(long *)(param_1 + 0xa8) = param_1;
  return 1;
}

