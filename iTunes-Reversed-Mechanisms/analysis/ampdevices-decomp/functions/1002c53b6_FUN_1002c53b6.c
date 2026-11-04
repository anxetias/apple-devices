// name: FUN_1002c53b6
// address: 1002c53b6

undefined8
FUN_1002c53b6(long param_1,short *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  FUN_1001e400b(param_2);
  if (*param_2 != 0) {
    uVar1 = FUN_1001d3f9e(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),param_3,param_4,
                          *(undefined8 *)(param_1 + 0x38),param_5,param_2);
    return uVar1;
  }
  return 0;
}

