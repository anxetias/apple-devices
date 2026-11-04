// name: FUN_1001317fe
// address: 1001317fe

void FUN_1001317fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100839130;
  FUN_1001b7a50(param_1 + 6);
  if (param_1[5] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}

