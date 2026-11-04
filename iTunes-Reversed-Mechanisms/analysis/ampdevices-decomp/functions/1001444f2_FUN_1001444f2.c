// name: FUN_1001444f2
// address: 1001444f2

void FUN_1001444f2(long param_1,undefined4 param_2)

{
  std::mutex::lock();
  *(undefined1 *)(param_1 + 0x150) = 1;
  *(undefined4 *)(param_1 + 0x154) = param_2;
  std::mutex::unlock();
  return;
}

