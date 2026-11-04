// name: FUN_100131368
// address: 100131368

void FUN_100131368(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1008390a0;
  FUN_1001b7a50(param_1 + 6);
  if (param_1[5] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
    return;
  }
  return;
}

