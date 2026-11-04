// name: FUN_1002dd449
// address: 1002dd449

void FUN_1002dd449(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (DAT_1008c5da0 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008c5da0);
    if (iVar1 != 0) {
      if (DAT_1008c7910 != -1) {
        _dispatch_once(&DAT_1008c7910,&PTR___NSConcreteGlobalBlock_10086f7b8);
      }
      DAT_1008c5d98 = (uint)DAT_1008c7918 * 4 + 0x19;
      ___cxa_guard_release(&DAT_1008c5da0);
    }
  }
  FUN_1002dd4d9(param_1,param_2,param_3,param_4,DAT_1008c5d98);
  return;
}

