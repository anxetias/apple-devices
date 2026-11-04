// name: FUN_100107d36
// address: 100107d36

void FUN_100107d36(long param_1)

{
  if (0 < *(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28)) {
    ___bzero();
  }
  if (0 < *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38)) {
    ___bzero();
    return;
  }
  return;
}

