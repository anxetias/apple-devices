// name: FUN_100633947
// address: 100633947

undefined8 FUN_100633947(undefined4 param_1,undefined8 *param_2,undefined1 *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char local_138 [4];
  char *local_134;
  undefined2 local_12c;
  char *local_12a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      builtin_strncpy(local_138,"\x02\x02\"\b",4);
      local_134 = "Assertion failure";
      local_12c = 0x822;
      local_12a = "serialNumber != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_138,0x16);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    *param_2 = 0;
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_10082e018;
    lVar2 = _IORegistryEntrySearchCFProperty(param_1,"IOService",&cf_GUID,uVar5,3);
    if (lVar2 == 0) {
      lVar2 = _IORegistryEntrySearchCFProperty
                        (param_1,"IOService",&cf_kUSBSerialNumberString,uVar5,3);
      if (lVar2 == 0) {
        lVar2 = _IORegistryEntrySearchCFProperty
                          (param_1,"IOService",&cf_kUSBSerialNumberString,uVar5,3);
        if (lVar2 == 0) {
          uVar5 = 0;
          goto LAB_100633b12;
        }
      }
      lVar3 = FUN_1001705e9(lVar2);
      lVar4 = FUN_100173434();
      if (lVar3 != lVar4) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          builtin_strncpy(local_138,"\x02\x02\"\b",4);
          local_134 = "Assertion failure";
          local_12c = 0x822;
          local_12a = "JRCFGetTypeID(guidRef) == JRCFStringGetTypeID()";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_138,0x16);
        }
        FUN_1001782e9(0,0);
      }
      cVar1 = FUN_10017393c(lVar2,local_138,0x100,0x600);
      if (cVar1 != '\0') {
        _sscanf(local_138,"%llX",param_2);
      }
      FUN_10017060f(lVar2);
      if (param_3 != (undefined1 *)0x0) {
        *param_3 = 1;
      }
    }
    else {
      lVar3 = FUN_1001705e9(lVar2);
      lVar4 = FUN_100171f56();
      if (lVar3 != lVar4) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          builtin_strncpy(local_138,"\x02\x02\"\b",4);
          local_134 = "Assertion failure";
          local_12c = 0x822;
          local_12a = "JRCFGetTypeID(guidRef) == JRCFNumberGetTypeID()";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_138,0x16);
        }
        FUN_1001782e9(0,0);
      }
      FUN_100169524(lVar2,param_2);
      FUN_10017060f(lVar2);
    }
    uVar5 = 1;
  }
LAB_100633b12:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

