// name: FUN_10044eec7
// address: 10044eec7

void FUN_10044eec7(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  __Block_object_dispose(*(void **)(param_1 + 0x20),8);
  return;
}

