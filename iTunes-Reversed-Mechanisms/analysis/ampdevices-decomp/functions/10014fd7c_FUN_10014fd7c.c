// name: FUN_10014fd7c
// address: 10014fd7c

void FUN_10014fd7c(long param_1,undefined1 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    *(undefined1 *)(param_1 + 0x1c1) = param_2;
  }
  std::mutex::unlock();
  return;
}

