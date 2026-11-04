// name: FUN_10017113d
// address: 10017113d

void FUN_10017113d(long param_1,ulong param_2,ulong param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067a97a(uVar3);
    }
  }
  else {
    lVar2 = _CFDataGetLength();
    if ((param_3 == 0) || ((-1 < (long)(param_3 | param_2) && ((long)(param_3 + param_2) <= lVar2)))
       ) {
      _CFDataDeleteBytes(param_1,param_2,param_3);
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067a904(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

