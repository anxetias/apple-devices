// name: FUN_10052d446
// address: 10052d446

void FUN_10052d446(long *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  uint in_EAX;
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x98))();
  if (iVar1 == 0) {
    *param_4 = (ulong)in_EAX;
  }
  return;
}

