// name: FUN_100154bde
// address: 100154bde

void FUN_100154bde(long param_1,undefined8 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    *(undefined8 *)(param_1 + 0x1a8) = param_2;
  }
  std::mutex::unlock();
  return;
}

