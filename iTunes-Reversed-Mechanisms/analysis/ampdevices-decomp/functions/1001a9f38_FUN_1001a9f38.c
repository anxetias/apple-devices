// name: FUN_1001a9f38
// address: 1001a9f38

long * FUN_1001a9f38(long *param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069ef8b(uVar2);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') {
      return param_1;
    }
  }
  if (*param_1 != 0) {
    FUN_1001a9af8(param_1);
    _CFDictionaryRemoveValue(*param_1,*param_2);
  }
  return param_1;
}

