// name: FUN_100155f94
// address: 100155f94

void FUN_100155f94(long param_1,undefined8 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    FUN_1001a7ad8(param_1 + 0x1c8,param_2);
  }
  std::mutex::unlock();
  return;
}

