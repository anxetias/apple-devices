// name: FUN_10012cab4
// address: 10012cab4

void FUN_10012cab4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

