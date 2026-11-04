// name: FUN_10020b285
// address: 10020b285

ulong FUN_10020b285(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint local_4c;
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_100171475(param_2,&cf_iTunesMetadata);
  lVar3 = FUN_1001705e9(lVar2);
  lVar4 = _CFDictionaryGetTypeID();
  if (lVar3 == lVar4) {
    lVar2 = FUN_1001705fc(lVar2);
LAB_10020b2f9:
    if (lVar2 != 0) {
      lVar3 = FUN_100166bb8(param_1,&cf_StoreVersion);
      lVar4 = FUN_100166bb8(lVar2,&cf_softwareVersionExternalIdentifier);
      if (lVar4 != 0 && lVar3 != 0) {
        uVar6 = FUN_1001720fd(lVar3,lVar4,0);
        FUN_10017060f(lVar2);
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
          return uVar6;
        }
        goto LAB_10020b509;
      }
      FUN_10017060f(lVar2);
    }
  }
  else {
    lVar4 = _CFDataGetTypeID();
    if (lVar3 == lVar4) {
      lVar2 = FUN_10016a9bd(DAT_1008c4d90,lVar2,0,0);
      goto LAB_10020b2f9;
    }
    if (lVar2 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "iTunesMetadata == nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  uVar5 = FUN_100166c1b(param_1,&cf_Identifier);
  cVar1 = FUN_100170633(uVar5,&cf_com_apple_mobileme_fmip1);
  if (cVar1 == '\0') {
    lVar2 = FUN_100166c1b(param_1,&cf_UserVisibleVersion);
    lVar3 = FUN_100166c1b(param_2,&cf_CFBundleShortVersionString);
    if ((lVar3 == 0 || lVar2 == 0) || (uVar6 = FUN_100173bb7(lVar2,lVar3,0x40), uVar6 == 0))
    goto LAB_10020b3dd;
  }
  else {
LAB_10020b3dd:
    lVar2 = FUN_100166c1b(param_1,&cf_InternalVersion);
    lVar3 = FUN_100166c1b(param_2,&cf_CFBundleVersion);
    if ((lVar3 == 0 || lVar2 == 0) || (uVar6 = FUN_100173bb7(lVar2,lVar3,0x40), uVar6 == 0)) {
      cVar1 = FUN_100167740(param_1,&cf_Build,&local_48);
      if ((cVar1 == '\0') ||
         (cVar1 = FUN_100167740(param_2,&cf_CFBundleBuild,&local_4c), cVar1 == '\0')) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0xffffffffffffffff;
        if (local_4c <= local_48) {
          uVar6 = (ulong)(local_4c < local_48);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar6;
  }
LAB_10020b509:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

