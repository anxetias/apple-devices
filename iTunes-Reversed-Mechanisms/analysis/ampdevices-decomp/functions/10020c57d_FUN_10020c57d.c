// name: FUN_10020c57d
// address: 10020c57d

void FUN_10020c57d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1001705e9();
  lVar3 = _CFStringGetTypeID();
  if (lVar2 == lVar3) {
    lVar2 = FUN_1001705e9(param_2);
    lVar3 = _CFDictionaryGetTypeID();
    if (lVar2 == lVar3) {
      local_48 = 0;
      uStack_44 = 0;
      local_50 = 0;
      lVar2 = FUN_100166c1b(param_2,&cf_ApplicationType);
      if ((lVar2 == 0) || (cVar1 = FUN_100170633(lVar2,&cf_User), cVar1 != '\0')) {
        lVar2 = FUN_10016696d(param_2,&cf_ApplicationSINF);
        if (lVar2 == 0) {
          cVar1 = FUN_100167ab3(param_2,&cf_ApplicationDSID,&local_48);
          uVar5 = CONCAT44(uStack_44,local_48);
          if (uVar5 < 2 || cVar1 == '\0') goto LAB_10020c6b2;
          uVar4 = 0;
        }
        else {
          FUN_10020d941(lVar2,0,&local_48,0,0,&local_50,0);
          uVar5 = CONCAT44(uStack_44,local_48);
          uVar4 = local_50;
          if (uVar5 < 2) goto LAB_10020c6b2;
        }
        FUN_10031e4ab(uVar5,uVar4,1,0,param_3,0);
      }
      goto LAB_10020c6b2;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "JRCFGetTypeID(bundleInfoDict) == CFDictionaryGetTypeID()";
      goto LAB_10020c737;
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "JRCFGetTypeID(appIdentifier) == CFStringGetTypeID()";
LAB_10020c737:
      local_3c = 0x822;
      uStack_40 = 1;
      uStack_44 = 0x7a0a90;
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_10020c6b2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

