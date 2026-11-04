// name: FUN_10053cbcc
// address: 10053cbcc

undefined8 FUN_10053cbcc(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  *(undefined4 *)(param_1 + 8) = 0x6d645271;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  FUN_1001c23b3(param_1 + 0x4a0);
  *(undefined4 *)(param_1 + 0x18) = param_3;
  FUN_1001c631b(param_4,param_1 + 0x1c,0x460);
  return 0;
}

