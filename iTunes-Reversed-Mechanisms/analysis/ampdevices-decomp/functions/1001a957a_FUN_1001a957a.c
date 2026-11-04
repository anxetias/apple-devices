// name: FUN_1001a957a
// address: 1001a957a

undefined8 FUN_1001a957a(long *param_1,undefined8 *param_2,undefined1 *param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long local_20;
  
  if (*param_1 == 0) {
    return 0;
  }
  cVar1 = _CFDictionaryGetValueIfPresent(*param_1,*param_2,&local_20);
  if (local_20 == 0 || cVar1 == '\0') {
    return 0;
  }
  lVar2 = _CFGetTypeID();
  lVar3 = _CFBooleanGetTypeID();
  if (lVar2 == lVar3) {
    *param_3 = local_20 == *(long *)PTR__kCFBooleanTrue_10082e038;
  }
  else {
    lVar2 = _CFGetTypeID();
    lVar3 = _CFNumberGetTypeID();
    if (lVar2 == lVar3) {
      cVar1 = _CFNumberGetValue(local_20,4);
    }
    else {
      lVar2 = _CFGetTypeID(local_20);
      lVar3 = _CFStringGetTypeID();
      if (lVar2 != lVar3) {
        return 0;
      }
      lVar2 = _CFStringCompare(local_20,&cf_true,1);
      if ((lVar2 == 0) || (lVar2 = _CFStringCompare(local_20,&cf_YES,1), lVar2 == 0)) {
        *param_3 = 1;
        return 1;
      }
      cVar1 = FUN_100167475(local_20);
    }
    if (cVar1 == '\0') {
      return 0;
    }
    *param_3 = 0;
  }
  return 1;
}

