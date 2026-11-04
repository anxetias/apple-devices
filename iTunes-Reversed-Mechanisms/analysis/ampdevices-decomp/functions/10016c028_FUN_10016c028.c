// name: FUN_10016c028
// address: 10016c028

void FUN_10016c028(long param_1)

{
  _free(*(void **)(param_1 + 0x10));
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 8));
    return;
  }
  return;
}

