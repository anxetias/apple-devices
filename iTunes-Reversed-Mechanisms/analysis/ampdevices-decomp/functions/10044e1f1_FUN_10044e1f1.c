// name: FUN_10044e1f1
// address: 10044e1f1

void FUN_10044e1f1(long param_1)

{
  if (*(long *)(param_1 + 0x38) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  __Block_object_dispose(*(void **)(param_1 + 0x28),3);
  __Block_object_dispose(*(void **)(param_1 + 0x20),3);
  return;
}

