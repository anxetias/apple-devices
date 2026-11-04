// name: FUN_100331e03
// address: 100331e03

void FUN_100331e03(void)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined4 local_38;
  long local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008bd7d0 == '\0') {
    lVar3 = FUN_1004e1208();
    if (lVar3 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_38 = 0x8420102;
        local_34 = lVar3;
        __os_log_impl(0x100000000,uVar1,1,
                      "airtraffic> starting host wakeup service for library %{public}@",&local_38,
                      0xc);
      }
      _ATHostAdvertiserStartWakeupService(lVar3);
      FUN_10017060f(lVar3);
      DAT_1008bd7d0 = '\x01';
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

