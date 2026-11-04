// name: FUN_1003400ee
// address: 1003400ee

long FUN_1003400ee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 local_38;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = _ATCFMessageGetParam();
  if (lVar3 != 0) {
    lVar4 = _CFGetTypeID(lVar3);
    lVar5 = _CFStringGetTypeID();
    if (lVar4 == lVar5) goto LAB_100340183;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8420102;
      local_34 = param_2;
      __os_log_impl(0x100000000,uVar1,0x10,"airtraffic> expected string for %{public}@ param",
                    &local_38,0xc);
    }
  }
  lVar3 = 0;
LAB_100340183:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

