// name: FUN_100154e00
// address: 100154e00

void FUN_100154e00(long param_1,undefined8 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    FUN_1001a7ad8(param_1 + 0x1f0,param_2);
  }
  std::mutex::unlock();
  return;
}

