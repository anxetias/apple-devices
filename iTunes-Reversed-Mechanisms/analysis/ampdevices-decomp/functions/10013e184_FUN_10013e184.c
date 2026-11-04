// name: FUN_10013e184
// address: 10013e184

void FUN_10013e184(long param_1)

{
  undefined8 uVar1;
  undefined1 local_30 [16];
  
  uVar1 = _objc_autoreleasePoolPush();
  FUN_10013e200(local_30,DAT_1008c4d40,*(undefined8 *)(param_1 + 0x20));
  FUN_1001a7b1c(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30,local_30);
  FUN_1001a8fac(local_30);
  FUN_1001e9809(*(undefined8 *)(param_1 + 0x30));
  _objc_autoreleasePoolPop(uVar1);
  return;
}

