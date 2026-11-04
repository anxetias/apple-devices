// name: FUN_10060324e
// address: 10060324e

void FUN_10060324e(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  uint local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x6750) != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
    if (cVar2 != '\0') {
      local_38 = local_38 & 0xffff0000;
      __os_log_impl(0x100000000,uVar3,2,"progress> deleting sync progress bar",&local_38,2);
    }
    FUN_10052897c(*(undefined8 *)(lVar1 + 0x6750));
    if (*(long *)(lVar1 + 0x6750) != 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "handlerData->syncProgressBar == nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    *(undefined8 *)(lVar1 + 0x6750) = 0;
  }
  *(undefined8 *)(lVar1 + 0x67ac) = 0;
  *(undefined8 *)(lVar1 + 0x67b4) = 0;
  *(undefined2 *)(lVar1 + 0x67bc) = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

