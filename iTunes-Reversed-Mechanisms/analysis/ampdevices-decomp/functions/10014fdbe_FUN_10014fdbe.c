// name: FUN_10014fdbe
// address: 10014fdbe

ulong FUN_10014fdbe(long param_1)

{
  undefined1 uVar1;
  
  std::mutex::lock();
  uVar1 = *(undefined1 *)(param_1 + 0x1c2);
  std::mutex::unlock();
  return CONCAT71((int7)((ulong)param_1 >> 8),uVar1) & 0xffffffff;
}

