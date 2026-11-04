// name: FUN_1002f1c1d
// address: 1002f1c1d

int FUN_1002f1c1d(void *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char local_298;
  char local_297;
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  char *local_23a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_23a = "JRFileSpecIsValid(bookArchiveSpec)";
LAB_1002f1dfc:
      local_23c = 0x822;
      local_244 = "Assertion failure";
      local_248 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_248,0x16);
    }
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      FUN_1001c62d9(param_2,0x438);
      iVar2 = FUN_10017d477(param_1,&local_298,&local_248);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          if (local_297 == '\0') {
            iVar2 = FUN_1001e21dd(&local_248);
            if ((iVar2 == 0x45505542) || (iVar2 == 0x49424f4f)) {
              *param_2 = 0x42494f43;
              _memcpy(param_2 + 2,param_1,0x420);
              *(char *)(param_2 + 0x10a) = local_298;
              if (local_298 == '\0') {
                iVar2 = FUN_1001f7388(param_1,1,param_2 + 0x10c);
                if ((iVar2 != -0x80) && (iVar2 != 0)) {
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                    goto LAB_1002f1ecc;
                  }
                }
                goto LAB_1002f1d59;
              }
              goto LAB_1002f1dd0;
            }
          }
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "IsBookFileInfo(&fileInfo, fileName)";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0xd0;
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_1002f1ecc:
            local_3c = 0x400;
            local_44 = "Assertion failure";
            local_48 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
LAB_1002f1d59:
          if (iVar2 == 0) {
LAB_1002f1dd0:
            iVar2 = 0;
            goto LAB_1002f1d66;
          }
        }
      }
      FUN_1002f315b(param_2);
      goto LAB_1002f1d66;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_23a = "context != nullptr";
      goto LAB_1002f1dfc;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1002f1d66:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

