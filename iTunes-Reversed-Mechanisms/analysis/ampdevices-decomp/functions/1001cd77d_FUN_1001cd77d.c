// name: FUN_1001cd77d
// address: 1001cd77d

undefined1 FUN_1001cd77d(undefined8 param_1,undefined1 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  
  if ((param_3 == 0) && (param_3 = DAT_1008a2330, DAT_1008a2330 == 0)) {
    param_3 = *(long *)PTR__kCFPreferencesCurrentApplication_10082e0f8;
    DAT_1008a2330 = param_3;
  }
  lVar2 = FUN_1001722b7(param_1,param_3);
  if (lVar2 != 0) {
    cVar1 = FUN_100165191(lVar2);
    _CFRelease(lVar2);
    if (cVar1 != '\0') {
      param_2 = 0;
    }
  }
  return param_2;
}

