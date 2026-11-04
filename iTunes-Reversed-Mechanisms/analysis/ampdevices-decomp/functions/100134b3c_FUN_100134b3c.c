// name: FUN_100134b3c
// address: 100134b3c

void FUN_100134b3c(void *param_1)

{
  if (*(long *)((long)param_1 + 0x10) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}

