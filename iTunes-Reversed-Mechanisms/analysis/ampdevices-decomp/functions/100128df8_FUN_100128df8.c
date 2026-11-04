// name: FUN_100128df8
// address: 100128df8

undefined4 FUN_100128df8(long param_1)

{
  undefined4 uVar1;
  
  std::mutex::lock();
  uVar1 = *(undefined4 *)(param_1 + 0x1b0);
  std::mutex::unlock();
  return uVar1;
}

