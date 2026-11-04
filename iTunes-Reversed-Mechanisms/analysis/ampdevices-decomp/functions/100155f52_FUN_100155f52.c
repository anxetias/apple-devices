// name: FUN_100155f52
// address: 100155f52

void FUN_100155f52(long param_1,undefined1 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    *(undefined1 *)(param_1 + 0x1d8) = param_2;
  }
  std::mutex::unlock();
  return;
}

