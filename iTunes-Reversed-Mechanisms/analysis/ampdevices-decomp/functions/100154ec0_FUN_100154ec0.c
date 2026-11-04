// name: FUN_100154ec0
// address: 100154ec0

ulong FUN_100154ec0(long param_1)

{
  undefined1 uVar1;
  
  std::mutex::lock();
  uVar1 = *(undefined1 *)(param_1 + 0x220);
  std::mutex::unlock();
  return CONCAT71((int7)((ulong)param_1 >> 8),uVar1) & 0xffffffff;
}

