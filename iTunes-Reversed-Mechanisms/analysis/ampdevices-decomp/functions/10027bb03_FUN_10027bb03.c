// name: FUN_10027bb03
// address: 10027bb03

void FUN_10027bb03(long param_1,long param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001ee056();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "JRIsCurrentThreadCooperative()";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar2 = 1;
LAB_10027bc77:
    FUN_1001782e9(0,uVar2);
  }
  else {
    if (DAT_1008c76a0 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3a = "appContext != nullptr";
LAB_10027bd0f:
        local_3c = 0x822;
        local_44 = "Assertion failure";
        local_48 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
LAB_10027bc73:
      uVar2 = 0;
      goto LAB_10027bc77;
    }
    if (param_1 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_3a = "oldPrefs != nullptr";
        goto LAB_10027bd0f;
      }
      goto LAB_10027bc73;
    }
    lVar3 = DAT_1008c76a0 + 0x1372;
    if (param_2 != 0) {
      lVar3 = param_2;
    }
    uVar2 = FUN_1001c156e();
    FUN_1001c6987(uVar2,0x70706368,param_1,lVar3,0);
    if (param_3 != '\0') {
      lVar3 = _CFNotificationCenterGetDistributedCenter();
      if (lVar3 != 0) {
        _CFNotificationCenterPostNotification
                  (lVar3,&cf_com_apple_iTunes_parentalPrefsChanged,&cf_com_apple_AMPDevicesAgent,0,0
                  );
      }
      FUN_10027bd41();
      lVar3 = _CFNotificationCenterGetDistributedCenter();
      if (lVar3 != 0) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
          _CFNotificationCenterPostNotification
                    (lVar3,&cf_com_apple_iTunes_libraryChanged,&cf_com_apple_iTunes,0,0);
          return;
        }
        goto LAB_10027bd39;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
LAB_10027bd39:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

