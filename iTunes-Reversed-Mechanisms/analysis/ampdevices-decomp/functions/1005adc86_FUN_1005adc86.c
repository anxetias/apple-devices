// name: FUN_1005adc86
// address: 1005adc86

int FUN_1005adc86(long param_1,long *param_2,char *param_3,undefined1 *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  *param_2 = 0;
  *param_3 = '\0';
  *param_4 = 0;
  cVar1 = FUN_10017cbd0(param_1 + 0xd0);
  if (cVar1 == '\0') {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "JRFileSpecIsValid(&mUIStaticFileSpec)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    cVar1 = FUN_1005a56c6(param_1);
    if (cVar1 == '\0') {
      iVar3 = 0x46d;
    }
    else {
      cVar1 = FUN_1005a5736(param_1);
      *param_3 = cVar1;
      cVar2 = FUN_1005a60e6(param_1);
      cVar1 = *param_3;
      *param_4 = cVar2 != '\0' || cVar1 != '\0';
      iVar3 = 0;
      if (((cVar2 != '\0' || cVar1 != '\0') || *param_3 != '\0') &&
         (iVar3 = FUN_1005a624a(param_1,&local_60), iVar3 != -0x80)) {
        if (iVar3 == 0) {
          lVar5 = FUN_100166b7f(local_60,&cf_Locales);
          if (lVar5 == 0) {
            pcVar7 = &cf_UIStrings;
            lVar5 = local_60;
          }
          else {
            pcVar7 = *(cfstringStruct **)(param_1 + 0x15f0);
          }
          lVar5 = FUN_100166b7f(lVar5,pcVar7);
          if (lVar5 == 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "dictUIStaticStrings != nullptr";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            iVar3 = -0x32;
          }
          else {
            lVar5 = FUN_100171426(lVar5);
            uVar4 = *(uint *)(param_1 + 0x15cc);
            if (uVar4 == 0) {
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "mEstimatedSystemMessageSize != 0";
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              uVar4 = *(uint *)(param_1 + 0x15cc);
            }
            *param_2 = lVar5 * (ulong)uVar4;
            uVar6 = FUN_100166c1b(local_60,&cf_Version);
            uVar6 = FUN_1001705fc(uVar6);
            FUN_10017060f(*(undefined8 *)(param_1 + 0x15e8));
            *(undefined8 *)(param_1 + 0x15e8) = uVar6;
            iVar3 = 0;
          }
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
      FUN_10017060f(local_60);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

