// name: FUN_100111412
// address: 100111412

void FUN_100111412(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    _vDSP_destroy_fftsetup();
  }
  return;
}

