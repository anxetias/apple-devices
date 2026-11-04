// name: FUN_1001a9738
// address: 1001a9738

bool FUN_1001a9738(long *param_1,undefined8 *param_2,uint *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long local_20;
  
  if (*param_1 == 0) {
    return false;
  }
  cVar1 = _CFDictionaryGetValueIfPresent(*param_1,*param_2,&local_20);
  if (local_20 == 0 || cVar1 == '\0') {
    return false;
  }
  lVar2 = _CFGetTypeID();
  lVar3 = _CFNumberGetTypeID();
  if (lVar2 == lVar3) {
    cVar1 = _CFNumberGetValue(local_20,3,param_3);
    return cVar1 != '\0';
  }
  lVar2 = _CFGetTypeID(local_20);
  lVar3 = _CFBooleanGetTypeID();
  if (lVar2 == lVar3) {
    cVar1 = _CFBooleanGetValue();
    *param_3 = (uint)(cVar1 != '\0');
  }
  else {
    lVar2 = _CFGetTypeID(local_20);
    lVar3 = _CFStringGetTypeID();
    if (lVar2 != lVar3) {
      return false;
    }
    cVar1 = FUN_100167475(local_20);
    if (cVar1 == '\0') {
      return false;
    }
    *param_3 = 0;
  }
  return true;
}

