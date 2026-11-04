// name: FUN_10013cbfe
// address: 10013cbfe

void FUN_10013cbfe(long param_1)

{
  FUN_100205d70(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

