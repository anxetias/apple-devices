// name: FUN_1002eb5ec
// address: 1002eb5ec

undefined8
FUN_1002eb5ec(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "mRegisteredDataClasses != nullptr";
LAB_1002eb752:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    lVar3 = FUN_10016499b();
    if (lVar3 != 0) {
      if (param_3 != (undefined8 *)0x0) {
        uVar4 = FUN_100166c1b(lVar3,&cf_kAMSDataClassName);
        uVar4 = FUN_1001705fc(uVar4);
        *param_3 = uVar4;
      }
      if (param_4 != (undefined1 *)0x0) {
        uVar1 = FUN_100167e61(lVar3,&cf_kAMSDataClassEnabled,0);
        *param_4 = uVar1;
      }
      if (param_5 == (undefined1 *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        uVar1 = FUN_100167e61(lVar3,&cf_kAMSDataClassReset,0);
        *param_5 = uVar1;
      }
      goto LAB_1002eb709;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "dictDetail != nullptr";
      goto LAB_1002eb752;
    }
  }
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_1002eb709:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

