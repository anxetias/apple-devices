// name: FUN_1001780d7
// address: 1001780d7

void FUN_1001780d7(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 local_30 [2];
  
  uVar1 = _CFTimeZoneCopyDefault();
  FUN_100178120(param_1,uVar1,local_30);
  *param_2 = local_30[0];
  FUN_10017060f(uVar1);
  return;
}

