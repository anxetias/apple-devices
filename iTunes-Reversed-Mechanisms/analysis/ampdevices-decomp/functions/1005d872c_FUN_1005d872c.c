// name: FUN_1005d872c
// address: 1005d872c

int FUN_1005d872c(undefined8 *param_1,char param_2,undefined1 *param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  if (param_4 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "outMetaData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1005d88d8;
  }
  *param_4 = 0;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  iVar2 = FUN_10015d28d(*param_1,0x75647461,&local_68);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (local_68 == 0) goto LAB_1005d87ec;
      iVar2 = FUN_10015d28d(local_68,0x6d657461,&local_70);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          if (local_70 == 0) {
LAB_1005d87ec:
            if ((param_2 != '\x01') || (local_60 != 0)) {
LAB_1005d8866:
              *param_4 = local_60;
              iVar2 = 0;
              goto LAB_1005d88d8;
            }
            if (local_68 == 0) {
              iVar2 = FUN_10015d60b(0x75647461,0,0,&local_68,2);
              if (iVar2 != -0x80) {
                if (iVar2 == 0) {
                  iVar2 = FUN_10015d357(*param_1,local_68,0);
                  if (iVar2 != -0x80) {
                    if (iVar2 == 0) goto LAB_1005d8804;
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                  FUN_10015ccc4(local_68,0);
                }
                else {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                    goto LAB_1005d8a3d;
                  }
                }
              }
            }
            else {
LAB_1005d8804:
              iVar2 = FUN_1001c861c(&local_60);
              if (iVar2 != -0x80) {
                if (iVar2 == 0) {
                  iVar2 = FUN_1001c9118(local_60,0x800);
                  if (iVar2 != -0x80) {
                    if (iVar2 == 0) {
                      iVar2 = FUN_1001c8dc4(local_60,local_68);
                      if (iVar2 != -0x80) {
                        if (iVar2 == 0) {
                          if (param_3 != (undefined1 *)0x0) {
                            *param_3 = 1;
                          }
                          goto LAB_1005d8866;
                        }
                        uVar3 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar3,0x10);
                        if (cVar1 != '\0') {
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                          goto LAB_1005d8a3d;
                        }
                      }
                    }
                    else {
                      uVar3 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar3,0x10);
                      if (cVar1 != '\0') {
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                        goto LAB_1005d8a3d;
                      }
                    }
                  }
                }
                else {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_1005d8a3d:
                    local_4c = 0x400;
                    local_54 = "Assertion failure";
                    local_58 = 0x8220202;
                    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
              }
            }
          }
          else {
            iVar2 = FUN_1001c8842(local_70,&local_60);
            if (iVar2 != -0x80) {
              if (iVar2 == 0) goto LAB_1005d87ec;
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                goto LAB_1005d8a3d;
              }
            }
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            goto LAB_1005d8a3d;
          }
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        goto LAB_1005d8a3d;
      }
    }
  }
  if (local_60 != 0 && iVar2 != 0) {
    FUN_1001c8d4b(local_60,0);
  }
LAB_1005d88d8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

