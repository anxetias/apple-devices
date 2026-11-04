// name: FUN_10012dcd8
// address: 10012dcd8

ulong FUN_10012dcd8(long param_1)

{
  long lVar1;
  
  std::mutex::lock();
  lVar1 = *(long *)(param_1 + 0x38);
  std::mutex::unlock();
  return CONCAT71((int7)((ulong)param_1 >> 8),lVar1 != 0) & 0xffffffff;
}

