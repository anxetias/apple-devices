// name: FUN_10016826a
// address: 10016826a

undefined8 FUN_10016826a(long param_1,long param_2,long param_3,char param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006756e0(uVar3);
    }
  }
  else {
    if (param_2 != 0) {
      if (param_3 == 0) {
        return 0;
      }
      if ((param_4 == '\0') && (lVar2 = _CFStringGetLength(param_3), lVar2 == 0)) {
        return 0;
      }
      uVar3 = FUN_100171502(param_1,param_2,param_3);
      return uVar3;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067566a(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

