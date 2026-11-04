// name: FUN_10016b29c
// address: 10016b29c

undefined8 FUN_10016b29c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 2) != 0) {
    FUN_10016f60e(param_1 + 4,param_1 + 1);
  }
  *(undefined4 *)(param_1 + 2) = 1;
  uVar2 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
  lVar1 = param_1[3];
  param_1[3] = uVar2;
  if (lVar1 != 0) {
    _CFRelease();
  }
  if (param_1[1] != 0) {
    _CFRelease();
  }
  uVar2 = *param_1;
  param_1[1] = uVar2;
  *param_1 = 0;
  return CONCAT71((int7)((ulong)uVar2 >> 8),1);
}

