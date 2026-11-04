// name: FUN_1003475d8
// address: 1003475d8

int FUN_1003475d8(undefined8 param_1,char *param_2,code *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_6a8 [16];
  undefined8 local_698;
  long local_690;
  int local_684;
  undefined8 local_680;
  undefined4 local_678;
  char *local_674;
  undefined2 local_66c;
  char *local_66a;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
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
      local_678 = 0x8220202;
      local_674 = "Assertion failure";
      local_66c = 0x822;
      local_66a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_678,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_100340ac2(param_2,&cf_Playlist,&local_684,&local_698);
    if (cVar1 != '\0') {
      if (local_684 != 3) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_678 = 0x8220202;
          local_674 = "Assertion failure";
          local_66c = 0x822;
          local_66a = "assetClass == kAirTrafficAssetClass_Playlist";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_678,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar2 = FUN_100347c5b(lVar3,&cf_Artwork,&local_678);
      if (iVar2 == -0x80) goto LAB_1003477c1;
      if (iVar2 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_258 = 0x8220202;
          local_254 = "Assertion failure";
          local_24c = 0x400;
          local_24a = iVar2;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_258,0x12);
        }
        goto LAB_1003477c1;
      }
      local_680 = 0;
      lVar5 = FUN_1003473f7(*(undefined8 *)(lVar3 + 0x30),local_698);
      if (lVar5 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "playlistForArtwork != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x2b;
LAB_100347879:
        FUN_10017060f(local_680);
      }
      else {
        local_690 = lVar5;
        iVar2 = FUN_100354991(lVar5,&local_680);
        if (iVar2 != 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar4 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar1 != '\0') {
            FUN_100486d8f(local_6a8,local_690);
            local_54 = (char *)FUN_1001b83ae(local_6a8);
            local_58 = 0x8220202;
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            __os_log_impl(0x100000000,uVar4,0x10,
                          "airtraffic> failed to copy artwork data for playlist \"%{public}s\" (%d)"
                          ,&local_58,0x12);
            FUN_1001b7a50(local_6a8);
          }
          goto LAB_100347879;
        }
        iVar2 = FUN_1003376b5(*(undefined4 *)(lVar3 + 8),param_2,&local_258);
        if (iVar2 == -0x80) goto LAB_100347879;
        if (iVar2 == 0) {
          (*param_3)(param_4,local_680,&local_678,&local_258);
          FUN_10017060f(local_680);
LAB_100347a67:
          iVar2 = 0;
          goto LAB_1003477c1;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        FUN_10017060f(local_680);
        if (iVar2 == 0) goto LAB_100347a67;
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar1 != '\0') {
        local_258 = 0x8420202;
        local_24c = 0x400;
        local_254 = param_2;
        local_24a = iVar2;
        __os_log_impl(0x100000000,uVar4,0x10,
                      "airtraffic> failed to set promised data for playlist artwork asset identifier \"%{public}@\" (%d)"
                      ,&local_258,0x12);
      }
      goto LAB_1003477c1;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_678 = 0x8220202;
      local_674 = "Assertion failure";
      local_66c = 0x822;
      local_66a = 
      "ParseAirTrafficMediaAssetIdentifier( assetIdentifier, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"Playlist\" \"\")), assetClass, assetID )"
      ;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_678,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = -0x32;
LAB_1003477c1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

