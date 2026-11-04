// name: FUN_100128f50
// address: 100128f50

void FUN_100128f50(long param_1,undefined8 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    FUN_1001a7ad8(param_1 + 0x1d0,param_2);
  }
  std::mutex::unlock();
  return;
}

