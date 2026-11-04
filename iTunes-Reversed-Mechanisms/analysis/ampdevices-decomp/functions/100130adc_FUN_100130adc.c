// name: FUN_100130adc
// address: 100130adc

void FUN_100130adc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100838f90;
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

