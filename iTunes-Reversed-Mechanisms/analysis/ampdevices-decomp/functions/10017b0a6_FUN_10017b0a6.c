// name: FUN_10017b0a6
// address: 10017b0a6

void FUN_10017b0a6(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10083c198;
  FUN_10017b0f4();
  if (param_1[1] != 0) {
    _CGContextRelease();
  }
  pvVar1 = (void *)param_1[3];
  if (pvVar1 != (void *)0x0) {
    param_1[4] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

