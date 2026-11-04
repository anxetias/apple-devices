// name: FUN_10013c3fa
// address: 10013c3fa

void FUN_10013c3fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10083a118;
  if (param_1[4] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  FUN_100205d70(param_1 + 1);
  operator_delete(param_1);
  return;
}

