// name: FUN_10025aca3
// address: 10025aca3

void FUN_10025aca3(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

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
      lVar2 = FUN_1001705e9(param_2);
      lVar3 = _CFBooleanGetTypeID();
      if (lVar2 != lVar3) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_3a = 
          "JRCFGetTypeID(carrierBundleDictionary) == CFDictionaryGetTypeID() || JRCFGetTypeID(carrierBundleDictionary) == CFBooleanGetTypeID()"
          ;
          goto LAB_10025ae00;
        }
        goto LAB_10025ad73;
      }
    }
    lVar2 = FUN_1001705e9(param_2);
    lVar3 = _CFDictionaryGetTypeID();
    if (lVar2 == lVar3) {
      lVar2 = FUN_100173bb7(*param_3,param_1,0x40);
      if (lVar2 != -1) {
        if (param_3[1] != 0) {
          lVar2 = FUN_100173bb7(param_1,param_3[1],0x40);
          if (lVar2 != 1) goto LAB_10025ad7c;
        }
        param_3[1] = param_1;
        param_3[2] = param_2;
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "JRCFGetTypeID(productVersionString) == CFStringGetTypeID()";
LAB_10025ae00:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_10025ad73:
    FUN_1001782e9(0,0);
  }
LAB_10025ad7c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

