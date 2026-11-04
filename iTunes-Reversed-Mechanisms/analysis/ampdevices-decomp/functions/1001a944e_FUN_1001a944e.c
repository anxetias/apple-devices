// name: FUN_1001a944e
// address: 1001a944e

undefined8 FUN_1001a944e(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  if (*param_1 == 0) {
    return 0;
  }
  cVar1 = _CFDictionaryGetValueIfPresent(*param_1,*param_2,&local_20);
  if (local_20 == 0 || cVar1 == '\0') {
    return 0;
  }
  lVar2 = _CFGetTypeID();
  lVar3 = _CFStringGetTypeID();
  if (lVar2 != lVar3) {
    lVar2 = _CFGetTypeID(local_20);
    lVar3 = _CFNumberGetTypeID();
    if (lVar2 == lVar3) {
      cVar1 = _CFNumberGetValue(local_20,4,&local_38);
      if (cVar1 != '\0') {
        FUN_1001b90b6(local_30,local_38);
        FUN_1001b80b2(param_3,local_30);
        goto LAB_1001a9549;
      }
    }
    else {
      lVar2 = _CFGetTypeID(local_20);
      lVar3 = _CFBooleanGetTypeID();
      if (lVar2 == lVar3) {
        cVar1 = _CFBooleanGetValue(local_20);
        FUN_1001b90b6(local_30,cVar1 != '\0');
        FUN_1001b80b2(param_3,local_30);
        goto LAB_1001a9549;
      }
    }
    return 0;
  }
  FUN_1001b7eb0(local_30,local_20);
  FUN_1001b80b2(param_3,local_30);
LAB_1001a9549:
  FUN_1001b7a50(local_30);
  return 1;
}

