// name: FUN_100128e26
// address: 100128e26

void FUN_100128e26(long param_1,undefined4 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    *(undefined4 *)(param_1 + 0x1b0) = param_2;
  }
  std::mutex::unlock();
  return;
}

