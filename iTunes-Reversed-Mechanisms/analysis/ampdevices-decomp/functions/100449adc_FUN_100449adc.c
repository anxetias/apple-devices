// name: FUN_100449adc
// address: 100449adc

void FUN_100449adc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100859210;
  if ((param_1[5] != 0) && (*(char *)(param_1 + 6) == '\x01')) {
    _AVCFAssetExportSessionCancelExport();
  }
  FUN_10017060f(param_1[2]);
  param_1[2] = 0;
  FUN_10017060f(param_1[3]);
  param_1[3] = 0;
  FUN_10017060f(param_1[4]);
  param_1[4] = 0;
  if (param_1[5] != 0) {
    _CFRelease();
    param_1[5] = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}

