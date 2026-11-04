// name: FUN_10033d3c4
// address: 10033d3c4

void FUN_10033d3c4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1004de449(param_2);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if ((*(long *)(lVar2 + 0x16688) == 0) ||
          ((*(char *)(lVar2 + 0x6acf) == '\0' && (4 < *(int *)(lVar2 + 0x166d4) - 2U)))) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_34 = *(char **)(lVar2 + 0x152c8);
      local_38 = 0x8420102;
      __os_log_impl(0x100000000,uVar3,1,"airtraffic> stopping Ping timer for device %{public}@",
                    &local_38,0xc);
    }
    FUN_1001eed65(lVar2 + 0x16818);
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar3 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_34 = *(char **)(lVar2 + 0x152c8);
      local_38 = 0x8420102;
      __os_log_impl(0x100000000,uVar3,1,"airtraffic> sending Ping for device %{public}@",&local_38,
                    0xc);
    }
    _ATHostConnectionSendPing(*(undefined8 *)(lVar2 + 0x16688));
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

