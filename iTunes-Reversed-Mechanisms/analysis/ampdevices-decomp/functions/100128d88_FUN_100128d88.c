// name: FUN_100128d88
// address: 100128d88

undefined4 FUN_100128d88(long param_1)

{
  undefined4 uVar1;
  
  std::mutex::lock();
  uVar1 = *(undefined4 *)(param_1 + 0x1b8);
  std::mutex::unlock();
  return uVar1;
}

