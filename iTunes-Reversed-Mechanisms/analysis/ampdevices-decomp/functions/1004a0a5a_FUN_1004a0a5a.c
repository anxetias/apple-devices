// name: FUN_1004a0a5a
// address: 1004a0a5a

void FUN_1004a0a5a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10085cac8;
  FUN_100205d70(param_1 + 4);
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}

