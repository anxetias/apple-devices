// name: FUN_10033ca2e
// address: 10033ca2e

void FUN_10033ca2e(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_38;
  undefined8 local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(long *)(param_1 + 0x16688) == 0) ||
     ((*(char *)(param_1 + 0x6acf) == '\0' && (4 < *(int *)(param_1 + 0x166d4) - 2U)))) {
    if (*(long *)(param_1 + 0x16818) != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_34 = *(undefined8 *)(param_1 + 0x152c8);
        local_38 = 0x8420102;
        __os_log_impl(0x100000000,uVar1,1,"airtraffic> stopping Ping timer for device %{public}@",
                      &local_38,0xc);
      }
      FUN_1001eed65(param_1 + 0x16818);
    }
  }
  else if (*(long *)(param_1 + 0x16818) == 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_34 = *(undefined8 *)(param_1 + 0x152c8);
      local_38 = 0x8420102;
      __os_log_impl(0x100000000,uVar1,1,"airtraffic> starting Ping timer for device %{public}@",
                    &local_38,0xc);
    }
    FUN_1001ee941(0,DAT_100744e10,0,0,FUN_10033d3c4,*(undefined4 *)(param_1 + 0x28),
                  param_1 + 0x16818);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

