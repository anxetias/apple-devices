// name: FUN_1002031ee
// address: 1002031ee

void FUN_1002031ee(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1001705e9();
  lVar4 = _CFStringGetTypeID();
  if (lVar3 == lVar4) {
    lVar3 = FUN_1001705e9(param_2);
    lVar4 = _CFDictionaryGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = FUN_1002034de(param_2);
      if (cVar1 != '\0') {
        lVar3 = FUN_10016696d(param_2,&cf_iTunesMetadata);
        if (lVar3 != 0) {
          uVar5 = FUN_10016696d(param_2,&cf_ApplicationSINF);
          local_60 = 0;
          cVar1 = FUN_100167dd2(param_2,PTR_cf_LSApplicationLaunchProhibited_10083db10,0);
          if (cVar1 == '\0') {
            iVar2 = FUN_1005c3d1e(param_3[1],param_1,&local_60);
            if (iVar2 != 0) {
              FUN_10017060f(param_3[1]);
              param_3[1] = 0;
              iVar2 = FUN_1005c3d08(*param_3,param_3 + 1);
              if ((iVar2 != -0x80) && (iVar2 != 0)) {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
            }
          }
          uVar6 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                PTR__kCFTypeDictionaryValueCallBacks_10082e140);
          FUN_100171502(uVar6,&cf_iTunesMetadata,lVar3);
          FUN_100171502(uVar6,&cf_ApplicationSINF,uVar5);
          FUN_100171502(uVar6,&cf_PlaceholderIcon,local_60);
          cVar1 = FUN_100167dd2(param_2,&cf_IsDemotedApp,0);
          if (cVar1 != '\0') {
            FUN_100168b0b(uVar6,&cf_IsDemotedApp,1,1);
          }
          FUN_100171502(param_3[2],param_1,uVar6);
          FUN_10017060f(local_60);
          FUN_10017060f(uVar6);
        }
      }
      goto LAB_1002033b6;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "JRCFGetTypeID(bundleInfoDict) == CFDictionaryGetTypeID()";
      goto LAB_1002034af;
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_4a = "JRCFGetTypeID(appIdentifier) == CFStringGetTypeID()";
LAB_1002034af:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_1002033b6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

