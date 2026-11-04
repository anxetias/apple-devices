// name: FUN_100468d6a
// address: 100468d6a

int FUN_100468d6a(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  sqlite3 *db;
  char cVar1;
  int iVar2;
  char *zSql;
  undefined8 uVar3;
  int *piVar4;
  sqlite3_stmt *local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = (sqlite3_stmt *)0x0;
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    zSql = _sqlite3_mprintf("UPDATE %s SET %s=? WHERE %s=?",param_4,param_6,param_5);
    if (zSql == (char *)0x0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "command != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x6c;
    }
    else {
      db = *(sqlite3 **)(*param_1 + 0x68);
      iVar2 = FUN_1001dfc51(zSql);
      iVar2 = _sqlite3_prepare_v2(db,zSql,iVar2,&local_50,(char **)0x0);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          piVar4 = (int *)(param_2 + 8);
          do {
            iVar2 = _sqlite3_bind_int(local_50,1,*piVar4);
            if (iVar2 != 0) {
              if (iVar2 == -0x80) goto LAB_100468eb8;
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 == '\0') goto LAB_100468eb8;
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
              goto LAB_100469097;
            }
            iVar2 = _sqlite3_bind_int64(local_50,2,*(sqlite3_int64 *)(piVar4 + -2));
            if (iVar2 != 0) {
              if (iVar2 == -0x80) goto LAB_100468eb8;
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 == '\0') goto LAB_100468eb8;
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
              goto LAB_100469097;
            }
            iVar2 = FUN_100626d82(local_50,0);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_48 = 0x8220202;
                  local_44 = "Assertion failure";
                  local_3c = 0x400;
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,
                                      0x12);
                }
              }
              goto LAB_100468ec3;
            }
            _sqlite3_reset(local_50);
            _sqlite3_clear_bindings(local_50);
            piVar4 = piVar4 + 4;
            param_3 = param_3 + -1;
          } while (param_3 != 0);
          iVar2 = 0;
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_100469097:
            local_3c = 0x400;
            local_44 = "Assertion failure";
            local_48 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
LAB_100468eb8:
      iVar2 = FUN_1001d2d10(iVar2);
LAB_100468ec3:
      _sqlite3_finalize(local_50);
      _sqlite3_free(zSql);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

