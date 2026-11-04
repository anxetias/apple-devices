// name: FUN_1001d3230
// address: 1001d3230

undefined4 FUN_1001d3230(undefined8 param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = _sqlite3_mprintf("PRAGMA %s=%d");
  if (pcVar2 == (char *)0x0) {
    uVar1 = 0xffffff94;
  }
  else {
    uVar1 = FUN_1001d302b(param_1,pcVar2,0,0);
    _sqlite3_free(pcVar2);
  }
  return uVar1;
}

