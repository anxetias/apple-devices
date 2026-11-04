// name: FUN_1001b7484
// address: 1001b7484

void FUN_1001b7484(long param_1,void *param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_100240464();
    FUN_1001b7a50((long)param_2 + 0x20);
  }
  if (param_2 != (void *)0x0) {
    operator_delete(param_2);
  }
  return;
}

