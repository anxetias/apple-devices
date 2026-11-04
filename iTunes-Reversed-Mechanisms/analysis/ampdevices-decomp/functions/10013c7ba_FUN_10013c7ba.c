// name: FUN_10013c7ba
// address: 10013c7ba

void FUN_10013c7ba(void *param_1)

{
  if (*(long *)((long)param_1 + 0x10) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}

