// name: FUN_1001d308b
// address: 1001d308b

int FUN_1001d308b(sqlite3 *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (sqlite3 *)0x0) {
    uVar1 = _sqlite3_close(param_1);
    iVar2 = 0;
    if ((1 < uVar1 - 100) && (uVar1 != 0)) {
      if (uVar1 == 4) {
        iVar2 = -0x80;
      }
      else {
        iVar2 = (uVar1 & 0xff) + 13000;
      }
    }
  }
  return iVar2;
}

