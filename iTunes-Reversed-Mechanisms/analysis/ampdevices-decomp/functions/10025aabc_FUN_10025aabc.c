// name: FUN_10025aabc
// address: 10025aabc

void FUN_10025aabc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_4c [4];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100164d80(param_1,local_4c);
  if (cVar1 == '\0') goto LAB_10025ac33;
  lVar2 = _CFGetTypeID(param_2);
  lVar3 = _CFDictionaryGetTypeID();
  if (lVar2 == lVar3) {
    lVar2 = FUN_100166b7f(param_2,&cf_Restore);
    if (lVar2 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "softwareDictionary != nullptr";
        goto LAB_10025ac05;
      }
    }
    else {
      lVar2 = FUN_100166c1b(lVar2,&cf_BuildVersion);
      if (lVar2 != 0) {
        FUN_1001709a5(*param_3,lVar2);
        goto LAB_10025ac33;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "buildVersionString != nullptr";
        goto LAB_10025ac05;
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "CFGetTypeID(value) == CFDictionaryGetTypeID()";
LAB_10025ac05:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_10025ac33:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

