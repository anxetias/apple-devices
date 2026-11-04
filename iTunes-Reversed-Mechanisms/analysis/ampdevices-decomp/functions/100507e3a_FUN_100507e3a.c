// name: FUN_100507e3a
// address: 100507e3a

void FUN_100507e3a(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  undefined8 local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((*(char *)(param_1 + 0x151e2) == '\0') || (*(char *)(param_1 + 0x151e3) == '\0')) ||
     (*(long *)(param_1 + 0x30) == 0)) {
    cVar1 = *(char *)(param_1 + 0x6abd);
    *(undefined1 *)(param_1 + 0x6abd) = 0;
    FUN_100507f87(param_1);
    FUN_10023318f(param_1,"");
    if (cVar1 != '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        FUN_1004e3b42(param_1);
        return;
      }
      goto LAB_100507f82;
    }
  }
  else {
    FUN_100507f87(param_1);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar2 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_34 = *(undefined8 *)(param_1 + 0x38);
      local_38 = 0x8000100;
      __os_log_impl(0x100000000,uVar2,1,"sync> hiding device id %016llX",&local_38,0xc);
    }
    FUN_100317497(*(undefined8 *)(param_1 + 0x30),1);
    uVar2 = FUN_1001c156e();
    FUN_1001c6987(uVar2,0x69706468,*(undefined4 *)(param_1 + 0x28),0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_100507f82:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

