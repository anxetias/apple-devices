// name: FUN_100109636
// address: 100109636

void FUN_100109636(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10082ff98;
  _vDSP_destroy_fftsetup(param_1[0x3c5]);
  if ((void *)param_1[0x3c6] != (void *)0x0) {
    operator_delete((void *)param_1[0x3c6]);
  }
  FUN_100119562(param_1);
  return;
}

