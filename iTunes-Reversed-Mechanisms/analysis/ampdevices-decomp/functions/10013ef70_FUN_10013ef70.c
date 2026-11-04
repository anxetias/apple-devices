// name: FUN_10013ef70
// address: 10013ef70

void FUN_10013ef70(long param_1,undefined8 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    FUN_1001b8172(param_1 + 0x20,param_2);
  }
  std::mutex::unlock();
  return;
}

