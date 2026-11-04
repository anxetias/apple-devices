// name: FUN_10020352f
// address: 10020352f

void FUN_10020352f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1001705e9();
  lVar3 = _CFStringGetTypeID();
  if (lVar2 == lVar3) {
    lVar2 = FUN_1001705e9(param_2);
    lVar3 = _CFDictionaryGetTypeID();
    if (lVar2 != lVar3) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "JRCFGetTypeID(bundleInfoDict) == CFDictionaryGetTypeID()";
        goto LAB_100203659;
      }
      goto LAB_10020360f;
    }
    cVar1 = FUN_1002034de(param_2);
    if (cVar1 != '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
        FUN_1001709a5(param_3,param_1);
        return;
      }
      goto LAB_100203680;
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "JRCFGetTypeID(appIdentifier) == CFStringGetTypeID()";
LAB_100203659:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_10020360f:
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
LAB_100203680:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

