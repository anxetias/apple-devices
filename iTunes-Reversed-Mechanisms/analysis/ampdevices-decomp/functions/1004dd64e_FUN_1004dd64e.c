// name: FUN_1004dd64e
// address: 1004dd64e

void FUN_1004dd64e(code *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_1004de449(*param_2);
  if (lVar2 == 0) {
    uVar1 = 0x45f;
  }
  else {
    uVar1 = (*param_1)(lVar2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4),
                       *(undefined8 *)(param_2 + 6));
  }
  param_2[8] = uVar1;
  FUN_1001e9809(param_3);
  return;
}

