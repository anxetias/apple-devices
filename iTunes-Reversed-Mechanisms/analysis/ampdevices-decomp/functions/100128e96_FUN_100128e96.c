// name: FUN_100128e96
// address: 100128e96

undefined8 FUN_100128e96(undefined8 param_1,long param_2)

{
  std::mutex::lock();
  FUN_1001b7a5c(param_1,param_2 + 0x1a0);
  std::mutex::unlock();
  return param_1;
}

