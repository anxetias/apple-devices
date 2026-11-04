// name: FUN_10046cc5a
// address: 10046cc5a

void FUN_10046cc5a(void *param_1)

{
  if (*(long *)((long)param_1 + 0x10) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}

