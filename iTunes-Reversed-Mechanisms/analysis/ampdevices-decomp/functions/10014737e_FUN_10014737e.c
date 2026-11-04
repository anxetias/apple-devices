// name: FUN_10014737e
// address: 10014737e

undefined8 FUN_10014737e(long param_1)

{
  undefined8 uVar1;
  
  std::mutex::lock();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  std::mutex::unlock();
  return uVar1;
}

