// name: FUN_10019883a
// address: 10019883a

void FUN_10019883a(long *param_1)

{
  if (*param_1 != 0) {
    *param_1 = 0;
    _CFRelease();
  }
  if (param_1[1] != 0) {
    param_1[1] = 0;
    _CFRelease();
  }
  if (param_1[2] != 0) {
    param_1[2] = 0;
    _CFRelease();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = -0x4010000000000000;
  if (param_1[5] != 0) {
    param_1[5] = 0;
    _CFRelease();
    return;
  }
  return;
}

