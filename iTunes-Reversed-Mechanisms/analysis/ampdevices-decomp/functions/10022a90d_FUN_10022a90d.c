// name: FUN_10022a90d
// address: 10022a90d

void FUN_10022a90d(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 local_40 [48];
  
  FUN_1001ceabd(local_40,0,FUN_10022a968,param_1,0,0);
  if (*(char *)((long)param_1 + 0x6a) == '\x01') {
    uVar1 = FUN_1001f93aa(*param_1,param_1[1],local_40);
  }
  else {
    uVar1 = FUN_1001f938c(*param_1,param_1[1],0,local_40);
  }
  *(undefined4 *)((long)param_1 + 0x6c) = uVar1;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}

