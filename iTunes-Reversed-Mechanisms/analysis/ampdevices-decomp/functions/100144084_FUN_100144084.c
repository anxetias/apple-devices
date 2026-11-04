// name: FUN_100144084
// address: 100144084

void FUN_100144084(long param_1,undefined8 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    FUN_1001440e4(param_1 + 0x90,param_2);
  }
  std::mutex::unlock();
  return;
}

