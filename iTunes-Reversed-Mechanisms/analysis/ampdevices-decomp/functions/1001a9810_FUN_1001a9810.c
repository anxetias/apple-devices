// name: FUN_1001a9810
// address: 1001a9810

bool FUN_1001a9810(long *param_1,undefined8 *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long local_20;
  
  if (*param_1 == 0) {
    return false;
  }
  cVar1 = _CFDictionaryGetValueIfPresent(*param_1,*param_2,&local_20);
  if (local_20 == 0 || cVar1 == '\0') {
LAB_1001a98d7:
    bVar2 = false;
  }
  else {
    lVar3 = _CFGetTypeID();
    lVar4 = _CFNumberGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFNumberGetValue(local_20,4,param_3);
      return cVar1 != '\0';
    }
    lVar3 = _CFGetTypeID(local_20);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue();
      *param_3 = (ulong)(cVar1 != '\0');
    }
    else {
      lVar3 = _CFGetTypeID(local_20);
      lVar4 = _CFStringGetTypeID();
      if ((lVar3 != lVar4) || (cVar1 = FUN_100167475(local_20), cVar1 == '\0')) goto LAB_1001a98d7;
      *param_3 = 0;
    }
    bVar2 = true;
  }
  return bVar2;
}

