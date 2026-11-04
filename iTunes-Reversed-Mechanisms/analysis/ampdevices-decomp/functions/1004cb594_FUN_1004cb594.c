// name: FUN_1004cb594
// address: 1004cb594

void FUN_1004cb594(void *param_1)

{
  if (*(long *)((long)param_1 + 0x10) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}

