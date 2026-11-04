// name: FUN_100197f12
// address: 100197f12

void FUN_100197f12(long param_1)

{
  LOCK();
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  UNLOCK();
  return;
}

