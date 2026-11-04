// name: FUN_100128e68
// address: 100128e68

undefined4 FUN_100128e68(long param_1)

{
  undefined4 uVar1;
  
  std::mutex::lock();
  uVar1 = *(undefined4 *)(param_1 + 0x1b4);
  std::mutex::unlock();
  return uVar1;
}

