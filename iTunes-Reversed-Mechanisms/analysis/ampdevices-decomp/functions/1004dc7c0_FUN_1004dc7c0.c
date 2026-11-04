// name: FUN_1004dc7c0
// address: 1004dc7c0

void FUN_1004dc7c0(void *param_1)

{
  if (*(long *)((long)param_1 + 0x10) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}

