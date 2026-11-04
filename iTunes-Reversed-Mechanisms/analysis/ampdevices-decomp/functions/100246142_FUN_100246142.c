// name: FUN_100246142
// address: 100246142

int FUN_100246142(undefined8 param_1,char param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined8 local_488;
  ulong local_480;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  char *local_46a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (3 < (byte)(param_2 - 1U)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x822;
      local_46a = "false";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    iVar2 = -0x32;
    if (cVar1 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x400;
      local_46a = (char *)CONCAT44(local_46a._4_4_,0xffffffce);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_478,0x12);
    }
    goto LAB_1002464a5;
  }
  if (param_3 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_46a = "prefsData != nullptr";
LAB_100246588:
      local_46c = 0x822;
      local_474 = "Assertion failure";
      local_478 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
  }
  else {
    iVar2 = *(int *)(&DAT_10071ba8c + (ulong)(byte)(param_2 - 1U) * 4);
    FUN_10017103d(param_3,100);
    uVar3 = FUN_100170f7f(param_3);
    FUN_10024848c(uVar3,param_2);
    cVar1 = FUN_10017cbd0(param_1);
    if (cVar1 != '\0') {
      iVar2 = FUN_1001887a6(param_1,&DAT_10071ba8c + iVar2,&local_478);
      if ((iVar2 == -0x80) || (iVar2 == -0x2b)) goto LAB_1002464a5;
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        if (iVar2 != 0) goto LAB_1002464a5;
      }
      iVar2 = FUN_10017cc65(&local_478,0x64617461,1,&local_488);
      if ((iVar2 == -0x80) || (iVar2 == -0x2b)) goto LAB_1002464a5;
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        if (iVar2 != 0) goto LAB_1002464a5;
      }
      iVar2 = FUN_10017ce92(local_488,&local_480);
      if (iVar2 == -0x80) {
LAB_1002465de:
        FUN_10017103d(param_3,100);
        uVar3 = FUN_100170f7f(param_3);
        FUN_10024848c(uVar3,param_2);
      }
      else {
        if (iVar2 == 0) {
          if (local_480 < 100) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_4a = "fileLength >= sizeof(HEADER_TYPE)";
LAB_100246756:
              local_4c = 0x822;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
LAB_1002465cf:
            FUN_1001782e9(0,0);
            iVar2 = -0x27;
          }
          else {
            FUN_10017103d(param_3);
            uVar3 = local_488;
            uVar4 = FUN_100170f7f(param_3);
            iVar2 = FUN_10017d186(uVar3,uVar4,local_480,0,&local_490);
            if (CONCAT44(uStack_48c,local_490) != local_480) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "actualFileLength == fileLength";
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            if (iVar2 != -0x80) {
              if (iVar2 != 0) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  goto LAB_10024671a;
                }
                goto LAB_10024653c;
              }
              FUN_100170f7f(param_3);
              uVar3 = FUN_100170f7f(param_3);
              cVar1 = FUN_100246b56(uVar3,local_490,1);
              if (cVar1 == '\0') {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_4a = 
                  "VALID_PROC( (HEADER_TYPE *) JRCFDataGetMutableBytePtr(prefsData), static_cast<UInt32>( actualFileLength ), supportedMajorVersion )"
                  ;
                  goto LAB_100246756;
                }
                goto LAB_1002465cf;
              }
              goto LAB_100246545;
            }
          }
          goto LAB_1002465de;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_10024671a:
          local_4c = 0x400;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
LAB_10024653c:
        if (iVar2 != 0) goto LAB_1002465de;
LAB_100246545:
        piVar5 = (int *)FUN_100170f7f(param_3);
        iVar2 = 0;
        if (*piVar5 != 0x64707266) goto LAB_1002465de;
      }
      FUN_10017cdfb(local_488);
      goto LAB_1002464a5;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_46a = "JRFileSpecIsValid(iTunesFolderSpec)";
      goto LAB_100246588;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1002464a5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

