// name: FUN_100332458
// address: 100332458

void FUN_100332458(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x16688) == 0) {
    if (*(long *)(param_1 + 0x152c8) == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3a = "handlerData->deviceIdentifier != nullptr";
        goto LAB_1003326a0;
      }
    }
    else {
      lVar3 = FUN_1004e1208();
      if (lVar3 != 0) {
        lVar4 = _ATHostConnectionCreateWithCallbacks
                          (lVar3,*(undefined8 *)(param_1 + 0x152c8),0,
                           *(undefined4 *)(param_1 + 0x28),0,FUN_10033d625);
        *(long *)(param_1 + 0x16688) = lVar4;
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar2 = DAT_1008c75b8;
        if (lVar4 == 0) {
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar1 != '\0') {
            local_44 = *(char **)(param_1 + 0x152c8);
            local_48 = 0x8420102;
            __os_log_impl(0x100000000,uVar2,0x10,
                          "airtraffic> ATHostConnectionCreateWithCallbacks failed for device %{public}@"
                          ,&local_48,0xc);
          }
        }
        else {
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar1 != '\0') {
            local_44 = *(char **)(param_1 + 0x16688);
            local_3a = *(char **)(param_1 + 0x152c8);
            local_48 = 0x8000202;
            local_3c = 0x842;
            __os_log_impl(0x100000000,uVar2,1,
                          "airtraffic> created host connection %p for device %{public}@",&local_48,
                          0x16);
          }
          FUN_10055b04a(*(undefined8 *)(param_1 + 0x66d8),*(undefined8 *)(param_1 + 0x16688));
        }
        FUN_10017060f(lVar3);
        goto LAB_1003324a5;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3a = "libraryIdentifier != nullptr";
        goto LAB_1003326a0;
      }
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "handlerData->airTrafficHostConnection == nullptr";
LAB_1003326a0:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_1003324a5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

