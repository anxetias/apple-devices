// name: FUN_1004681ec
// address: 1004681ec

int FUN_1004681ec(long *param_1,long param_2,long param_3)

{
  long lVar1;
  sqlite3 *db;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *zSql;
  undefined8 uVar7;
  sqlite3_int64 *psVar8;
  sqlite3_stmt *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = (sqlite3_stmt *)0x0;
  if (param_3 == 0) {
    iVar4 = 0;
    goto LAB_100468512;
  }
  lVar1 = *param_1;
  iVar4 = *(int *)(lVar1 + 0x1040);
  if (iVar4 == 0) {
    iVar4 = FUN_1001d357f(*(undefined8 *)(lVar1 + 0x68),1);
    if (iVar4 == 0) {
      iVar4 = *(int *)(lVar1 + 0x1040);
      goto LAB_10046822f;
    }
    bVar2 = false;
  }
  else {
LAB_10046822f:
    *(int *)(lVar1 + 0x1040) = iVar4 + 1;
    bVar2 = true;
  }
  zSql = _sqlite3_mprintf("UPDATE %s SET %s=? WHERE %s=?","item","composer_pid","pid");
  if (zSql == (char *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "command != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x6c;
  }
  else {
    db = *(sqlite3 **)(*param_1 + 0x68);
    iVar4 = FUN_1001dfc51(zSql);
    iVar5 = _sqlite3_prepare_v2(db,zSql,iVar4,&local_60,(char **)0x0);
    if (iVar5 != -0x80) {
      if (iVar5 == 0) {
        psVar8 = (sqlite3_int64 *)(param_2 + 8);
        do {
          iVar5 = _sqlite3_bind_int64(local_60,1,*psVar8);
          iVar6 = 0;
          iVar4 = 0;
          if (iVar5 != 0) {
            if (iVar5 != -0x80) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_10046864c:
                local_4c = 0x400;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
                iVar4 = iVar6;
              }
            }
            goto LAB_1004684bb;
          }
          iVar5 = _sqlite3_bind_int64(local_60,2,psVar8[-1]);
          if (iVar5 != 0) {
            if (iVar5 != -0x80) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                goto LAB_10046864c;
              }
            }
            goto LAB_1004684bb;
          }
          iVar6 = FUN_100626d82(local_60,0);
          if (iVar6 != 0) {
            iVar5 = 0;
            iVar4 = iVar6;
            if (iVar6 != -0x80) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              iVar5 = 0;
              if (cVar3 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                iVar5 = 0;
                goto LAB_10046864c;
              }
            }
            goto LAB_1004684bb;
          }
          _sqlite3_reset(local_60);
          _sqlite3_clear_bindings(local_60);
          psVar8 = psVar8 + 2;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        iVar5 = 0;
        iVar4 = 0;
LAB_1004684bb:
        _sqlite3_finalize(local_60);
        local_60 = (sqlite3_stmt *)0x0;
        if (iVar5 == 0 && iVar4 == 0) {
          iVar5 = 0;
          iVar4 = FUN_1001d302b(*(undefined8 *)(*param_1 + 0x68),
                                "INSERT INTO composer SELECT composer_pid,composer,composer_order,sort_composer FROM item WHERE composer_pid != 0 GROUP BY composer_pid ORDER BY composer_order"
                                ,0,0);
          if ((iVar4 != -0x80) && (iVar4 != 0)) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            goto LAB_1004684e4;
          }
        }
        if (iVar4 != 0) goto LAB_1004684e4;
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    iVar4 = FUN_1001d2d10(iVar5);
  }
LAB_1004684e4:
  if (bVar2) {
    FUN_100628b72(*param_1,iVar4);
  }
  if (local_60 != (sqlite3_stmt *)0x0) {
    _sqlite3_finalize(local_60);
  }
  _sqlite3_free(zSql);
LAB_100468512:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

