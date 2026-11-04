// name: FUN_100128fb0
// address: 100128fb0

void FUN_100128fb0(long param_1,undefined8 param_2,long *param_3)

{
  std::mutex::lock();
  (**(code **)(*param_3 + 0x20))(param_3,param_1 + 0x1c0);
  std::mutex::unlock();
  return;
}

