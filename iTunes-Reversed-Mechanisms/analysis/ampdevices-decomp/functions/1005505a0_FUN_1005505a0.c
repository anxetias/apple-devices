// name: FUN_1005505a0
// address: 1005505a0

int FUN_1005505a0(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                 undefined4 param_5,undefined8 param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "descriptor != nullptr && descriptor[0] != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1005509ed;
  }
  iVar2 = FUN_10054d4e4();
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      local_78 = param_1 + 0x710;
      iVar2 = FUN_1005d872c(local_78,0,0,&local_60);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        local_70 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(local_70,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,local_70,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      if (local_60 != 0) {
        iVar2 = FUN_10015cd83(local_78,&local_68);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            iVar2 = FUN_1001c8e4e(local_60,&local_64);
            if (iVar2 != -0x80) {
              if (iVar2 == 0) {
                iVar2 = FUN_1001c97e8(local_60,0x2d2d2d2d,"com.apple.iTunes",0x10,param_4 + 1,
                                      *param_4,&local_80);
                if (iVar2 != -0x80) {
                  if (iVar2 == 0) {
                    if (local_80 == 0) {
                      iVar2 = 0;
                    }
                    else {
                      iVar2 = FUN_1001caeb4(local_80,1);
                      if (iVar2 != -0x80) {
                        if (iVar2 == 0) {
                          iVar2 = FUN_1001cbf54(local_60,local_64,1);
                          if (iVar2 != -0x80) {
                            if (iVar2 == 0) {
                              iVar2 = FUN_10054db1c(param_1,local_68,param_5,param_6);
                            }
                            else {
                              uVar3 = FUN_1001cc310();
                              cVar1 = _os_log_type_enabled(uVar3,0x10);
                              if (cVar1 != '\0') {
                                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                                goto LAB_10055090a;
                              }
                            }
                          }
                        }
                        else {
                          uVar3 = FUN_1001cc310();
                          cVar1 = _os_log_type_enabled(uVar3,0x10);
                          if (cVar1 != '\0') {
                            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                            goto LAB_10055090a;
                          }
                        }
                      }
                    }
                  }
                  else {
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      goto LAB_10055090a;
                    }
                  }
                }
              }
              else {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  goto LAB_10055090a;
                }
              }
            }
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_10055090a:
              local_4c = 0x400;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
        }
        if (local_60 != 0) {
          FUN_1001c8d4b(local_60,0);
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  FUN_10054d72e(param_1);
LAB_1005509ed:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

