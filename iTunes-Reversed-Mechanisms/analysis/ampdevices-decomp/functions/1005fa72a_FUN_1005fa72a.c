// name: FUN_1005fa72a
// address: 1005fa72a

int FUN_1005fa72a(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 local_38;
  int local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  do {
    iVar3 = FUN_1001e91e4(param_1 + 0x18,250000);
    cVar2 = FUN_1005fa6c8(param_1);
    if (cVar2 != '\0') {
      iVar3 = -0x80;
      goto LAB_1005fa7cf;
    }
  } while (iVar3 == 0x3c);
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x4c);
  }
  else {
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar1 = DAT_1008c7d18;
    cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x4000100;
      local_34 = iVar3;
      __os_log_impl(0x100000000,uVar1,0x10,
                    "**ERROR**: WaitForLockedCompletionTimedMicros(mCompletion) failed! error:%d",
                    &local_38,8);
    }
  }
LAB_1005fa7cf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

