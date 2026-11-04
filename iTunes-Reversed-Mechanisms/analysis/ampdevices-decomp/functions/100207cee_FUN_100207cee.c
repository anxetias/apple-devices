// name: FUN_100207cee
// address: 100207cee

void FUN_100207cee(uint param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_38;
  undefined *local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c54b0 == '\x01') {
    if (DAT_1008a2b78 != -1) {
      _dispatch_once(&DAT_1008a2b78,&PTR___NSConcreteGlobalBlock_10083d9f0);
    }
    uVar1 = DAT_1008a2b70;
    cVar2 = _os_log_type_enabled(DAT_1008a2b70,1);
    if (cVar2 != '\0') {
      local_34 = &DAT_100717d60 + *(int *)(&DAT_100717d60 + (ulong)param_1 * 4);
      local_38 = 0x8200102;
      __os_log_impl(0x100000000,uVar1,1,"idle> trigger (%s)",&local_38,0xc);
    }
    FUN_100207b47();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

