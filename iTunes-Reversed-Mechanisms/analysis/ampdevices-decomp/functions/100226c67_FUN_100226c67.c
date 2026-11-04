// name: FUN_100226c67
// address: 100226c67

int FUN_100226c67(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long local_460;
  char local_458 [4];
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_100172e65(DAT_1008c4d90,0,PTR__kCFTypeSetCallBacks_10082e148);
  if (lVar4 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_44a = "localizationSet != nullptr";
LAB_10022726c:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      builtin_strncpy(local_458,"\x02\x02\"\b",4);
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_458,0x16);
    }
LAB_100226ec9:
    FUN_1001782e9(0,0);
LAB_100226ed2:
    FUN_10017060f(lVar4);
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      builtin_strncpy(local_458,"\x02\x02\"\b",4);
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "localizationArray != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_458,0x16);
    }
    local_460 = 0;
    FUN_1001782e9(0,0);
LAB_100226f14:
    pcVar6 = (char *)0x0;
    iVar3 = -0x2b;
    pcVar5 = (char *)0x0;
  }
  else {
    iVar3 = FUN_1001f7ba5(param_1);
    if (iVar3 == 0) {
      do {
        iVar3 = FUN_1001f802f(param_1,local_458,0x400);
        if (iVar3 != 0) {
          if (iVar3 != -0x80) {
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          goto LAB_100226ed2;
        }
        pcVar5 = _strchr(local_458,0x2f);
        if (pcVar5 != (char *)0x0) {
          *pcVar5 = '\0';
          FUN_1001699ab(lVar4,local_458);
        }
        iVar3 = FUN_1001f7c48(param_1);
      } while (iVar3 == 0);
    }
    local_460 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    if (local_460 == 0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        builtin_strncpy(local_458,"\x02\x02\"\b",4);
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = "mutableArray != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_458,0x16);
      }
      FUN_1001782e9(0,0);
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_44a = "localizationArray != nullptr";
        goto LAB_10022726c;
      }
      goto LAB_100226ec9;
    }
    FUN_100172ee2(lVar4,FUN_10022abc5,local_460);
    FUN_100164902(local_460,FUN_10022abd8,0);
    FUN_10017060f(lVar4);
    pcVar5 = (char *)_CFLocaleCopyPreferredLanguages();
    if (pcVar5 == (char *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        builtin_strncpy(local_458,"\x02\x02\"\b",4);
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = "preferredLanguagesArray != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_458,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_100226f14;
    }
    pcVar6 = (char *)_CFBundleCopyLocalizationsForPreferences(local_460,pcVar5);
    if (pcVar6 == (char *)0x0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        builtin_strncpy(local_458,"\x02\x02\"\b",4);
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = "preferredLocalizationsArray != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_458,0x16);
      }
      pcVar6 = (char *)0x0;
      FUN_1001782e9(0,0);
      iVar3 = -0x2b;
    }
    else {
      lVar4 = FUN_100164a01(pcVar6,0);
      if (lVar4 == 0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_4a = "localeOrLanguageName != nullptr";
LAB_10022735c:
          local_4c = 0x822;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
LAB_10022714b:
        FUN_1001782e9(0,0);
LAB_100227154:
        iVar3 = -0x32;
      }
      else {
        if (param_2 == 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_4a = "fileName != nullptr";
            goto LAB_10022735c;
          }
          goto LAB_10022714b;
        }
        uVar7 = FUN_1001736b8(DAT_1008c4d90,0,&cf______,lVar4);
        cVar1 = FUN_10017393c(uVar7,local_458,0x100,0x8000100);
        if (cVar1 == '\0') {
          uVar8 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar8,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = 
            "JRCFStringGetCString(zipBundleFilePathString, zipBundleFilePath, sizeof(zipBundleFilePath), kCFStringEncodingUTF8)"
            ;
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          FUN_10017060f(uVar7);
          goto LAB_100227154;
        }
        iVar3 = FUN_1001f7ceb(param_1,local_458);
        FUN_10017060f(uVar7);
        if ((iVar3 == -0x80) || (iVar3 == 0)) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar2 = 0x10;
          if (iVar3 == 0) {
            uVar2 = 2;
          }
          goto LAB_100226f27;
        }
      }
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        builtin_strncpy(local_458,"\x02\x02\"\b",4);
        local_454 = "Assertion failure";
        local_44c = 0x400;
        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_458,0x12);
      }
    }
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar2 = 0x10;
LAB_100226f27:
  uVar7 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,uVar2);
  if (cVar1 != '\0') {
    builtin_strncpy(local_458,"\x02\x02B\b",4);
    local_44c = 0x842;
    local_454 = pcVar5;
    local_44a = pcVar6;
    __os_log_impl(0x100000000,uVar7,uVar2,
                  "preferred languages: %{public}@, preferred localizations: %{public}@",local_458,
                  0x16);
  }
  FUN_10017060f(pcVar6);
  FUN_10017060f(pcVar5);
  FUN_10017060f(local_460);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

