// name: FUN_100154eee
// address: 100154eee

void FUN_100154eee(long param_1,undefined1 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    *(undefined1 *)(param_1 + 0x220) = param_2;
  }
  std::mutex::unlock();
  return;
}

