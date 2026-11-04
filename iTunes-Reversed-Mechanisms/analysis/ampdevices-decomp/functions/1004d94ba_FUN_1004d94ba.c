// name: FUN_1004d94ba
// address: 1004d94ba

void FUN_1004d94ba(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_10085ed38;
  param_1[0xb] = &PTR_FUN_10085ed98;
  lVar1 = param_1[0xd];
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (lVar1 != 0) {
    std::__shared_weak_count::__release_weak();
  }
  FUN_100205d70(param_1 + 0x14);
  FUN_100205d70(param_1 + 0x12);
  FUN_100205d70(param_1 + 0x10);
  if (param_1[0xd] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  if (param_1[10] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  FUN_1001c7684(param_1);
  return;
}

