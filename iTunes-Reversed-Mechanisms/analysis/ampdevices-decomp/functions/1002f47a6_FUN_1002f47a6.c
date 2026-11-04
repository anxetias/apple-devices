// name: FUN_1002f47a6
// address: 1002f47a6

char FUN_1002f47a6(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_89c;
  undefined4 local_898;
  char *local_894;
  undefined2 local_88c;
  char *local_88a;
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_2 = 0;
  iVar3 = FUN_100193150(0xffff8002,0x7066726d,0,local_478);
  if (iVar3 == -0x80) {
LAB_1002f4901:
    lVar4 = 0;
LAB_1002f4904:
    lVar7 = 0;
  }
  else {
    if (iVar3 != 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_898 = 0x8220202;
        local_894 = "Assertion failure";
        local_88c = 0x400;
        local_88a = (char *)CONCAT44(local_88a._4_4_,iVar3);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_898,0x12);
      }
      goto LAB_1002f4901;
    }
    lVar4 = 0;
    iVar3 = FUN_1001888ba(local_478,"iPodVoiceOver.framework",local_478,0);
    lVar7 = 0;
    lVar6 = 0;
    cVar1 = '\0';
    if (iVar3 != 0) goto LAB_1002f490a;
    lVar4 = FUN_10016ff43(DAT_1008c4d90,local_478);
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_898 = 0x8220202;
        local_894 = "Assertion failure";
        local_88c = 0x822;
        local_88a = "frameworkURL != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_898,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1002f4901;
    }
    lVar7 = FUN_1001745da(DAT_1008c4d90,&cf_Resources_Info_plist,0,0,lVar4);
    if (lVar7 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_898 = 0x8220202;
        local_894 = "Assertion failure";
        local_88c = 0x822;
        local_88a = "infoFileURL != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_898,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1002f4904;
    }
    cVar1 = FUN_10016ffd2(lVar7,&local_898,0);
    if (cVar1 != '\0') {
      lVar6 = FUN_10016aa24(DAT_1008c4d90,&local_898,0,0);
      if (lVar6 == 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "infoDict != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        lVar6 = 0;
      }
      else {
        cVar1 = FUN_10016801e(lVar6,&cf_CFBundleShortVersionString,&local_89c);
        if (cVar1 != '\0') {
          *param_2 = local_89c;
          goto LAB_1002f490a;
        }
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "success";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar1 = '\0';
      }
      FUN_1001782e9(0,0);
      goto LAB_1002f490a;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "success";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  lVar6 = 0;
  cVar1 = '\0';
LAB_1002f490a:
  FUN_10017060f(lVar6);
  FUN_10017060f(lVar7);
  FUN_10017060f(lVar4);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar1;
}

