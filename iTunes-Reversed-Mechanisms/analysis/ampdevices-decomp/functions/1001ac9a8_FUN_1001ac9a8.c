// name: FUN_1001ac9a8
// address: 1001ac9a8

undefined8 FUN_1001ac9a8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    FUN_1001b7a44(param_1);
  }
  else {
    local_20 = FUN_1001b8c6c(param_3,DAT_1008c4d98);
    local_28 = _CFURLRequestCopyHTTPHeaderFieldValue(lVar1,local_20);
    FUN_1001b7eb0(param_1,local_28);
    FUN_10016d588(&local_28);
    FUN_10016d588(&local_20);
  }
  return param_1;
}

