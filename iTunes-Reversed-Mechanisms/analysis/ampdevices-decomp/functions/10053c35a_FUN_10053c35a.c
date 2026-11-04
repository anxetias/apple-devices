// name: FUN_10053c35a
// address: 10053c35a

undefined1 FUN_10053c35a(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  FUN_1001a7ad8(param_1 + 0x28,param_4);
  return 1;
}

