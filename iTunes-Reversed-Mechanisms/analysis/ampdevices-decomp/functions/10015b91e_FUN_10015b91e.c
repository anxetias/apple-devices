// name: FUN_10015b91e
// address: 10015b91e

undefined1 FUN_10015b91e(undefined8 param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_10015b3fc();
  if (((cVar1 != '\0') && (uVar2 = FUN_1001c5d9c(param_1), 10 < param_2 - 1U)) &&
     ((ulong)(long)param_2 <= (ulong)uVar2 - 0x14)) {
    return 1;
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    FUN_10066bf5d(uVar3);
  }
  FUN_1001782e9(0,0);
  return 0;
}

