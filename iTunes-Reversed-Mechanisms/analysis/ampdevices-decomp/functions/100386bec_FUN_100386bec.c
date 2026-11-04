// name: FUN_100386bec
// address: 100386bec

void FUN_100386bec(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined8 uVar2;
  
  uVar2 = _mach_approximate_time();
  *(undefined8 *)(param_4 + 8) = uVar2;
  std::mutex::lock();
  FUN_1003860fc(param_1 + 0xc0,param_4);
  std::mutex::unlock();
  plVar1 = *(long **)(param_3 + 0x20);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100386c57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

