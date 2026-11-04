// name: FUN_10046bbe8
// address: 10046bbe8

int FUN_10046bbe8(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x70) != '\x01') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mState == ServiceState::eSetupMinimal";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = 0x234f;
    goto LAB_10046c0b4;
  }
  iVar2 = FUN_100279c64(0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      FUN_1001c35d1();
      iVar2 = FUN_1001bfd1c();
      if (iVar2 == -0x80) goto LAB_10046c081;
      if (iVar2 == 0) {
        iVar2 = FUN_1001ee892();
        if (iVar2 == -0x80) goto LAB_10046c081;
        if (iVar2 == 0) {
          iVar2 = FUN_10019cb0d();
          if (iVar2 == -0x80) goto LAB_10046c081;
          if (iVar2 == 0) {
            iVar2 = FUN_1001a2472();
            if (iVar2 == -0x80) goto LAB_10046c081;
            if (iVar2 == 0) {
              iVar2 = FUN_1005311d6();
              if (iVar2 == -0x80) goto LAB_10046c081;
              if (iVar2 == 0) {
                uVar3 = _CFBundleGetBundleWithIdentifier(&cf_com_apple_amp_devices);
                iVar2 = FUN_1001c2ee4(uVar3);
                if ((iVar2 != -0x80) && (iVar2 != 0)) {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                    goto LAB_10046bf86;
                  }
                }
              }
              else {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_10046bf86:
                  local_3c = 0x400;
                  local_44 = "Assertion failure";
                  local_48 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,
                                      0x12);
                }
              }
            }
            else {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                goto LAB_10046bf86;
              }
            }
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
              goto LAB_10046bf86;
            }
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            goto LAB_10046bf86;
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          goto LAB_10046bf86;
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
        goto LAB_10046bf86;
      }
    }
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        DAT_1008c76a0 = FUN_1003b783d();
        if (DAT_1008c76a0 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          iVar2 = -0x6c;
          if (cVar1 != '\0') {
            local_3a = "gAppContext != nullptr";
            goto LAB_10046c272;
          }
          goto LAB_10046c078;
        }
        FUN_1001c1811(1);
        *(undefined4 *)(DAT_1008c76a0 + 0x10) = 0x1568000;
        iVar2 = FUN_10041520b();
        if (iVar2 != -0x80) {
          if (iVar2 != 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
              goto LAB_10046c1ed;
            }
            goto LAB_10046c04b;
          }
          cVar1 = FUN_1002075f9();
          if (cVar1 == '\0') {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            iVar2 = -0x1b;
            if (cVar1 != '\0') {
              local_3a = "ValidateIPodPublicKeys()";
LAB_10046c272:
              local_3c = 0x822;
              local_44 = "Assertion failure";
              local_48 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
          }
          else {
            cVar1 = FUN_1002e10e7();
            if (cVar1 != '\0') {
              DAT_1008c5488 = DAT_1008c76a0;
              *(undefined1 *)(param_1 + 0x70) = 2;
              FUN_1004d82aa(param_1,2);
              goto LAB_10046c050;
            }
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            iVar2 = -0x1b;
            if (cVar1 != '\0') {
              local_3a = "ValidateIPodSoftwareUpdateKeys()";
              goto LAB_10046c272;
            }
          }
LAB_10046c078:
          FUN_1001782e9(0,0);
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_10046c1ed:
          local_3c = 0x400;
          local_44 = "Assertion failure";
          local_48 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
LAB_10046c04b:
        if (iVar2 == 0) {
LAB_10046c050:
          iVar2 = 0;
          goto LAB_10046c0b4;
        }
      }
    }
  }
LAB_10046c081:
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "false";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
  *(undefined1 *)(param_1 + 0x70) = 8;
  FUN_1004d82aa(param_1,8);
LAB_10046c0b4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

