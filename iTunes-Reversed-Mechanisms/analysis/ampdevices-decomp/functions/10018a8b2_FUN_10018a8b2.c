// name: FUN_10018a8b2
// address: 10018a8b2

void FUN_10018a8b2(undefined8 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1001807b8(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],
                        *(undefined4 *)(param_1 + 5));
  *(undefined4 *)((long)param_1 + 0x2c) = uVar1;
  FUN_1001e9809(param_1 + 6);
  return;
}

