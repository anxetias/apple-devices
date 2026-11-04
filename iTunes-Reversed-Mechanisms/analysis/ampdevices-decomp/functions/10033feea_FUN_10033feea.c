// name: FUN_10033feea
// address: 10033feea

void FUN_10033feea(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined4 local_38;
  undefined8 local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10033470c(param_1,0,0);
  *(undefined8 *)(param_1 + 0x16841) = 0;
  FUN_10017060f(*(undefined8 *)(param_1 + 0x16850));
  *(undefined8 *)(param_1 + 0x16850) = 0;
  FUN_10034b96f(param_1);
  if ((*(char *)(param_1 + 0x6aca) != '\0') && (*(char *)(param_1 + 0x6acc) == '\0')) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_34 = *(undefined8 *)(param_1 + 0x152c8);
      local_38 = 0x8420102;
      __os_log_impl(0x100000000,uVar1,1,"airtraffic> aborting sync for device %{public}@",&local_38,
                    0xc);
    }
    *(undefined1 *)(param_1 + 0x1684a) = 1;
  }
  if (*(char *)(param_1 + 0x6abe) == '\0') {
    cVar2 = FUN_1001c19de();
    if (cVar2 == '\0') {
      FUN_100332d99(param_1);
      lVar3 = FUN_10055ae0c(*(undefined8 *)(param_1 + 0x66d8));
      if (lVar3 != 0) {
        FUN_100332bcb(param_1,0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

