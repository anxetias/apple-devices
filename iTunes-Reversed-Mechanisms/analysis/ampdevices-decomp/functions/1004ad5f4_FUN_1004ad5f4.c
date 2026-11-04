// name: FUN_1004ad5f4
// address: 1004ad5f4

int FUN_1004ad5f4(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_c88;
  char *local_c84;
  undefined2 local_c7c;
  int local_c7a;
  undefined4 local_c68;
  char *local_c64;
  undefined2 local_c5c;
  int local_c5a;
  undefined2 local_848 [256];
  undefined1 local_648 [512];
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1004aa626();
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = 0x1f49;
  }
  else if (((*(int *)(param_1 + 0x140) == 0x66696c65) && (*(int *)(param_1 + 0x1304) != 0x636f7079))
          && (*(int *)(param_1 + 0x7d8) < 0)) {
    iVar2 = 0;
    if (*(char *)(param_1 + 0x1250) == '\0') {
      local_848[0] = 0;
      iVar2 = FUN_1004b013c(param_1,1,&local_448);
      if (iVar2 != -0x80) {
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_c68 = 0x8220202;
            local_c64 = "Assertion failure";
            local_c5c = 0x400;
            local_c5a = iVar2;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_c68,0x12);
          }
          if (iVar2 != 0) goto LAB_1004ad6a6;
        }
        FUN_1001e04f5("download",local_648);
        if ((*(byte *)(param_1 + 0x7dc) & 1) != 0) {
          if (*(short *)(param_1 + 0xe08) == 0) {
            iVar2 = FUN_1004ad321(param_1,0xff,local_848);
            if (iVar2 == -0x80) goto LAB_1004ad6a6;
            if (iVar2 != 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_c68 = 0x8220202;
                local_c64 = "Assertion failure";
                local_c5c = 0x400;
                local_c5a = iVar2;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_c68,0x12
                                   );
              }
              if (iVar2 != 0) goto LAB_1004ad6a6;
            }
          }
          else {
            FUN_1001e1c39(param_1 + 0xe08,local_848);
          }
        }
        iVar2 = FUN_10053600d(&local_448,local_648,local_848);
        if (iVar2 != -0x80) {
          if (iVar2 != 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_c68 = 0x8220202;
              local_c64 = "Assertion failure";
              local_c5c = 0x400;
              local_c5a = iVar2;
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_c68,0x12);
            }
            if (iVar2 != 0) goto LAB_1004ad6a6;
          }
          iVar2 = FUN_100181359(&local_448,local_648,0,0,&local_c68);
          if (iVar2 != -0x80) {
            if (iVar2 != 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_c88 = 0x8220202;
                local_c84 = "Assertion failure";
                local_c7c = 0x400;
                local_c7a = iVar2;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_c88,0x12
                                   );
              }
              if (iVar2 != 0) goto LAB_1004ad6a6;
            }
            FUN_1004a9316(param_1,&local_c68);
            iVar2 = 0;
          }
        }
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = "DownloadItem_HandlingResumable(inItem)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
LAB_1004ad6a6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

