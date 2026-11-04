// name: FUN_1001d342c
// address: 1001d342c

int FUN_1001d342c(sqlite3 *param_1,undefined8 param_2,char *param_3,undefined1 *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *zSql;
  size_t sVar4;
  char *pcVar5;
  undefined8 uVar6;
  int N;
  sqlite3_stmt *local_38;
  
  local_38 = (sqlite3_stmt *)0x0;
  *param_4 = 0;
  zSql = _sqlite3_mprintf("SELECT * FROM %s LIMIT 1");
  if (zSql == (char *)0x0) {
    iVar3 = -0x6c;
    goto LAB_1001d34f4;
  }
  sVar4 = _strlen(zSql);
  N = 0;
  uVar2 = _sqlite3_prepare_v2(param_1,zSql,(int)sVar4,&local_38,(char **)0x0);
  if (1 < uVar2 - 100) {
    if (uVar2 == 4) {
      iVar3 = -0x80;
      goto LAB_1001d34f4;
    }
    if (uVar2 != 0) {
      iVar3 = (uVar2 & 0xff) + 13000;
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        FUN_1006b3041(iVar3,uVar6);
      }
      goto LAB_1001d34f4;
    }
  }
  do {
    pcVar5 = _sqlite3_column_name(local_38,N);
    iVar3 = 0;
    if (pcVar5 == (char *)0x0) goto LAB_1001d34f4;
    N = N + 1;
    iVar3 = _strcmp(pcVar5,param_3);
  } while (iVar3 != 0);
  *param_4 = 1;
  iVar3 = 0;
LAB_1001d34f4:
  _sqlite3_free(zSql);
  if (local_38 != (sqlite3_stmt *)0x0) {
    _sqlite3_finalize(local_38);
  }
  return iVar3;
}

