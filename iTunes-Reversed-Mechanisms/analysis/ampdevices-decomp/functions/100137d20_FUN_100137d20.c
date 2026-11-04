// name: FUN_100137d20
// address: 100137d20

void FUN_100137d20(long param_1,void *param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_100133056();
    FUN_1001b7a50((long)param_2 + 0x10);
  }
  if (param_2 != (void *)0x0) {
    operator_delete(param_2);
  }
  return;
}

