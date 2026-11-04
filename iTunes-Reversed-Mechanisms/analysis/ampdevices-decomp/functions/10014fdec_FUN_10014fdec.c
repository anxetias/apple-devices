// name: FUN_10014fdec
// address: 10014fdec

void FUN_10014fdec(long param_1,undefined1 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    *(undefined1 *)(param_1 + 0x1c2) = param_2;
  }
  std::mutex::unlock();
  return;
}

