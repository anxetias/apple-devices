// name: FUN_100154ce0
// address: 100154ce0

void FUN_100154ce0(long param_1,undefined8 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    FUN_1001b8172(param_1 + 0x1c0,param_2);
  }
  std::mutex::unlock();
  return;
}

