// name: FUN_10038606a
// address: 10038606a

void FUN_10038606a(long param_1,undefined4 param_2,undefined8 param_3,long param_4,long param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 local_34;
  
  uVar2 = _mach_approximate_time();
  *(undefined8 *)(param_5 + 8) = uVar2;
  std::mutex::lock();
  FUN_1003860fc(param_1 + 0x98,param_5);
  std::mutex::unlock();
  plVar1 = *(long **)(param_4 + 0x20);
  local_34 = param_2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_34,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

