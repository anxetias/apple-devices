// name: FUN_100220984
// address: 100220984

void FUN_100220984(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10083e200;
  FUN_100205d70(param_1 + 3);
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}

