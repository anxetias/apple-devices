// name: FUN_10013b488
// address: 10013b488

void FUN_10013b488(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  FUN_100205d70(param_1);
  return;
}

