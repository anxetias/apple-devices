// name: FUN_100152e0e
// address: 100152e0e

void FUN_100152e0e(void *param_1)

{
  if (*(long *)((long)param_1 + 0x10) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}

