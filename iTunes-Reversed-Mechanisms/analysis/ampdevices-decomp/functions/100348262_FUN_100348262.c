// name: FUN_100348262
// address: 100348262

int FUN_100348262(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  int iVar7;
  undefined1 local_4a8 [16];
  undefined8 local_498;
  undefined8 local_490;
  int local_484;
  int local_480;
  undefined4 uStack_47c;
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
    local_498 = param_3;
    local_490 = param_4;
    cVar1 = FUN_100340ac2(param_2,0,&local_484,&local_480);
    if (cVar1 != '\0') {
      if (local_484 == 2) {
LAB_10034838e:
        lVar5 = FUN_100300729(*(undefined8 *)(lVar3 + 0x30),CONCAT44(uStack_47c,local_480));
        if (lVar5 == 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar4 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          iVar2 = 0;
          if (cVar1 != '\0') {
            local_54 = (char *)CONCAT44(uStack_47c,local_480);
            local_58 = 0x8000100;
            __os_log_impl(0x100000000,uVar4,0x10,"airtraffic> could not find track %lld for artwork"
                          ,&local_58,0xc);
          }
          goto LAB_100348366;
        }
        iVar7 = *(int *)(lVar5 + 0x174);
        if (*(int *)(lVar5 + 0x174) == 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar4 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          iVar2 = 0;
          if (cVar1 != '\0') {
            FUN_100476ac1(local_4a8,lVar5);
            local_4a = (char *)FUN_1001b83ae(local_4a8);
            local_58 = 0x8000202;
            local_4c = 0x822;
            local_54 = (char *)CONCAT44(uStack_47c,local_480);
            __os_log_impl(0x100000000,uVar4,0x10,
                          "airtraffic> no artwork record id for track %lld (\"%{public}s\")",
                          &local_58,0x16);
            FUN_1001b7a50(local_4a8);
          }
          goto LAB_100348366;
        }
      }
      else {
        iVar7 = local_480;
        if (local_484 != 4) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = 
            "assetClass == kAirTrafficAssetClass_Track || assetClass == kAirTrafficAssetClass_Artwork"
            ;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar7 = local_480;
          if (local_484 != 4) goto LAB_10034838e;
        }
      }
      pcVar6 = (cfstringStruct *)0x0;
      if (local_484 == 2) {
        pcVar6 = &cf_Artwork;
      }
      iVar2 = FUN_100347c5b(lVar3,pcVar6,local_478);
      if (iVar2 == -0x80) goto LAB_100348366;
      if (iVar2 == 0) {
        iVar2 = FUN_100348713(lVar3,param_2,iVar7,0,local_478,local_498,local_490);
        if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_100348366;
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 == '\0') goto LAB_100348366;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 == '\0') goto LAB_100348366;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      }
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      goto LAB_100348366;
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
LAB_100348366:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

