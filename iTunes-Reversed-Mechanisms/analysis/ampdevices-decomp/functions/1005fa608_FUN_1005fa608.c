// name: FUN_1005fa608
// address: 1005fa608

int FUN_1005fa608(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = FUN_1001e8dd6(param_1 + 0x18,1,0);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  else {
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar1 = DAT_1008c7d18;
    cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
    if (cVar2 != '\0') {
      local_28 = 0x4000100;
      local_24 = iVar3;
      __os_log_impl(0x100000000,uVar1,0x10,
                    "**ERROR**: CreateLockedCompletion(&cmdData->mCmdCompletion) failed! status:%d",
                    &local_28,8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

