// name: FUN_1002b8828
// address: 1002b8828

void FUN_1002b8828(long param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return;
}

