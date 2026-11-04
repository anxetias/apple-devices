// name: FUN_100229c25
// address: 100229c25

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100229c25(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "context != nullptr";
      goto LAB_100229e16;
    }
  }
  else {
    if (param_1 != 0) {
      lVar2 = _CFStringGetTypeID();
      lVar3 = _CFGetTypeID(param_1);
      if (lVar2 == lVar3) {
        if (param_2 != 0) {
          lVar2 = _CFDictionaryGetTypeID();
          lVar3 = _CFGetTypeID(param_2);
          if (lVar2 == lVar3) {
            FUN_100166a6a(param_2,&cf_retryDate,&local_50);
            if ((local_50 == 0.0) && (!NAN(local_50))) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_48 = 0x8220202;
                local_44 = "Assertion failure";
                local_3c = 0x822;
                local_3a = "retryAbsoluteTime != 0.";
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            dVar6 = local_50;
            dVar5 = (double)_CFAbsoluteTimeGetCurrent();
            if (dVar6 - dVar5 <= _DAT_100718e00) {
              if ((local_50 != 0.0) || (NAN(local_50))) {
                dVar6 = (double)_CFAbsoluteTimeGetCurrent();
                if (dVar6 - local_50 <= DAT_10070e4c8) {
                  FUN_1001714de(*param_3,param_1,param_2);
                }
              }
            }
            goto LAB_100229e44;
          }
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_3a = "tokenAndRetryDateDictionary != nullptr";
          goto LAB_100229e16;
        }
        goto LAB_100229e3b;
      }
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "firmwareURL != nullptr";
LAB_100229e16:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
LAB_100229e3b:
  FUN_1001782e9(0,0);
LAB_100229e44:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

