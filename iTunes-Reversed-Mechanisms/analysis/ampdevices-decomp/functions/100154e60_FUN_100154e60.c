// name: FUN_100154e60
// address: 100154e60

void FUN_100154e60(long param_1,undefined8 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    FUN_1001a7ad8(param_1 + 0x200,param_2);
  }
  std::mutex::unlock();
  return;
}

