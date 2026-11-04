// name: FUN_1003bb7b8
// address: 1003bb7b8

void FUN_1003bb7b8(long param_1,void *param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(long *)((long)param_2 + 0x20) != 0) {
      std::__shared_weak_count::__release_weak();
    }
  }
  else if (param_2 == (void *)0x0) {
    return;
  }
  operator_delete(param_2);
  return;
}

