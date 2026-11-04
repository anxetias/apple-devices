// name: FUN_100262ff6
// address: 100262ff6

void FUN_100262ff6(void *param_1)

{
  if (*(long *)((long)param_1 + 0x10) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}

