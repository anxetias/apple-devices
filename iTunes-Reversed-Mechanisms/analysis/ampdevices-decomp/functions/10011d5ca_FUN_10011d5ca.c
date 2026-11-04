// name: FUN_10011d5ca
// address: 10011d5ca

void FUN_10011d5ca(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100835dc0;
  if ((long *)param_1[0x397a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x397a] + 8))();
  }
  FUN_1001150be(param_1);
  return;
}

