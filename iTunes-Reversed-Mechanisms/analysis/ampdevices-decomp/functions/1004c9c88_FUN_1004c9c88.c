// name: FUN_1004c9c88
// address: 1004c9c88

void FUN_1004c9c88(void *param_1)

{
  if (*(long *)((long)param_1 + 0x10) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}

