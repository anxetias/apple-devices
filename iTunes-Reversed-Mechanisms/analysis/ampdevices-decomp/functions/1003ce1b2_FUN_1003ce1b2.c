// name: FUN_1003ce1b2
// address: 1003ce1b2

undefined1 * FUN_1003ce1b2(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_100166b7f(param_1,&cf_com_apple_iTunesStore_downloadInfo);
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "downloadInfoDict != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = FUN_100166b7f(lVar2,&cf_accountInfo);
    if (lVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "accountInfoDict != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      cVar1 = FUN_100167ab3(lVar2,&cf_DSPersonID,param_2);
      if (cVar1 == '\0') {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = 
          "JRCFDictionaryGetUInt64(accountInfoDict, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"DSPersonID\" \"\")), &outUserInfo.dsid)"
          ;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        FUN_100166f9c(&local_48,lVar2,&cf_AppleID);
        FUN_1001b80b2(param_2 + 0x28,&local_48);
        FUN_1001b7a50(&local_48);
        cVar1 = FUN_1001b8428(param_2 + 0x28);
        if (cVar1 == '\0') {
          FUN_100166f9c(&local_48,lVar2,&cf_UserName);
          FUN_1001b80b2(param_2 + 0x38,&local_48);
          FUN_1001b7a50(&local_48);
          FUN_100166f9c(&local_48,lVar2,&cf_FirstName);
          FUN_1001b80b2(param_2 + 0x48,&local_48);
          FUN_1001b7a50(&local_48);
          FUN_100166f9c(&local_48,lVar2,&cf_LastName);
          FUN_1001b80b2(param_2 + 0x58,&local_48);
          FUN_1001b7a50(&local_48);
          puVar4 = (undefined1 *)0x0;
          goto LAB_1003ce2f9;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "outUserInfo.appleID.NotEmpty()";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
  }
  puVar4 = &DAT_ffffff30;
LAB_1003ce2f9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

