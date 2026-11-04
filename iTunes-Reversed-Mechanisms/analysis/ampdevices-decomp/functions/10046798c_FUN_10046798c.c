// name: FUN_10046798c
// address: 10046798c

int FUN_10046798c(long *param_1,long param_2,long param_3)

{
  sqlite3 *db;
  char cVar1;
  int iVar2;
  char *zSql;
  undefined8 uVar3;
  int *piVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  sqlite3_stmt *local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = (sqlite3_stmt *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_100626f3e(*param_1,2,&local_78);
    zSql = _sqlite3_mprintf("UPDATE %s SET title_order=?,artist_order=?,album_order=?,genre_order=?,composer_order=?,album_artist_order=?,series_name_order=? WHERE %s=?"
                            ,local_78,uStack_70);
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
          piVar4 = (int *)(param_2 + 0x20);
          while( true ) {
            iVar2 = _sqlite3_bind_int(local_50,1,piVar4[-6]);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                  goto LAB_100467faa;
                }
              }
              goto LAB_100467b9d;
            }
            iVar2 = _sqlite3_bind_int(local_50,2,piVar4[-5]);
            if (iVar2 != 0) break;
            iVar2 = _sqlite3_bind_int(local_50,3,piVar4[-4]);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                  goto LAB_100467faa;
                }
              }
              goto LAB_100467b9d;
            }
            iVar2 = _sqlite3_bind_int(local_50,4,piVar4[-3]);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                  goto LAB_100467faa;
                }
              }
              goto LAB_100467b9d;
            }
            iVar2 = _sqlite3_bind_int(local_50,5,piVar4[-2]);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                  goto LAB_100467faa;
                }
              }
              goto LAB_100467b9d;
            }
            iVar2 = _sqlite3_bind_int(local_50,6,piVar4[-1]);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                  goto LAB_100467faa;
                }
              }
              goto LAB_100467b9d;
            }
            iVar2 = _sqlite3_bind_int(local_50,7,*piVar4);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                  goto LAB_100467faa;
                }
              }
              goto LAB_100467b9d;
            }
            iVar2 = _sqlite3_bind_int64(local_50,8,*(sqlite3_int64 *)(piVar4 + -8));
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                  goto LAB_100467faa;
                }
              }
              goto LAB_100467b9d;
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
              goto LAB_100467ba8;
            }
            _sqlite3_reset(local_50);
            _sqlite3_clear_bindings(local_50);
            piVar4 = piVar4 + 10;
            iVar2 = 0;
            param_3 = param_3 + -1;
            if (param_3 == 0) goto LAB_100467b9d;
          }
          if (iVar2 != -0x80) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
              goto LAB_100467faa;
            }
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_100467faa:
            local_3c = 0x400;
            local_44 = "Assertion failure";
            local_48 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
LAB_100467b9d:
      iVar2 = FUN_1001d2d10(iVar2);
LAB_100467ba8:
      _sqlite3_finalize(local_50);
      _sqlite3_free(zSql);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

