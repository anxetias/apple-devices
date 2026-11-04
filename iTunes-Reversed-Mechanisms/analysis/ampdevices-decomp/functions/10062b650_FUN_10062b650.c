// name: FUN_10062b650
// address: 10062b650

int FUN_10062b650(long param_1,undefined8 param_2,undefined8 param_3,char *param_4,long param_5)

{
  sqlite3 *db;
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *zSql;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  sqlite3_stmt *local_70;
  char *local_68;
  int *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = (sqlite3_stmt *)0x0;
  if ((long)*(int *)(param_5 + 0x2c) == 0) {
    iVar3 = 0;
  }
  else {
    local_68 = param_4;
    piVar4 = (int *)FUN_1001c6429((long)*(int *)(param_5 + 0x2c) * 0x204);
    if (piVar4 == (int *)0x0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "entries != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar3 = -0x6c;
    }
    else {
      FUN_1001dccc7(param_5);
      iVar3 = 0;
      iVar2 = FUN_1001ddaa7(param_5,1,piVar4 + 1,0);
      if (iVar2 == 0) {
        uVar7 = 0;
        local_60 = piVar4;
        do {
          uVar6 = uVar7 + 1;
          *piVar4 = (int)uVar6;
          iVar3 = FUN_1001ddaa7(param_5,(int)uVar7 + 2,piVar4 + 0x82,0);
          piVar4 = piVar4 + 0x81;
          uVar7 = uVar6;
        } while (iVar3 == 0);
        FUN_1001dcd18(param_5);
        if (1 < uVar6) {
          FUN_1001d290b(local_60,uVar6 & 0xffffffff,0x204,FUN_10062bb8c);
        }
        zSql = _sqlite3_mprintf("UPDATE %s SET %s=? WHERE %s=?",param_2,param_3,local_68);
        if (zSql == (char *)0x0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          piVar4 = local_60;
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "command != nullptr";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar3 = -0x6c;
          zSql = (char *)0x0;
        }
        else {
          db = *(sqlite3 **)(param_1 + 0x68);
          iVar3 = FUN_1001dfc51(zSql);
          iVar3 = _sqlite3_prepare_v2(db,zSql,iVar3,&local_70,(char **)0x0);
          iVar3 = FUN_1001d2d10(iVar3);
          piVar4 = local_60;
          if (iVar3 != -0x80) {
            if (iVar3 == 0) {
              uVar7 = 0;
              piVar8 = local_60;
              local_68 = zSql;
              do {
                uVar7 = uVar7 + 1;
                iVar3 = _sqlite3_bind_int(local_70,1,(int)uVar7);
                iVar3 = FUN_1001d2d10(iVar3);
                zSql = local_68;
                if (iVar3 != 0) {
                  piVar4 = local_60;
                  if (iVar3 != -0x80) {
                    uVar5 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar5,0x10);
                    piVar4 = local_60;
                    if (cVar1 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
LAB_10062bada:
                      piVar4 = local_60;
                      local_4c = 0x400;
                      local_54 = "Assertion failure";
                      local_58 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                  break;
                }
                iVar3 = _sqlite3_bind_int(local_70,2,*piVar8);
                iVar3 = FUN_1001d2d10(iVar3);
                if (iVar3 != 0) {
                  piVar4 = local_60;
                  zSql = local_68;
                  if (iVar3 != -0x80) {
                    uVar5 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar5,0x10);
                    piVar4 = local_60;
                    zSql = local_68;
                    if (cVar1 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                      goto LAB_10062bada;
                    }
                  }
                  break;
                }
                iVar3 = FUN_100626d82(local_70,0);
                if (iVar3 != 0) {
                  piVar4 = local_60;
                  zSql = local_68;
                  if (iVar3 != -0x80) {
                    uVar5 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar5,0x10);
                    piVar4 = local_60;
                    zSql = local_68;
                    if (cVar1 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                      goto LAB_10062bada;
                    }
                  }
                  break;
                }
                iVar3 = _sqlite3_reset(local_70);
                if (iVar3 != 0) {
                  uVar5 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "result == 0";
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                piVar8 = piVar8 + 0x81;
                iVar3 = 0;
                piVar4 = local_60;
                zSql = local_68;
              } while (uVar6 != uVar7);
            }
            else {
              uVar5 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              piVar4 = local_60;
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
                piVar4 = local_60;
              }
            }
          }
        }
      }
      else {
        FUN_1001dcd18(param_5);
        zSql = (char *)0x0;
      }
      _sqlite3_free(zSql);
      _sqlite3_finalize(local_70);
      FUN_1001c64c1(piVar4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

