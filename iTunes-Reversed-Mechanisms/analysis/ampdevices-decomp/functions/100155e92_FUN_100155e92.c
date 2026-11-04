// name: FUN_100155e92
// address: 100155e92

void FUN_100155e92(long param_1,undefined8 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    FUN_1001b8172(param_1 + 0x1a8,param_2);
  }
  std::mutex::unlock();
  return;
}

