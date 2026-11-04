// name: FUN_1004cad44
// address: 1004cad44

void FUN_1004cad44(long param_1)

{
  FUN_1001a7a94(param_1 + 0x18);
  FUN_1001ab006(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

