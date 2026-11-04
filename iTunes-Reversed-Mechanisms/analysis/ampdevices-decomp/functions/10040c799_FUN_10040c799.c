// name: FUN_10040c799
// address: 10040c799

void FUN_10040c799(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_38;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e9de0(param_2 + 0x460);
  if (*(long *)(param_2 + 0x450) != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_34 = *(undefined8 *)(param_2 + 0x440);
      local_38 = 0x8420102;
      __os_log_impl(0x100000000,uVar1,1,
                    "airtraffic> invalidating AFC connection for application \"%{public}@\"",
                    &local_38,0xc);
    }
    _AFCConnectionInvalidate(*(undefined8 *)(param_2 + 0x450));
  }
  if (*(long *)(param_2 + 0x448) != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_34 = *(undefined8 *)(param_2 + 0x440);
      local_38 = 0x8420102;
      __os_log_impl(0x100000000,uVar1,1,
                    "airtraffic> invalidating installation service connection for application \"%{public}@\""
                    ,&local_38,0xc);
    }
    _AMDServiceConnectionInvalidate(*(undefined8 *)(param_2 + 0x448));
  }
  FUN_1001e9eb9(param_2 + 0x460);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

