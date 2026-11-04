// name: FUN_10058faf7
// address: 10058faf7

int FUN_10058faf7(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_98;
  char *local_94;
  undefined2 local_8c;
  char *local_8a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_98 = 0x8220202;
      local_94 = "Assertion failure";
      local_8c = 0x822;
      local_8a = "imageDBFolderSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_10017cbd0();
    if (cVar1 != '\0') {
      iVar2 = FUN_10017d477(param_1,&local_98,0);
      if ((iVar2 != -0x80) && (iVar2 != -0x2b)) {
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
          if (iVar2 != 0) goto LAB_10058fc35;
        }
        if ((char)local_98 == '\0') {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "folderInfo.isDirectory";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x57f;
        }
        else {
          cVar1 = FUN_10018e1ff(param_1);
          if (cVar1 == '\0') {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_100182d4d(param_1);
            if ((iVar2 != -0x80) && (iVar2 != 0)) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_48 = 0x8220202;
                local_44 = "Assertion failure";
                local_3c = 0x400;
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12)
                ;
              }
            }
          }
        }
      }
      goto LAB_10058fc35;
    }
  }
  iVar2 = -0x32;
LAB_10058fc35:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

