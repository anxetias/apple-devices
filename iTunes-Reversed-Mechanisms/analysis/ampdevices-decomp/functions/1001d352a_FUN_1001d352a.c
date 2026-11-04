// name: FUN_1001d352a
// address: 1001d352a

undefined4 FUN_1001d352a(undefined8 param_1,undefined8 param_2,char *param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (param_3 == (char *)0x0) {
    param_3 = "ROWID";
  }
  pcVar2 = _sqlite3_mprintf("DELETE FROM %s WHERE %s=%lld",param_2,param_3);
  if (pcVar2 == (char *)0x0) {
    uVar1 = 0xffffff94;
  }
  else {
    uVar1 = FUN_1001d302b(param_1,pcVar2,0,0);
    _sqlite3_free(pcVar2);
  }
  return uVar1;
}

