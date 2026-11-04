// name: FUN_10037992b
// address: 10037992b

void FUN_10037992b(int param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  uint local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    if ((param_1 == 2) && (DAT_1008be020 == '\0')) {
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar1 != '\0') {
        local_28 = local_28 & 0xffff0000;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                      "unsubscribing for WiFi device notifications",&local_28,2);
        lVar3 = *param_2;
      }
    }
    iVar2 = _AMDeviceNotificationUnsubscribe(lVar3);
    if (iVar2 != 0) {
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
      if (cVar1 != '\0') {
        local_28 = 0x4000100;
        local_24 = iVar2;
        __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                            "AMDeviceNotificationUnsubscribe failed (0x%08X)",&local_28,8);
      }
    }
    *param_2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

