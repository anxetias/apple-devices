// name: FUN_100458044
// address: 100458044

void FUN_100458044(long param_1)

{
  FUN_100235b24(param_1 + 0x18);
  if (*(long *)(param_1 + 0x10) != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

