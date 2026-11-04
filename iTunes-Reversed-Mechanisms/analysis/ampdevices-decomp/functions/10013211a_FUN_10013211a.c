// name: FUN_10013211a
// address: 10013211a

void FUN_10013211a(long param_1,void *param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_100205d70((long)param_2 + 0x38);
    FUN_100205d70((long)param_2 + 0x28);
    FUN_100205d70((long)param_2 + 0x18);
  }
  if (param_2 != (void *)0x0) {
    operator_delete(param_2);
    return;
  }
  return;
}

