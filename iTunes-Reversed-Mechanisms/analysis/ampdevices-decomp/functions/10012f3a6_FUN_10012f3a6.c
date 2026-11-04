// name: FUN_10012f3a6
// address: 10012f3a6

void FUN_10012f3a6(long param_1)

{
  FUN_1001b7a50(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (*(long *)(param_1 + 8) != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

