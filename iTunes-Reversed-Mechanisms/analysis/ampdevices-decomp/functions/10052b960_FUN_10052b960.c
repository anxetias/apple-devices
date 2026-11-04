// name: FUN_10052b960
// address: 10052b960

void FUN_10052b960(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100869140;
  if (param_1[0xa3] != 0) {
    FUN_100179a7b();
  }
  if (DAT_1008c7810 != (long *)0x0) {
    (**(code **)(*DAT_1008c7810 + 0x18))(DAT_1008c7810,param_1);
  }
  if (param_1[0xe] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  FUN_100531062(param_1 + 1);
  return;
}

