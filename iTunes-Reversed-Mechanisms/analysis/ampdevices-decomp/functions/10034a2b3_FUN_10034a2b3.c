// name: FUN_10034a2b3
// address: 10034a2b3

int FUN_10034a2b3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  cfstringStruct *pcVar7;
  undefined8 uVar8;
  undefined1 local_4b0 [16];
  undefined8 local_4a0;
  undefined8 local_498;
  uint local_48c;
  char *local_488;
  char *local_480;
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1004de07b();
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_4a0 = param_4;
    local_498 = param_3;
    cVar1 = FUN_100340ac2(param_2,0,&local_48c,&local_480);
    if (cVar1 != '\0') {
      if ((local_48c & 0xfffffffb) != 2) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = 
          "assetClass == kAirTrafficAssetClass_Track || assetClass == kAirTrafficAssetClass_Genius";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (local_48c == 6) {
        local_488 = local_480;
LAB_10034a41c:
        pcVar7 = (cfstringStruct *)0x0;
        if (local_48c == 2) {
          pcVar7 = &cf_Genius;
        }
        iVar2 = FUN_100347c5b(lVar3,pcVar7,local_478);
        if (iVar2 == -0x80) goto LAB_10034a3c1;
        if (iVar2 != 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          goto LAB_10034a3c1;
        }
        iVar2 = FUN_10034a8b2(lVar3,param_2,local_488,local_478,local_498,local_4a0);
        if (iVar2 == 0) {
          iVar2 = 0;
          goto LAB_10034a3c1;
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 == '\0') goto LAB_10034a3c1;
        local_58 = 0x8000200;
        local_54 = local_488;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        pcVar6 = "airtraffic> failed to set promised data for Genius id %llu (%d)";
        uVar8 = 0x12;
      }
      else {
        lVar5 = FUN_100300729(*(undefined8 *)(lVar3 + 0x30),local_480);
        if (lVar5 != 0) {
          local_488 = *(char **)(lVar5 + 400);
          if (local_488 == (char *)0x0) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar4 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            iVar2 = 0;
            if (cVar1 != '\0') {
              FUN_100476ac1(local_4b0,lVar5);
              local_4a = (char *)FUN_1001b83ae(local_4b0);
              local_58 = 0x8000202;
              local_54 = local_480;
              local_4c = 0x822;
              __os_log_impl(0x100000000,uVar4,0x10,
                            "airtraffic> no Genius id for track %lld (\"%{public}s\")",&local_58,
                            0x16);
              FUN_1001b7a50(local_4b0);
            }
            goto LAB_10034a3c1;
          }
          goto LAB_10034a41c;
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        iVar2 = 0;
        if (cVar1 == '\0') goto LAB_10034a3c1;
        local_58 = 0x8000100;
        local_54 = local_480;
        pcVar6 = "airtraffic> could not find track %lld for Genius data";
        uVar8 = 0xc;
        iVar2 = 0;
      }
      __os_log_impl(0x100000000,uVar4,0x10,pcVar6,&local_58,uVar8);
      goto LAB_10034a3c1;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "ParseAirTrafficMediaAssetIdentifier( assetIdentifier, nullptr, assetClass, assetID )";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = -0x32;
LAB_10034a3c1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

