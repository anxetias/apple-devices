// name: FUN_100627a6a
// address: 100627a6a

int FUN_100627a6a(long param_1)

{
  sqlite3 *db;
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  sqlite3_stmt *local_68;
  char local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = (sqlite3_stmt *)0x0;
  db = *(sqlite3 **)(param_1 + 0x68);
  iVar2 = FUN_1001dfc51(
                       "select major,minor,compatibility,update_level,platform from version_info limit 1"
                       );
  iVar2 = _sqlite3_prepare_v2(db,
                              "select major,minor,compatibility,update_level,platform from version_info limit 1"
                              ,iVar2,&local_68,(char **)0x0);
  iVar2 = FUN_1001d2d10(iVar2);
  if (iVar2 == -0x80) goto LAB_100627c8e;
  if (iVar2 == 0) {
    iVar2 = FUN_100626d82(local_68);
    if (iVar2 == -0x80) goto LAB_100627c8e;
    if (iVar2 == 0) {
      if (local_59 == '\0') {
        uVar8 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar8,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "row == true";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0xce;
      }
      else {
        iVar2 = 0;
        uVar3 = _sqlite3_column_int(local_68,0);
        iVar4 = _sqlite3_column_int(local_68,1);
        iVar5 = _sqlite3_column_int(local_68,2);
        iVar6 = _sqlite3_column_int(local_68,3);
        iVar7 = _sqlite3_column_int(local_68,4);
        if ((uint)*(byte *)(param_1 + 0x5c) < (uVar3 & 0xff) && *(byte *)(param_1 + 0x5c) != 0) {
          uVar8 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar8,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "majorVersion <= mMajorVersion or mMajorVersion == 0";
            __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = 0x1b5c;
        }
        else {
          *(char *)(param_1 + 0x5c) = (char)uVar3;
          *(char *)(param_1 + 0x5d) = (char)iVar4;
          *(char *)(param_1 + 0x5e) = (char)iVar5;
          *(char *)(param_1 + 0x5f) = (char)iVar6;
          *(char *)(param_1 + 0x60) = (char)iVar7;
        }
      }
      goto LAB_100627c8e;
    }
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 == '\0') goto LAB_100627c8e;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
  }
  else {
    uVar8 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar8,0x10);
    if (cVar1 == '\0') goto LAB_100627c8e;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
  }
  local_4c = 0x400;
  local_54 = "Assertion failure";
  local_58 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
LAB_100627c8e:
  _sqlite3_finalize(local_68);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

