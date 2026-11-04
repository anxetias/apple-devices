// name: FUN_10055add4
// address: 10055add4

void FUN_10055add4(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      _vDSP_destroy_fftsetup();
    }
    if (param_1[1] != 0) {
      FUN_1001c64c1();
    }
    FUN_1001c64c1(param_1);
    return;
  }
  return;
}

