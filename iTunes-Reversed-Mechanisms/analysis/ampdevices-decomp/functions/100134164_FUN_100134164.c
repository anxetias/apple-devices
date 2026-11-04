// name: FUN_100134164
// address: 100134164

void FUN_100134164(long param_1,undefined1 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    *(undefined1 *)(param_1 + 0x1c0) = param_2;
  }
  std::mutex::unlock();
  return;
}

