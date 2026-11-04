// name: FUN_1001d3605
// address: 1001d3605

int FUN_1001d3605(sqlite3 *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = -6;
  do {
    uVar1 = _sqlite3_exec(param_1,"COMMIT TRANSACTION",(callback *)0x0,(void *)0x0,(char **)0x0);
    if (uVar1 != 5) {
      if ((uVar1 - 100 < 2) || (uVar1 == 0)) {
        return 0;
      }
      if (uVar1 == 4) {
        return -0x80;
      }
      break;
    }
    _sqlite3_sleep(1);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0);
  return (uVar1 & 0xff) + 13000;
}

