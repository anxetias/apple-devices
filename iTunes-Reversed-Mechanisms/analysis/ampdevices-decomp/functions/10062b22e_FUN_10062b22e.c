// name: FUN_10062b22e
// address: 10062b22e

int FUN_10062b22e(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  sqlite3 *db;
  char cVar1;
  int iVar2;
  int iVar3;
  char *zSql;
  undefined8 uVar4;
  int iVar5;
  sqlite3_stmt *local_260;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  char *local_24a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_260 = (sqlite3_stmt *)0x0;
  zSql = _sqlite3_mprintf("INSERT OR REPLACE INTO %s (id,%s) VALUES (?,?)");
  if (zSql == (char *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_258 = 0x8220202;
      local_254 = "Assertion failure";
      local_24c = 0x822;
      local_24a = "command != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
  }
  else {
    db = *(sqlite3 **)(param_1 + 0x68);
    iVar2 = FUN_1001dfc51(zSql);
    iVar2 = _sqlite3_prepare_v2(db,zSql,iVar2,&local_260,(char **)0x0);
    iVar2 = FUN_1001d2d10(iVar2);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        FUN_1001dccc7(param_4);
        iVar5 = 1;
        iVar2 = 0;
        iVar3 = FUN_1001ddaa7(param_4,1,&local_258,0);
        if (iVar3 == 0) {
          do {
            iVar2 = _sqlite3_bind_int(local_260,1,iVar5);
            iVar2 = FUN_1001d2d10(iVar2);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_10062b5e8:
                  local_4c = 0x400;
                  local_54 = "Assertion failure";
                  local_58 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
              break;
            }
            iVar2 = _sqlite3_bind_text16
                              (local_260,2,(void *)((long)&local_258 + 2),(local_258 & 0xffff) * 2,
                               (void *)0x0);
            iVar2 = FUN_1001d2d10(iVar2);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  goto LAB_10062b5e8;
                }
              }
              break;
            }
            iVar2 = FUN_100626d82(local_260,0);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  goto LAB_10062b5e8;
                }
              }
              break;
            }
            iVar2 = _sqlite3_reset(local_260);
            if (iVar2 != 0) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "result == 0";
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            iVar5 = iVar5 + 1;
            iVar2 = 0;
            iVar3 = FUN_1001ddaa7(param_4,iVar5,&local_258,0);
          } while (iVar3 == 0);
        }
        FUN_1001dcd18(param_4);
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_258 = 0x8220202;
          local_254 = "Assertion failure";
          local_24c = 0x400;
          local_24a = (char *)CONCAT44(local_24a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_258,0x12);
        }
      }
    }
    _sqlite3_free(zSql);
    _sqlite3_finalize(local_260);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

