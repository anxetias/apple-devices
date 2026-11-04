// name: FUN_10032b3c8
// address: 10032b3c8

void FUN_10032b3c8(void *param_1)

{
  if (*(long *)((long)param_1 + 0x10) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}

