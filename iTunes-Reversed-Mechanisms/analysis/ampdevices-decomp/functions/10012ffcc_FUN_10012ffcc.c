// name: FUN_10012ffcc
// address: 10012ffcc

void FUN_10012ffcc(long param_1)

{
  FUN_1001b7a50(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

