// name: FUN_1001aa394
// address: 1001aa394

void FUN_1001aa394(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 local_48 [2];
  undefined1 local_38 [8];
  undefined8 local_30;
  
  *param_1 = 0;
  FUN_10032f0f2(local_48);
  if (*param_4 != 0) {
    FUN_1001aaef6(&local_30,*(undefined8 *)PTR__kCFErrorUnderlyingErrorKey_10082e0a8);
    FUN_1001a8bb0(local_38,*param_4);
    FUN_1001aa494(local_48,&local_30,local_38);
    FUN_1001ab240(local_38);
    FUN_1001ab006(&local_30);
  }
  uVar1 = DAT_1008c4d98;
  local_30 = FUN_1001b8d0c(param_2);
  uVar1 = _CFErrorCreate(uVar1,local_30,param_3,local_48[0]);
  *param_1 = uVar1;
  FUN_10016d588(&local_30);
  FUN_1001a8fac(local_48);
  return;
}

