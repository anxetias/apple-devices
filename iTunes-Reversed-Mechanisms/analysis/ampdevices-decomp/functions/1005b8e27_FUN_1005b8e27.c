// name: FUN_1005b8e27
// address: 1005b8e27

undefined8 FUN_1005b8e27(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = _AMDeviceCopyValue();
  if (lVar1 != 0) {
    _CFRelease(lVar1);
    uVar2 = _AMDeviceRemoveValue(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

