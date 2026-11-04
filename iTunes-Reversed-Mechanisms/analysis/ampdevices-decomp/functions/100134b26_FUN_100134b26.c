// name: FUN_100134b26
// address: 100134b26

void FUN_100134b26(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

