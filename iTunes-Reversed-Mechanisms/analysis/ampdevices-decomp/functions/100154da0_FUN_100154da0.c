// name: FUN_100154da0
// address: 100154da0

void FUN_100154da0(long param_1,undefined8 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    FUN_1001a7ad8(param_1 + 0x1e0,param_2);
  }
  std::mutex::unlock();
  return;
}

