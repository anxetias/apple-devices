// name: FUN_1002360ba
// address: 1002360ba

void FUN_1002360ba(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10083e658;
  FUN_10023614c();
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_1002188e4(param_1 + 0x15);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  FUN_100205d70(param_1 + 0x15);
  FUN_100238bb8();
  FUN_1001b7a50(param_1 + 5);
  if (param_1[4] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  return;
}

