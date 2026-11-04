// name: FUN_1001a9eca
// address: 1001a9eca

undefined8 * FUN_1001a9eca(undefined8 *param_1,long *param_2,long *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_1001a9af8();
  if (*param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10069ef15(uVar2);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') {
      return param_1;
    }
  }
  if (*param_3 != 0) {
    _CFDictionaryReplaceValue(*param_1,*param_2);
  }
  return param_1;
}

