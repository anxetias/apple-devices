// name: FUN_1005a7342
// address: 1005a7342

int FUN_1005a7342(long param_1,undefined1 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  cVar1 = FUN_1005a56c6();
  if (cVar1 == '\0') {
    iVar2 = 0x46d;
    goto LAB_1005a74d0;
  }
  iVar2 = 0;
  if ((*(uint *)(param_1 + 0x15b4) & *(uint *)(param_1 + 0x15b8) & 0x20) != 0) {
    cVar1 = FUN_10017cbd0(param_1 + 0x1150);
    if (cVar1 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "JRFileSpecIsValid(&mMsgsPlistDirFileSpec)";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
      goto LAB_1005a74d0;
    }
    cVar1 = FUN_1005a56fe(param_1);
    if (cVar1 == '\0') {
      cVar1 = FUN_1005a5736(param_1);
      if (cVar1 == '\0') {
        cVar1 = FUN_1005a7714(param_1);
        if (cVar1 == '\0') goto LAB_1005a74a8;
      }
    }
    iVar2 = FUN_1005a79d6(param_1,&local_50);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = FUN_1005a6584(param_1);
        if (iVar2 == 0) {
          uVar3 = FUN_100166c1b(local_50,&cf_Version);
          uVar3 = FUN_1001705fc(uVar3);
          FUN_10017060f(*(undefined8 *)(param_1 + 0x15e8));
          *(undefined8 *)(param_1 + 0x15e8) = uVar3;
          iVar2 = FUN_1005a50dc(param_1);
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              iVar2 = FUN_1005a68aa(param_1,local_50,param_2,param_3,0x766f6963);
              if (iVar2 != -0x80) {
                if (iVar2 == 0) {
                  iVar2 = FUN_1005a7b6c(param_1,0);
                  if ((iVar2 != -0x80) && (iVar2 != 0)) {
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 != '\0') {
                      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                      goto LAB_1005a76a8;
                    }
                  }
                }
                else {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                    goto LAB_1005a76a8;
                  }
                }
              }
            }
            else {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                goto LAB_1005a76a8;
              }
            }
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            goto LAB_1005a76a8;
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_1005a76a8:
          local_3c = 0x400;
          local_44 = "Assertion failure";
          local_48 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
  }
LAB_1005a74a8:
  FUN_1005a2d1e(param_1);
  FUN_10017060f(*(undefined8 *)(param_1 + 0x15e0));
  *(undefined8 *)(param_1 + 0x15e0) = 0;
  FUN_10017060f(local_50);
LAB_1005a74d0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

