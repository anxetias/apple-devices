// name: FUN_10010bdc0
// address: 10010bdc0

void FUN_10010bdc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10082ffe0;
  if ((long *)param_1[0x487] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x487] + 8))();
  }
  FUN_1001071ee(param_1);
  operator_delete(param_1);
  return;
}

