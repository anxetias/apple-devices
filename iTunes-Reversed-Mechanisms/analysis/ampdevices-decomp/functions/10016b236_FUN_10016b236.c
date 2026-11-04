// name: FUN_10016b236
// address: 10016b236

undefined8 FUN_10016b236(long *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[2];
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 == 1) {
    if (*param_1 != 0) {
      return 0;
    }
    _CFArrayAppendValue(param_1[3],param_2);
  }
  else if (iVar1 == 2) {
    if (*param_1 == 0) {
      return 0;
    }
    _CFDictionarySetValue(param_1[3]);
    if (*param_1 != 0) {
      *param_1 = 0;
      _CFRelease();
    }
  }
  return 1;
}

