// name: FUN_10058d950
// address: 10058d950

void FUN_10058d950(long param_1)

{
  FUN_10058d9b6();
  FUN_1001b7a50(param_1 + 0x80);
  FUN_1001b7a50(param_1 + 0x70);
  FUN_1001b7a50(param_1 + 0x60);
  FUN_1001b7a50(param_1 + 0x48);
  FUN_1001b7a50(param_1 + 0x38);
  FUN_1001b7a50(param_1 + 0x20);
  if (*(long *)(param_1 + 0x10) != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

