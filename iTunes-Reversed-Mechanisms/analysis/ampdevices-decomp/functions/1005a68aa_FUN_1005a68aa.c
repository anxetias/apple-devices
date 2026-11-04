// name: FUN_1005a68aa
// address: 1005a68aa

int FUN_1005a68aa(long param_1,long param_2,char param_3,undefined8 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  cfstringStruct *pcVar10;
  undefined4 *puVar11;
  bool bVar12;
  long lVar13;
  undefined8 local_888;
  char local_879;
  undefined4 local_878;
  char *local_874;
  undefined2 local_86c;
  undefined8 local_86a;
  undefined2 local_862;
  undefined8 local_860;
  undefined4 local_858;
  char *local_854;
  undefined2 local_84c;
  char *local_84a;
  undefined1 local_438 [512];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((*(byte *)(param_1 + 0x15b4) & 0x20) == 0) &&
     (lVar3 = FUN_100166b7f(param_2,&cf_Locales), lVar3 != 0)) {
    pcVar10 = *(cfstringStruct **)(param_1 + 0x15f0);
    param_2 = lVar3;
  }
  else {
    pcVar10 = &cf_UIStrings;
  }
  lVar3 = FUN_100166b7f(param_2,pcVar10);
  if (lVar3 == 0) {
    uVar9 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar9,0x10);
    if (cVar1 != '\0') {
      local_858 = 0x8220202;
      local_854 = "Assertion failure";
      local_84c = 0x822;
      local_84a = "dictUIStaticStrings != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    lVar4 = FUN_100171426(lVar3);
    if (0 < lVar4) {
      lVar5 = FUN_1001c6429(lVar4 * 8);
      lVar6 = FUN_1001c6429(lVar4 * 8);
      if (lVar5 == 0 || lVar6 == 0) {
        uVar9 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar9,0x10);
        if (cVar1 != '\0') {
          local_858 = 0x8220202;
          local_854 = "Assertion failure";
          local_84c = 0x822;
          local_84a = "(keyArray != nullptr) && (valueArray != nullptr)";
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
      }
      else {
        FUN_1001714b1(lVar3,lVar5,lVar6);
        iVar2 = FUN_1001ceb24(param_4,param_5,0,lVar4,0);
        if (iVar2 == 0) {
          lVar3 = 1;
          lVar13 = lVar4;
          do {
            uVar9 = *(undefined8 *)(lVar6 + -8 + lVar3 * 8);
            local_888 = 0;
            local_879 = '\x01';
            FUN_1001e115f(*(undefined8 *)(lVar5 + -8 + lVar3 * 8),local_438);
            FUN_1001e115f(uVar9,local_238);
            if ((*(byte *)(param_1 + 0x15b4) & 0x20) == 0) {
              uVar7 = FUN_1001e1091(local_438);
              if (*(long *)(param_1 + 0x16b8) == 0) {
                local_888 = FUN_1005b00b0(param_1,uVar9,0x40000000,1,0,0,0,0,&local_879);
              }
              else {
                iVar2 = FUN_1002f60f4(*(undefined8 *)(param_1 + 0x1598),*(long *)(param_1 + 0x16b8),
                                      uVar9,0,*(undefined8 *)(param_1 + 0x16a8),0x55495353,uVar7,0,
                                      &local_888,&local_879,lVar13);
                if ((iVar2 != -0x80) && (iVar2 != 0)) {
                  uVar8 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar1 != '\0') {
                    local_878 = 0x8220202;
                    local_874 = "Assertion failure";
                    local_86c = 0x400;
                    local_86a = CONCAT44(local_86a._4_4_,iVar2);
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)");
                  }
                }
                if (((*(char *)(param_1 + 0x15a0) != '\0') && (*(char *)(param_1 + 0x15a5) != '\0'))
                   && (cVar1 = FUN_100170633(*(undefined8 *)(param_1 + 0x16a8),&cf_en_US),
                      cVar1 != '\0')) {
                  uVar8 = FUN_1001705fc(uVar9);
                  FUN_10017060f(local_888);
                  local_888 = uVar8;
                }
              }
              if (param_3 == '\0') {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar8 = DAT_1008c75b8;
                cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar1 != '\0') {
                  local_874 = "";
                  if (local_879 == '\0') {
                    local_874 = "NOT ";
                  }
                  local_860 = *(undefined8 *)(param_1 + 0x16a8);
                  local_878 = 0x8220302;
                  local_86c = 0x842;
                  local_862 = 0x842;
                  local_86a = uVar9;
                  __os_log_impl(0x100000000,uVar8,1,
                                "speech> %{public}sregenerating \"%{public}@\" (%{public}@)");
                }
              }
              if (((local_879 != '\0' || param_3 != '\0') &&
                  (iVar2 = FUN_1005a249c(param_1,1,uVar7,uVar9,local_888,
                                         *(undefined8 *)(param_1 + 0x16a8),0,&local_858),
                  iVar2 != -0x80)) && (iVar2 != 0)) {
                uVar9 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar9,0x10);
                if (cVar1 != '\0') {
                  local_86a = CONCAT44(local_86a._4_4_,iVar2);
LAB_1005a70fe:
                  local_86c = 0x400;
                  local_874 = "Assertion failure";
                  local_878 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)");
                }
              }
            }
            else {
              uVar7 = FUN_1005a98e6(local_238);
              if (*(long *)(param_1 + 0x16b8) == 0) {
                local_888 = FUN_1001705fc(uVar9);
              }
              else {
                iVar2 = FUN_1002f60f4(*(undefined8 *)(param_1 + 0x1598),*(long *)(param_1 + 0x16b8),
                                      uVar9,0,*(undefined8 *)(param_1 + 0x15f0),0x53595353,uVar7,0,
                                      &local_888,&local_879,lVar13);
                if ((iVar2 != -0x80) && (iVar2 != 0)) {
                  uVar8 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar1 != '\0') {
                    local_878 = 0x8220202;
                    local_874 = "Assertion failure";
                    local_86c = 0x400;
                    local_86a = CONCAT44(local_86a._4_4_,iVar2);
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_878,
                                        0x12);
                  }
                }
                if (((*(char *)(param_1 + 0x15a0) != '\0') && (*(char *)(param_1 + 0x15a5) != '\0'))
                   && (cVar1 = FUN_100170633(*(undefined8 *)(param_1 + 0x15f0),&cf_en_US),
                      cVar1 != '\0')) {
                  uVar8 = FUN_1001705fc(uVar9);
                  FUN_10017060f(local_888);
                  local_888 = uVar8;
                }
                if (param_3 == '\0') {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar8 = DAT_1008c75b8;
                  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar1 != '\0') {
                    local_874 = "";
                    if (local_879 == '\0') {
                      local_874 = "NOT ";
                    }
                    local_860 = *(undefined8 *)(param_1 + 0x15f0);
                    local_878 = 0x8220302;
                    local_86c = 0x842;
                    local_862 = 0x842;
                    local_86a = uVar9;
                    __os_log_impl(0x100000000,uVar8,1,
                                  "speech> %{public}sregenerating \"%{public}@\" (%{public}@)",
                                  &local_878,0x20);
                  }
                }
              }
              if (((local_879 != '\0' || param_3 != '\0') &&
                  (iVar2 = FUN_1005ae396(param_1,uVar9,local_888,*(undefined8 *)(param_1 + 0x15f0),0
                                         ,0x53595353,uVar7,local_438,param_1 + 0xd30,param_1 + 0x910
                                         ,&local_858), iVar2 != -0x80)) && (iVar2 != 0)) {
                uVar9 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar9,0x10);
                if (cVar1 != '\0') {
                  local_86a = CONCAT44(local_86a._4_4_,iVar2);
                  goto LAB_1005a70fe;
                }
              }
            }
            FUN_10017060f(local_888);
            iVar2 = FUN_1001ceb24(param_4,param_5,lVar3);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar9 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar9,0x10);
                if (cVar1 != '\0') {
                  puVar11 = &local_878;
                  local_878 = 0x8220202;
                  local_874 = "Assertion failure";
                  local_86c = 0x400;
                  local_86a = CONCAT44(local_86a._4_4_,iVar2);
                  goto LAB_1005a7324;
                }
              }
              break;
            }
            iVar2 = 0;
            bVar12 = lVar3 != lVar4;
            lVar3 = lVar3 + 1;
          } while (bVar12);
        }
        else if (iVar2 != -0x80) {
          uVar9 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar9,0x10);
          if (cVar1 != '\0') {
            puVar11 = &local_858;
            local_858 = 0x8220202;
            local_854 = "Assertion failure";
            local_84c = 0x400;
            local_84a = (char *)CONCAT44(local_84a._4_4_,iVar2);
LAB_1005a7324:
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",puVar11,0x12);
          }
        }
      }
      goto LAB_1005a71c7;
    }
    uVar9 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar9,0x10);
    if (cVar1 != '\0') {
      local_858 = 0x8220202;
      local_854 = "Assertion failure";
      local_84c = 0x822;
      local_84a = "stringCount > 0";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
    }
    iVar2 = 0;
    FUN_1001782e9(0,0);
  }
  lVar6 = 0;
  lVar5 = 0;
LAB_1005a71c7:
  FUN_1001c64c1(lVar5);
  FUN_1001c64c1(lVar6);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

