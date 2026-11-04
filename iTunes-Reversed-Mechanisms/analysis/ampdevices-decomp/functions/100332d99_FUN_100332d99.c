// name: FUN_100332d99
// address: 100332d99

void FUN_100332d99(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_38;
  undefined8 local_34;
  undefined2 local_2c;
  undefined8 local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x16688) != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_34 = *(undefined8 *)(param_1 + 0x16688);
      local_2a = *(undefined8 *)(param_1 + 0x152c8);
      local_38 = 0x8000202;
      local_2c = 0x842;
      __os_log_impl(0x100000000,uVar1,1,
                    "airtraffic> releasing host connection %p for device %{public}@",&local_38,0x16)
      ;
    }
    _ATHostConnectionInvalidate(*(undefined8 *)(param_1 + 0x16688));
    _ATHostConnectionRelease(*(undefined8 *)(param_1 + 0x16688));
    *(undefined8 *)(param_1 + 0x16688) = 0;
    FUN_10055b04a(*(undefined8 *)(param_1 + 0x66d8),0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

