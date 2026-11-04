// name: FUN_100119562
// address: 100119562

void FUN_100119562(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100835d18;
  if ((void *)param_1[9] != (void *)0x0) {
    operator_delete((void *)param_1[9]);
  }
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete((void *)param_1[10]);
  }
  FUN_100105fe2(param_1 + 1);
  return;
}

