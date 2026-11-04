// name: FUN_10020efac
// address: 10020efac

undefined8 FUN_10020efac(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x2ad4) == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mState != kIdle";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  lVar3 = *(long *)(param_1 + 0x21b8);
  if (lVar3 == -1) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "mInitialECID != kInvalidECID";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar1 = FUN_1001782e9(0,0);
    uVar2 = 0;
    if (cVar1 == '\0') goto LAB_10020f068;
    lVar3 = *(long *)(param_1 + 0x21b8);
  }
  uVar2 = 0;
  if (((lVar3 != param_2) && (param_2 != 0)) && (uVar2 = 0, lVar3 != 0)) {
    _AMRLog(5,&cf_AMPDevicesAgent_IgnoringdevicewithECID_llu_waitingforECID_llu,param_2);
    uVar2 = 1;
  }
LAB_10020f068:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

