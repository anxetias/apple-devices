// name: FUN_10013ef30
// address: 10013ef30

void FUN_10013ef30(long param_1,undefined8 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    *(undefined8 *)(param_1 + 0x18) = param_2;
  }
  std::mutex::unlock();
  return;
}

