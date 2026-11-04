// name: FUN_10058e6cd
// address: 10058e6cd

int FUN_10058e6cd(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                 long *param_6,undefined2 *param_7)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "imageDBFolderSpec != nullptr";
LAB_10058e85d:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (param_5 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "outImageDBFileSpec != nullptr";
      goto LAB_10058e85d;
    }
  }
  else {
    if (param_6 != (long *)0x0) {
      *param_6 = 0;
      if (param_7 != (undefined2 *)0x0) {
        *param_7 = 0;
      }
      lVar3 = FUN_100495500(param_1);
      if (lVar3 == 0) {
LAB_10058e9d0:
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "imageLibrary != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
        goto LAB_10058e891;
      }
      iVar2 = FUN_10017ecc9(param_2,param_3,param_5,0);
      if (iVar2 == -0x2b) {
        if ((param_4 & 2) != 0) {
          iVar2 = FUN_10038b674(lVar3,param_2,param_3,0,param_5);
          if (iVar2 == -0x80) goto LAB_10058eaaf;
          if (iVar2 != 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 == '\0') goto LAB_10058eaa6;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_10058eb39:
            local_4c = 0x400;
            local_54 = "Assertion failure";
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            goto LAB_10058eaa6;
          }
          FUN_100496f8c(lVar3,0);
        }
      }
      else if (iVar2 == 0) {
        if ((param_4 & 1) == 0) {
          iVar2 = FUN_10038a96f(lVar3,param_5,(uint)(param_4 >> 1) & 2,0,param_7);
        }
        else {
          iVar2 = FUN_10038f413(param_5,lVar3 + 0x1448,lVar3 + 0x1450);
        }
        if (iVar2 < -0x27) {
          if (iVar2 == -0xd0) {
LAB_10058e929:
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar4 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            if (cVar1 != '\0') {
              local_58 = local_58 & 0xffff0000;
              __os_log_impl(0x100000000,uVar4,0x10,
                            "LoadDesktopITImageLibrary: image DB is corrupted",&local_58,2);
            }
            iVar2 = FUN_100182d59(param_2,3);
            if ((iVar2 != -0x80) && (iVar2 != 0)) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            FUN_100495a1c(lVar3);
            lVar3 = FUN_100495500(param_1);
            if (lVar3 == 0) goto LAB_10058e9d0;
            goto LAB_10058e8c9;
          }
          if (iVar2 != -0x80) {
LAB_10058ea3c:
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
              goto LAB_10058eb39;
            }
          }
        }
        else if (iVar2 != 0) {
          if (iVar2 != -0x27) goto LAB_10058ea3c;
          goto LAB_10058e929;
        }
LAB_10058eaa6:
        if (iVar2 != 0) {
LAB_10058eaaf:
          FUN_100495a1c(lVar3);
          goto LAB_10058e891;
        }
      }
LAB_10058e8c9:
      *param_6 = lVar3;
      iVar2 = 0;
      goto LAB_10058e891;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "outImageLibrary != nullptr";
      goto LAB_10058e85d;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10058e891:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

