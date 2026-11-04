// name: FUN_100128db6
// address: 100128db6

void FUN_100128db6(long param_1,undefined4 param_2)

{
  std::mutex::lock();
  if (*(char *)(param_1 + 0x158) == '\0') {
    *(undefined4 *)(param_1 + 0x1b8) = param_2;
  }
  std::mutex::unlock();
  return;
}

