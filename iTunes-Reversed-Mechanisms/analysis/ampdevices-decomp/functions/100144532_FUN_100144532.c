// name: FUN_100144532
// address: 100144532

ulong FUN_100144532(long param_1)

{
  undefined1 uVar1;
  
  std::mutex::lock();
  uVar1 = *(undefined1 *)(param_1 + 0x150);
  std::mutex::unlock();
  return CONCAT71((int7)((ulong)param_1 >> 8),uVar1) & 0xffffffff;
}

