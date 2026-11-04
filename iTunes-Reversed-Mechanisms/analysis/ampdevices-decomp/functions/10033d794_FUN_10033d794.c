// name: FUN_10033d794
// address: 10033d794

void FUN_10033d794(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1004de449(*(undefined4 *)(param_1 + 8));
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be not NULL)";
      local_4c = 0x822;
      local_4a = "handlerData";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 == '\0') {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar2 != '\0') {
        local_54 = (char *)_ATCFMessageGetName(*(undefined8 *)(param_1 + 0x10));
        local_4a = *(char **)(param_1 + 0x18);
        local_58 = 0x8420202;
        local_4c = 0x800;
        __os_log_impl(0x100000000,uVar4,0x10,
                      "airtraffic> dropping %{public}@ message for host connection %p",&local_58,
                      0x16);
      }
      goto LAB_10033d8dc;
    }
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(lVar3 + 0x166d4) == 0) {
    FUN_10033470c(lVar3,1,0);
  }
  pcVar5 = (char *)_ATCFMessageGetName(uVar4);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_4a = *(char **)(lVar3 + 0x152c8);
    local_58 = 0x8420202;
    local_4c = 0x842;
    local_54 = pcVar5;
    __os_log_impl(0x100000000,uVar1,1,"airtraffic> got %{public}@ message for device %{public}@",
                  &local_58,0x16);
  }
  cVar2 = FUN_1001cd44e("log-air-traffic-messages",0,0);
  if (cVar2 != '\0') {
    FUN_10016ab5c(uVar4);
  }
  lVar6 = 8;
  do {
    cVar2 = FUN_100170633(pcVar5,*(undefined8 *)((long)&PTR_PTR_100854638 + lVar6));
    if (cVar2 != '\0') {
      (**(code **)((long)&PTR_cf_SyncAllowed_100854640 + lVar6))(lVar3,uVar4);
      break;
    }
    lVar6 = lVar6 + 0x10;
  } while (lVar6 != 200);
LAB_10033d8dc:
  FUN_10017060f(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

