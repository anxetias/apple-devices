// name: FUN_1001b70b6
// address: 1001b70b6

void FUN_1001b70b6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10083ce30;
  if (param_1[9] != 0) {
    std::__shared_weak_count::__release_weak();
  }
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

