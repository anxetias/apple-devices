// name: FUN_1001a8d82
// address: 1001a8d82

void FUN_1001a8d82(long *param_1,long param_2,char param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  if (param_2 != 0) {
    lVar1 = _CFGetTypeID(param_2);
    lVar2 = _CFDictionaryGetTypeID();
    if (lVar1 != lVar2) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        FUN_10069edb3(uVar4);
      }
      FUN_1001782e9(0,0);
    }
    if (param_3 != '\0') {
      _CFRetain(*param_1);
    }
  }
  return;
}

