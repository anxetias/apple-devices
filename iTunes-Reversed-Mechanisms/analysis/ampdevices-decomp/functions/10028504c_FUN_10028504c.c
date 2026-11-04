// name: FUN_10028504c
// address: 10028504c

void FUN_10028504c(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_100285006();
    operator_delete(*(void **)*param_1);
    return;
  }
  return;
}

