// name: FUN_100465068
// address: 100465068

void FUN_100465068(ulong param_1,void *param_2)

{
  if ((param_1 & 1) != 0) {
    FUN_100465008((long)param_2 + 0x20);
    FUN_1001b7a50((long)param_2 + 0x10);
  }
  if (param_2 != (void *)0x0) {
    operator_delete(param_2);
    return;
  }
  return;
}

