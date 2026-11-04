// name: FUN_1004cb8c2
// address: 1004cb8c2

void FUN_1004cb8c2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10085e680;
  FUN_1001a7a94(param_1 + 4);
  FUN_1001ab006(param_1 + 3);
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}

