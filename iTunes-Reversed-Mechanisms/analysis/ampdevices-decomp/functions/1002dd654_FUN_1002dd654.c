// name: FUN_1002dd654
// address: 1002dd654

undefined8
FUN_1002dd654(undefined2 *param_1,int param_2,undefined2 *param_3,int param_4,undefined4 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (param_1 == param_3 && param_2 == param_4) {
    return 1;
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = FUN_1001e39bb(*param_1);
    if ((uVar1 & 0x3c) == 0) goto joined_r0x0001002dd6b4;
    param_1 = param_1 + 1;
  }
  param_2 = 0;
joined_r0x0001002dd6b4:
  do {
    if (param_4 == 0) {
      param_4 = 0;
LAB_1002dd6d3:
      uVar2 = FUN_1001e339d(param_1,param_2,param_3,param_4,param_5);
      return uVar2;
    }
    uVar1 = FUN_1001e39bb(*param_3);
    if ((uVar1 & 0x3c) == 0) goto LAB_1002dd6d3;
    param_3 = param_3 + 1;
    param_4 = param_4 + -1;
  } while( true );
}

