// name: FUN_1001d3278
// address: 1001d3278

int FUN_1001d3278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  char *pcVar2;
  
  *param_4 = 0;
  pcVar2 = _sqlite3_mprintf("select name from sqlite_master where type=\'%s\' and name=\'%s\'");
  if (pcVar2 == (char *)0x0) {
    iVar1 = -0x6c;
  }
  else {
    iVar1 = FUN_1001d302b(param_1,pcVar2,FUN_1001d32e4,param_4);
    _sqlite3_free(pcVar2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *param_4 = 0;
  return iVar1;
}

