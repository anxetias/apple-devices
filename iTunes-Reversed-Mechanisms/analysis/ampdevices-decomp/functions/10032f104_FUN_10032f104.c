// name: FUN_10032f104
// address: 10032f104

void FUN_10032f104(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 1) == '\x01') && ((void *)*param_1 != (void *)0x0)) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}

