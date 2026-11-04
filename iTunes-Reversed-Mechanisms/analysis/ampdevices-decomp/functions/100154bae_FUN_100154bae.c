// name: FUN_100154bae
// address: 100154bae

undefined8 FUN_100154bae(long param_1)

{
  undefined8 uVar1;
  
  std::mutex::lock();
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  std::mutex::unlock();
  return uVar1;
}

