// name: FUN_10012da54
// address: 10012da54

void FUN_10012da54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100838e78;
  FUN_100130564();
  FUN_100205d70(param_1 + 0x11);
  std::mutex::~mutex((mutex *)(param_1 + 9));
  FUN_100130a1c(param_1 + 4);
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  return;
}

