// name: FUN_100392e1a
// address: 100392e1a

long FUN_100392e1a(long param_1,long param_2)

{
  FUN_1001a7b1c();
  _memcpy((void *)(param_1 + 0x10),(void *)(param_2 + 0x10),0x848);
  FUN_1001b80b2(param_1 + 0x858,param_2 + 0x858);
  *(undefined4 *)(param_1 + 0x868) = *(undefined4 *)(param_2 + 0x868);
  FUN_1001aaadc(param_1 + 0x870,param_2 + 0x870);
  FUN_1001aaadc(param_1 + 0x878,param_2 + 0x878);
  return param_1;
}

