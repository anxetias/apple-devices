// name: FUN_100229eb4
// address: 100229eb4

long FUN_100229eb4(long param_1,long param_2)

{
  FUN_100249f2c();
  FUN_100249f2c(param_1 + 0x10,param_2 + 0x10);
  _memcpy((void *)(param_1 + 0x20),(void *)(param_2 + 0x20),0x420);
  return param_1;
}

