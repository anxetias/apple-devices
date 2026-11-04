// name: FUN_1001aaf78
// address: 1001aaf78

void FUN_1001aaf78(long *param_1,long param_2,char param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  if (param_2 != 0) {
    lVar1 = _CFGetTypeID(param_2);
    lVar2 = _CFStringGetTypeID();
    if (lVar1 != lVar2) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        FUN_10069f079(uVar4);
      }
      FUN_1001782e9(0,0);
    }
    if (param_3 != '\0') {
      _CFRetain(*param_1);
    }
  }
  return;
}

