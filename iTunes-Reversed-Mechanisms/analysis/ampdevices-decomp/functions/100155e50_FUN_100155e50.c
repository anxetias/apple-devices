// name: FUN_100155e50
// address: 100155e50

void FUN_100155e50(long param_1,undefined8 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    *(undefined8 *)(param_1 + 0x1a0) = param_2;
  }
  std::mutex::unlock();
  return;
}

