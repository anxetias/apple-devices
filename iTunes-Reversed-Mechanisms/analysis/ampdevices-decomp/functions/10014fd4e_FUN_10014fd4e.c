// name: FUN_10014fd4e
// address: 10014fd4e

ulong FUN_10014fd4e(long param_1)

{
  undefined1 uVar1;
  
  std::mutex::lock();
  uVar1 = *(undefined1 *)(param_1 + 0x1c1);
  std::mutex::unlock();
  return CONCAT71((int7)((ulong)param_1 >> 8),uVar1) & 0xffffffff;
}

