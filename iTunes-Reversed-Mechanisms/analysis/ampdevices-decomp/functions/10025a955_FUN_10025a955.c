// name: FUN_10025a955
// address: 10025a955

void FUN_10025a955(long param_1,long param_2,undefined8 *param_3)

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
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100164d80(param_1,local_4c);
  if (cVar1 == '\0') goto LAB_10025aa9a;
  if (param_1 == 0) {
LAB_10025a9ec:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "buildVersionString != nullptr";
LAB_10025aa6c:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    lVar2 = _CFStringGetTypeID();
    lVar3 = _CFGetTypeID(param_1);
    if (lVar2 != lVar3) goto LAB_10025a9ec;
    if (param_2 != 0) {
      lVar2 = _CFDictionaryGetTypeID();
      lVar3 = _CFGetTypeID(param_2);
      if (lVar2 == lVar3) {
        lVar2 = FUN_100166c1b(param_2,&cf_SameAs);
        if (lVar2 == 0) {
          FUN_1001709a5(*param_3,param_1);
        }
        goto LAB_10025aa9a;
      }
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "updateRestoreParentDictionary != nullptr";
      goto LAB_10025aa6c;
    }
  }
  FUN_1001782e9(0,0);
LAB_10025aa9a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

