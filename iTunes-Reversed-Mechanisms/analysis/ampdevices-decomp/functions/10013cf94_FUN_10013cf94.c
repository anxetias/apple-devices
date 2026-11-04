// name: FUN_10013cf94
// address: 10013cf94

void FUN_10013cf94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10083a3e0;
  FUN_100205d70(param_1 + 4);
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}

