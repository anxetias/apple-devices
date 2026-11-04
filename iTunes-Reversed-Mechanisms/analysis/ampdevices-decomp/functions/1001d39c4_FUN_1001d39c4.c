// name: FUN_1001d39c4
// address: 1001d39c4

undefined1
FUN_1001d39c4(sqlite3 *param_1,undefined8 param_2,char *param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  sqlite3_stmt *local_30;
  
  local_30 = (sqlite3_stmt *)0x0;
  pcVar3 = "ROWID";
  if (param_3 != (char *)0x0) {
    pcVar3 = param_3;
  }
  uVar6 = 0;
  pcVar3 = _sqlite3_mprintf("SELECT %s FROM %s WHERE %s=%lld",param_5,param_2,pcVar3);
  sVar4 = _strlen(pcVar3);
  iVar2 = _sqlite3_prepare_v2(param_1,pcVar3,(int)sVar4,&local_30,(char **)0x0);
  if ((iVar2 - 100U < 2) || (iVar2 == 0)) {
    iVar2 = _sqlite3_step(local_30);
    uVar6 = 0;
    if (iVar2 < 100) {
      if ((iVar2 == 0) || (iVar2 == 4)) goto LAB_1001d3ab8;
    }
    else {
      if (iVar2 == 100) {
        uVar6 = 1;
        goto LAB_1001d3ab8;
      }
      if (iVar2 == 0x65) goto LAB_1001d3ab8;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006b3267(iVar2,uVar5);
    }
  }
  else {
    if (iVar2 == 4) goto LAB_1001d3ab8;
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006b32dc(iVar2,uVar5);
    }
  }
  uVar6 = 0;
LAB_1001d3ab8:
  _sqlite3_finalize(local_30);
  _sqlite3_free(pcVar3);
  return uVar6;
}

