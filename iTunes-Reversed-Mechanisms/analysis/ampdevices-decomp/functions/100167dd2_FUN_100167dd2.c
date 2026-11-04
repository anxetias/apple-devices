// name: FUN_100167dd2
// address: 100167dd2

undefined1 FUN_100167dd2(long param_1,long param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 local_29;
  
  uVar4 = param_3;
  if (param_1 != 0) {
    local_29 = param_3;
    if (param_2 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006752ba(uVar2);
      }
      cVar1 = FUN_1001782e9(0,0);
      if (cVar1 == '\0') {
        return param_3;
      }
    }
    lVar3 = _CFDictionaryGetValue(param_1,param_2);
    if ((lVar3 != 0) && (cVar1 = FUN_100165191(lVar3,&local_29), uVar4 = local_29, cVar1 == '\0')) {
      uVar4 = param_3;
    }
  }
  return uVar4;
}

