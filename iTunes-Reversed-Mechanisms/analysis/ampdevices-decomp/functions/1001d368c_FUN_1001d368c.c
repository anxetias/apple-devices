// name: FUN_1001d368c
// address: 1001d368c

int FUN_1001d368c(sqlite3 *param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,long param_7,double *param_8)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *zSql;
  size_t sVar4;
  undefined8 uVar5;
  char *pcVar6;
  bool bVar7;
  bool bVar8;
  sqlite3_stmt *local_38;
  
  local_38 = (sqlite3_stmt *)0x0;
  pcVar6 = "ROWID";
  if (param_3 != (char *)0x0) {
    pcVar6 = param_3;
  }
  zSql = _sqlite3_mprintf("UPDATE %s SET %s=? WHERE %s=%lld",param_2,param_5,pcVar6);
  if (zSql != (char *)0x0) {
    bVar7 = param_7 != 0;
    bVar8 = param_8 != (double *)0x0;
    do {
      sVar4 = _strlen(zSql);
      uVar2 = _sqlite3_prepare_v2(param_1,zSql,(int)sVar4,&local_38,(char **)0x0);
      if ((1 < uVar2 - 100) && (uVar2 != 0)) {
        if (uVar2 == 4) {
LAB_1001d393f:
          iVar3 = -0x80;
        }
        else {
          iVar3 = (uVar2 & 0xff) + 13000;
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            FUN_1006b3185(iVar3,uVar5);
          }
        }
        goto LAB_1001d396b;
      }
      iVar3 = (int)param_7;
      switch(param_6) {
      case 1:
        if (bVar8 && bVar7) {
          uVar2 = (uint)*(byte *)param_8;
LAB_1001d37d1:
          uVar2 = _sqlite3_bind_int(local_38,1,uVar2);
        }
        break;
      case 2:
        if (bVar8 && bVar7) {
          uVar2 = *(uint *)param_8;
          goto LAB_1001d37d1;
        }
        break;
      case 3:
        if (bVar8 && bVar7) {
          uVar2 = _sqlite3_bind_int64(local_38,1,(sqlite3_int64)*param_8);
        }
        break;
      case 4:
        if (bVar8 && bVar7) {
          uVar2 = _sqlite3_bind_double(local_38,1,*param_8);
        }
        break;
      case 5:
        if (bVar8 && bVar7) {
          uVar2 = _sqlite3_bind_text(local_38,1,(char *)param_8,iVar3,(void *)0x0);
        }
        break;
      case 6:
        if (bVar8 && bVar7) {
          uVar2 = _sqlite3_bind_text16(local_38,1,param_8,iVar3,(void *)0x0);
        }
        break;
      case 7:
        if (bVar8 && bVar7) {
          uVar2 = _sqlite3_bind_blob(local_38,1,param_8,iVar3,(void *)0x0);
        }
      }
      if ((1 < uVar2 - 100) && (uVar2 != 0)) {
        if (uVar2 == 4) goto LAB_1001d393f;
        iVar3 = (uVar2 & 0xff) + 13000;
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006b3119(iVar3,uVar5);
        }
        goto LAB_1001d396b;
      }
      uVar2 = _sqlite3_step(local_38);
      if ((1 < uVar2 - 100) && (uVar2 != 0)) {
        if (uVar2 == 4) goto LAB_1001d393f;
        iVar3 = (uVar2 & 0xff) + 13000;
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          FUN_1006b30ad(iVar3,uVar5);
        }
        goto LAB_1001d396b;
      }
      iVar3 = _sqlite3_changes(param_1);
      if (iVar3 == 1) {
        iVar3 = 0;
        goto LAB_1001d396b;
      }
      _sqlite3_free(zSql);
      _sqlite3_finalize(local_38);
      local_38 = (sqlite3_stmt *)0x0;
      zSql = _sqlite3_mprintf("INSERT INTO %s (%s,%s) VALUES (%lld,?)",param_2,pcVar6,param_5);
    } while (zSql != (char *)0x0);
  }
  uVar5 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar5,0x10);
  if (cVar1 != '\0') {
    FUN_1006b31f1(uVar5);
  }
  zSql = (char *)0x0;
  FUN_1001782e9(0,0);
  iVar3 = -0x6c;
LAB_1001d396b:
  _sqlite3_finalize(local_38);
  _sqlite3_free(zSql);
  return iVar3;
}

