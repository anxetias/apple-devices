// name: FUN_1004cbf7a
// address: 1004cbf7a

void FUN_1004cbf7a(void *param_1)

{
  if (*(long *)((long)param_1 + 0x10) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}

